#! /usr/bin/python3


import re

FLAG_LEN = 70

SOURCE_FILE = 'checkFlag.c'

POSITION_RE = r'\slocal_.*? = ([0-9a-zA-Z]+);'
CHAR_RE	    = r'\'([0-9a-zA-Z\{\}]+)\'\);'    


def find_positions(lines, index):
	positions = []
	if 'if (flag_length ==' in lines[index] or 'if (is_flag ==' in lines[index]:
		index += 1
		p = re.search(POSITION_RE, lines[index])
		while (p):
			pos = p.group(1)
			if pos.startswith('0x'):
				positions.append(int(pos,16))
			else:
				positions.append(int(pos))

			index += 1
			p = re.search(POSITION_RE, lines[index])

	return positions


def find_char(lines, index):
	while not re.search(CHAR_RE, lines[index]):
		index += 1

	return re.search(CHAR_RE, lines[index]).group(1)


src = ''
with open(SOURCE_FILE, 'r') as fd:
	src = fd.readlines()

char_map = {}
for i, line in enumerate(src):
	positions = find_positions(src, i)
	if positions:
		c = find_char(src, i)
		char_map[c] = positions

flag = [None]*FLAG_LEN
for k, v in char_map.items():
	for i in v:
		flag[i] = k

print(''.join(flag))

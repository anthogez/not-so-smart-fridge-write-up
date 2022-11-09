
void __thiscall Service::checkFlag(Service *this,Request *request,ResponseWriter *response)

{
  char cVar1;
  bool is_flag;
  basic_ostream *this_00;
  long flag_length;
  long in_FS_OFFSET;
  undefined4 *__a;
  undefined8 uVar2;
  char ref;
  Promise<long_int> local_1338;
  Promise<long_int> local_12f8;
  Promise<long_int> local_12b8;
  Promise<long_int> local_1278;
  Promise<long_int> local_1238;
  Promise<long_int> local_11f8;
  Promise<long_int> local_11b8;
  Promise<long_int> local_1178;
  Promise<long_int> local_1138;
  Promise<long_int> local_10f8;
  Promise<long_int> local_10b8;
  Promise<long_int> local_1078;
  Promise<long_int> local_1038;
  Promise<long_int> local_ff8;
  Promise<long_int> local_fb8;
  Promise<long_int> local_f78;
  Promise<long_int> local_f38;
  Promise<long_int> local_ef8;
  Promise<long_int> local_eb8;
  Promise<long_int> local_e78;
  Promise<long_int> local_e38;
  Promise<long_int> local_df8;
  Promise<long_int> local_db8;
  Promise<long_int> local_d78;
  Promise<long_int> local_d38;
  Promise<long_int> local_cf8;
  Promise<long_int> local_cb8;
  Promise<long_int> local_c78;
  Promise<long_int> local_c38;
  Promise<long_int> local_bf8;
  Promise<long_int> local_bb8;
  Promise<long_int> local_b78;
  Promise<long_int> local_b38;
  Promise<long_int> local_af8;
  Promise<long_int> local_ab8;
  Promise<long_int> local_a78;
  Promise<long_int> local_a38;
  Promise<long_int> local_9f8;
  Promise<long_int> local_9b8;
  Promise<long_int> local_978;
  Promise<long_int> local_938;
  Promise<long_int> local_8f8;
  Promise<long_int> local_8b8;
  Promise<long_int> local_878;
  Promise<long_int> local_838;
  Promise<long_int> local_7f8;
  Promise<long_int> local_7b8;
  Promise<long_int> local_778;
  Promise<long_int> local_738;
  Promise<long_int> local_6f8;
  Promise<long_int> local_6b8;
  Promise<long_int> local_678;
  Promise<long_int> local_638;
  Promise<long_int> local_5f8;
  Promise<long_int> local_5b8;
  Promise<long_int> local_578;
  Promise<long_int> local_538;
  Promise<long_int> local_4f8;
  Promise<long_int> local_4b8;
  Promise<long_int> local_478;
  Promise<long_int> local_438;
  Promise<long_int> local_3f8;
  Promise<long_int> local_3b8;
  Promise<long_int> local_378;
  Promise<long_int> local_338;
  Promise<long_int> local_2f8;
  Promise<long_int> local_2b8;
  Promise<long_int> local_278;
  Promise<long_int> local_238;
  Promise<long_int> local_1f8;
  Promise<long_int> local_1b8;
  Promise<long_int> input_flag;
  string flag;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> local_118;
  undefined local_f8 [8];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  MediaType position;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator();
  std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>::basic_string<>
            (&local_118,":flag",(allocator<char> *)&local_1f8);
  cVar1 = Pistache::Rest::Request::hasParam((basic_string *)request);
  if (cVar1 == '\0') {
    std::allocator<char>::allocator();
    std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>::basic_string<>
              (&flag,"",(allocator<char> *)&input_flag);
    std::allocator<char>::~allocator((allocator<char> *)&input_flag);
  }
  else {
    std::allocator<char>::allocator();
    std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>::basic_string<>
              ((basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)local_f8,":flag"
               ,(allocator<char> *)&local_1b8);
    Pistache::Rest::Request::param(&position.top_);
    Pistache::Rest::TypedParam::as<std::__cxx11::basic_string<char>_>(&flag,(TypedParam *)&position)
    ;
    Pistache::Rest::TypedParam::~TypedParam((TypedParam *)&position);
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
              ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)local_f8);
    std::allocator<char>::~allocator((allocator<char> *)&local_1b8);
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&local_118);
  std::allocator<char>::~allocator((allocator<char> *)&local_1f8);
  this_00 = std::operator<<((basic_ostream *)std::cout,(basic_string *)&flag);
  std::basic_ostream<char,std::char_traits<char>>::operator<<
            ((basic_ostream<char,std::char_traits<char>> *)this_00,
             std::endl<char,std::char_traits<char>>);
  flag_length = std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::length
                          ();
  if (flag_length == 70) {
    local_f8._0_4_ = 9;
    local_f8._4_4_ = 0x1a;
    local_f0 = 0x25;
    local_ec = 0x3c;
    local_e8 = 0x3f;
    __a = (undefined4 *)local_f8;
    uVar2 = 5;
    std::allocator<int>::allocator((allocator<int> *)&local_1b8);
    std::vector<int,_std::allocator<int>_>::vector
              ((vector<int,_std::allocator<int>_> *)&input_flag,
               (initializer_list<int>)CONCAT88(uVar2,__a),(allocator_type *)__a);
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
              (&position.top_);
    is_flag = checkIndexes(this,(string *)&position,(vector<int,_std::allocator<int>_> *)&input_flag
                           ,'7');
    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
              ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&position);
    std::vector<int,_std::allocator<int>_>::~vector
              ((vector<int,_std::allocator<int>_> *)&input_flag);
    std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
    if (is_flag == true) {
      local_f8._0_4_ = 0xf;
      local_f8._4_4_ = 0x29;
      local_f0 = 0x43;
      local_ec = 0x44;
      std::allocator<int>::allocator((allocator<int> *)&local_1b8);
      std::vector<int,_std::allocator<int>_>::vector
                ((vector<int,_std::allocator<int>_> *)&input_flag,
                 (initializer_list<int>)CONCAT88(uVar2,__a),(allocator_type *)local_f8);
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
                (&position.top_);
      is_flag = checkIndexes(this,(string *)&position,
                             (vector<int,_std::allocator<int>_> *)&input_flag,'c');
      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
                ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&position);
      std::vector<int,_std::allocator<int>_>::~vector
                ((vector<int,_std::allocator<int>_> *)&input_flag);
      std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
      if (is_flag == true) {
        local_f8._0_4_ = 0xd;
        local_f8._4_4_ = 0x16;
        local_f0 = 0x1d;
        local_ec = 0x1f;
        local_e8 = 0x27;
        local_e4 = 0x28;
        local_e0 = 0x2d;
        local_dc = 0x3b;
        std::allocator<int>::allocator((allocator<int> *)&local_1b8);
        std::vector<int,_std::allocator<int>_>::vector
                  ((vector<int,_std::allocator<int>_> *)&input_flag,
                   (initializer_list<int>)CONCAT88(uVar2,__a),(allocator_type *)local_f8);
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
                  (&position.top_);
        is_flag = checkIndexes(this,(string *)&position,
                               (vector<int,_std::allocator<int>_> *)&input_flag,'5');
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&position);
        std::vector<int,_std::allocator<int>_>::~vector
                  ((vector<int,_std::allocator<int>_> *)&input_flag);
        std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
        if (is_flag == true) {
          local_f8._0_4_ = 1;
          std::allocator<int>::allocator((allocator<int> *)&local_1b8);
          std::vector<int,_std::allocator<int>_>::vector
                    ((vector<int,_std::allocator<int>_> *)&input_flag,
                     (initializer_list<int>)CONCAT88(uVar2,__a),(allocator_type *)local_f8);
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
                    (&position.top_);
          is_flag = checkIndexes(this,(string *)&position,
                                 (vector<int,_std::allocator<int>_> *)&input_flag,'N');
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
          ~basic_string((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&position)
          ;
          std::vector<int,_std::allocator<int>_>::~vector
                    ((vector<int,_std::allocator<int>_> *)&input_flag);
          std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
          if (is_flag == true) {
            local_f8._0_4_ = 0xd;
            local_f8._4_4_ = 0x16;
            local_f0 = 0x1d;
            local_ec = 0x1f;
            local_e8 = 0x27;
            local_e4 = 0x28;
            local_e0 = 0x2d;
            local_dc = 0x3b;
            std::allocator<int>::allocator((allocator<int> *)&local_1b8);
            std::vector<int,_std::allocator<int>_>::vector
                      ((vector<int,_std::allocator<int>_> *)&input_flag,
                       (initializer_list<int>)CONCAT88(uVar2,__a),(allocator_type *)local_f8);
            std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
            basic_string(&position.top_);
            is_flag = checkIndexes(this,(string *)&position,
                                   (vector<int,_std::allocator<int>_> *)&input_flag,'5');
            std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
            ~basic_string((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                          &position);
            std::vector<int,_std::allocator<int>_>::~vector
                      ((vector<int,_std::allocator<int>_> *)&input_flag);
            std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
            if (is_flag == true) {
              local_f8._0_4_ = 2;
              std::allocator<int>::allocator((allocator<int> *)&local_1b8);
              std::vector<int,_std::allocator<int>_>::vector
                        ((vector<int,_std::allocator<int>_> *)&input_flag,
                         (initializer_list<int>)CONCAT88(uVar2,__a),(allocator_type *)local_f8);
              std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
              basic_string(&position.top_);
              is_flag = checkIndexes(this,(string *)&position,
                                     (vector<int,_std::allocator<int>_> *)&input_flag,'Y');
              std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
              ~basic_string((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                            &position);
              std::vector<int,_std::allocator<int>_>::~vector
                        ((vector<int,_std::allocator<int>_> *)&input_flag);
              std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
              if (is_flag == true) {
                local_f8._0_4_ = 0xf;
                local_f8._4_4_ = 0x29;
                local_f0 = 0x43;
                local_ec = 0x44;
                std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                std::vector<int,_std::allocator<int>_>::vector
                          ((vector<int,_std::allocator<int>_> *)&input_flag,
                           (initializer_list<int>)CONCAT88(uVar2,__a),(allocator_type *)local_f8);
                std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                basic_string(&position.top_);
                is_flag = checkIndexes(this,(string *)&position,
                                       (vector<int,_std::allocator<int>_> *)&input_flag,'c');
                std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                ~basic_string((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                              &position);
                std::vector<int,_std::allocator<int>_>::~vector
                          ((vector<int,_std::allocator<int>_> *)&input_flag);
                std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                if (is_flag == true) {
                  local_f8._0_4_ = 0xe;
                  local_f8._4_4_ = 0x2e;
                  std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                  std::vector<int,_std::allocator<int>_>::vector
                            ((vector<int,_std::allocator<int>_> *)&input_flag,
                             (initializer_list<int>)CONCAT88(uVar2,__a),(allocator_type *)local_f8);
                  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                  basic_string(&position.top_);
                  is_flag = checkIndexes(this,(string *)&position,
                                         (vector<int,_std::allocator<int>_> *)&input_flag,'9');
                  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                  ~basic_string((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                                &position);
                  std::vector<int,_std::allocator<int>_>::~vector
                            ((vector<int,_std::allocator<int>_> *)&input_flag);
                  std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                  if (is_flag == true) {
                    local_f8._0_4_ = 6;
                    local_f8._4_4_ = 0x22;
                    local_f0 = 0x3a;
                    std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                    std::vector<int,_std::allocator<int>_>::vector
                              ((vector<int,_std::allocator<int>_> *)&input_flag,
                               (initializer_list<int>)CONCAT88(uVar2,__a),(allocator_type *)local_f8
                              );
                    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                    basic_string(&position.top_);
                    is_flag = checkIndexes(this,(string *)&position,
                                           (vector<int,_std::allocator<int>_> *)&input_flag,'a');
                    std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                    ~basic_string((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                                  &position);
                    std::vector<int,_std::allocator<int>_>::~vector
                              ((vector<int,_std::allocator<int>_> *)&input_flag);
                    std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                    if (is_flag == true) {
                      local_f8._0_4_ = 7;
                      local_f8._4_4_ = 0x15;
                      local_f0 = 0x30;
                      std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                      std::vector<int,_std::allocator<int>_>::vector
                                ((vector<int,_std::allocator<int>_> *)&input_flag,
                                 (initializer_list<int>)CONCAT88(uVar2,__a),
                                 (allocator_type *)local_f8);
                      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                      basic_string(&position.top_);
                      is_flag = checkIndexes(this,(string *)&position,
                                             (vector<int,_std::allocator<int>_> *)&input_flag,'f');
                      std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                      ~basic_string((basic_string<char,std::char_traits<char>,std::allocator<char>>
                                     *)&position);
                      std::vector<int,_std::allocator<int>_>::~vector
                                ((vector<int,_std::allocator<int>_> *)&input_flag);
                      std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                      if (is_flag == true) {
                        local_f8._0_4_ = 0x10;
                        local_f8._4_4_ = 0x12;
                        local_f0 = 0x13;
                        local_ec = 0x18;
                        local_e8 = 0x2a;
                        local_e4 = 0x31;
                        std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                        std::vector<int,_std::allocator<int>_>::vector
                                  ((vector<int,_std::allocator<int>_> *)&input_flag,
                                   (initializer_list<int>)CONCAT88(uVar2,__a),
                                   (allocator_type *)local_f8);
                        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                        ::basic_string(&position.top_);
                        is_flag = checkIndexes(this,(string *)&position,
                                               (vector<int,_std::allocator<int>_> *)&input_flag,'4')
                        ;
                        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>
                        ::~basic_string((basic_string<char,std::char_traits<char>,std::allocator<cha r>>
                                         *)&position);
                        std::vector<int,_std::allocator<int>_>::~vector
                                  ((vector<int,_std::allocator<int>_> *)&input_flag);
                        std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                        if (is_flag == true) {
                          local_f8._0_4_ = 0x39;
                          local_f8._4_4_ = 0x3d;
                          local_f0 = 0x41;
                          local_ec = 0x42;
                          std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                          std::vector<int,_std::allocator<int>_>::vector
                                    ((vector<int,_std::allocator<int>_> *)&input_flag,
                                     (initializer_list<int>)CONCAT88(uVar2,__a),
                                     (allocator_type *)local_f8);
                          std::__cxx11::
                          basic_string<char,std::char_traits<char>,std::allocator<char>>::
                          basic_string(&position.top_);
                          is_flag = checkIndexes(this,(string *)&position,
                                                 (vector<int,_std::allocator<int>_> *)&input_flag,
                                                 'e');
                          std::__cxx11::
                          basic_string<char,std::char_traits<char>,std::allocator<char>>::
                          ~basic_string((basic_string<char,std::char_traits<char>,std::allocator<cha r>>
                                         *)&position);
                          std::vector<int,_std::allocator<int>_>::~vector
                                    ((vector<int,_std::allocator<int>_> *)&input_flag);
                          std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                          if (is_flag == true) {
                            local_f8._0_4_ = 0x10;
                            local_f8._4_4_ = 0x12;
                            local_f0 = 0x13;
                            local_ec = 0x18;
                            local_e8 = 0x2a;
                            local_e4 = 0x31;
                            std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                            std::vector<int,_std::allocator<int>_>::vector
                                      ((vector<int,_std::allocator<int>_> *)&input_flag,
                                       (initializer_list<int>)CONCAT88(uVar2,__a),
                                       (allocator_type *)local_f8);
                            std::__cxx11::
                            basic_string<char,std::char_traits<char>,std::allocator<char>>::
                            basic_string(&position.top_);
                            is_flag = checkIndexes(this,(string *)&position,
                                                   (vector<int,_std::allocator<int>_> *)&input_flag,
                                                   '4');
                            std::__cxx11::
                            basic_string<char,std::char_traits<char>,std::allocator<char>>::
                            ~basic_string((basic_string<char,std::char_traits<char>,std::allocator<c har>>
                                           *)&position);
                            std::vector<int,_std::allocator<int>_>::~vector
                                      ((vector<int,_std::allocator<int>_> *)&input_flag);
                            std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                            if (is_flag == true) {
                              local_f8._0_4_ = 0xb;
                              local_f8._4_4_ = 0x1b;
                              local_f0 = 0x1e;
                              local_ec = 0x20;
                              local_e8 = 0x26;
                              local_e4 = 0x36;
                              local_e0 = 0x40;
                              std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                              std::vector<int,_std::allocator<int>_>::vector
                                        ((vector<int,_std::allocator<int>_> *)&input_flag,
                                         (initializer_list<int>)CONCAT88(uVar2,__a),
                                         (allocator_type *)local_f8);
                              std::__cxx11::
                              basic_string<char,std::char_traits<char>,std::allocator<char>>::
                              basic_string(&position.top_);
                              is_flag = checkIndexes(this,(string *)&position,
                                                     (vector<int,_std::allocator<int>_> *)
                                                     &input_flag,'1');
                              std::__cxx11::
                              basic_string<char,std::char_traits<char>,std::allocator<char>>::
                              ~basic_string((basic_string<char,std::char_traits<char>,std::allocator <char>>
                                             *)&position);
                              std::vector<int,_std::allocator<int>_>::~vector
                                        ((vector<int,_std::allocator<int>_> *)&input_flag);
                              std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                              if (is_flag == true) {
                                local_f8._0_4_ = 9;
                                local_f8._4_4_ = 0x1a;
                                local_f0 = 0x25;
                                local_ec = 0x3c;
                                local_e8 = 0x3f;
                                std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                                std::vector<int,_std::allocator<int>_>::vector
                                          ((vector<int,_std::allocator<int>_> *)&input_flag,
                                           (initializer_list<int>)CONCAT88(uVar2,__a),
                                           (allocator_type *)local_f8);
                                std::__cxx11::
                                basic_string<char,std::char_traits<char>,std::allocator<char>>::
                                basic_string(&position.top_);
                                is_flag = checkIndexes(this,(string *)&position,
                                                       (vector<int,_std::allocator<int>_> *)
                                                       &input_flag,'7');
                                std::__cxx11::
                                basic_string<char,std::char_traits<char>,std::allocator<char>>::
                                ~basic_string((basic_string<char,std::char_traits<char>,std::allocat or<char>>
                                               *)&position);
                                std::vector<int,_std::allocator<int>_>::~vector
                                          ((vector<int,_std::allocator<int>_> *)&input_flag);
                                std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                                if (is_flag == true) {
                                  local_f8._0_4_ = 0x19;
                                  local_f8._4_4_ = 0x35;
                                  std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                                  std::vector<int,_std::allocator<int>_>::vector
                                            ((vector<int,_std::allocator<int>_> *)&input_flag,
                                             (initializer_list<int>)CONCAT88(uVar2,__a),
                                             (allocator_type *)local_f8);
                                  std::__cxx11::
                                  basic_string<char,std::char_traits<char>,std::allocator<char>>::
                                  basic_string(&position.top_);
                                  is_flag = checkIndexes(this,(string *)&position,
                                                         (vector<int,_std::allocator<int>_> *)
                                                         &input_flag,'0');
                                  std::__cxx11::
                                  basic_string<char,std::char_traits<char>,std::allocator<char>>::
                                  ~basic_string((basic_string<char,std::char_traits<char>,std::alloc ator<char>>
                                                 *)&position);
                                  std::vector<int,_std::allocator<int>_>::~vector
                                            ((vector<int,_std::allocator<int>_> *)&input_flag);
                                  std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                                  if (is_flag == true) {
                                    local_f8._0_4_ = 0x11;
                                    local_f8._4_4_ = 0x23;
                                    local_f0 = 0x24;
                                    local_ec = 0x32;
                                    local_e8 = 0x33;
                                    std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                                    std::vector<int,_std::allocator<int>_>::vector
                                              ((vector<int,_std::allocator<int>_> *)&input_flag,
                                               (initializer_list<int>)CONCAT88(uVar2,__a),
                                               (allocator_type *)local_f8);
                                    std::__cxx11::
                                    basic_string<char,std::char_traits<char>,std::allocator<char>>::
                                    basic_string(&position.top_);
                                    is_flag = checkIndexes(this,(string *)&position,
                                                           (vector<int,_std::allocator<int>_> *)
                                                           &input_flag,'b');
                                    std::__cxx11::
                                    basic_string<char,std::char_traits<char>,std::allocator<char>>::
                                    ~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                    std::vector<int,_std::allocator<int>_>::~vector
                                              ((vector<int,_std::allocator<int>_> *)&input_flag);
                                    std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                                    if (is_flag == true) {
                                      local_f8._0_4_ = 0x10;
                                      local_f8._4_4_ = 0x12;
                                      local_f0 = 0x13;
                                      local_ec = 0x18;
                                      local_e8 = 0x2a;
                                      local_e4 = 0x31;
                                      std::allocator<int>::allocator((allocator<int> *)&local_1b8);
                                      std::vector<int,_std::allocator<int>_>::vector
                                                ((vector<int,_std::allocator<int>_> *)&input_flag,
                                                 (initializer_list<int>)CONCAT88(uVar2,__a),
                                                 (allocator_type *)local_f8);
                                      std::__cxx11::
                                      basic_string<char,std::char_traits<char>,std::allocator<char>>
                                      ::basic_string(&position.top_);
                                      is_flag = checkIndexes(this,(string *)&position,
                                                             (vector<int,_std::allocator<int>_> *)
                                                             &input_flag,'4');
                                      std::__cxx11::
                                      basic_string<char,std::char_traits<char>,std::allocator<char>>
                                      ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                      std::vector<int,_std::allocator<int>_>::~vector
                                                ((vector<int,_std::allocator<int>_> *)&input_flag);
                                      std::allocator<int>::~allocator((allocator<int> *)&local_1b8);
                                      if (is_flag == true) {
                                        local_f8._0_4_ = 0x10;
                                        local_f8._4_4_ = 0x12;
                                        local_f0 = 0x13;
                                        local_ec = 0x18;
                                        local_e8 = 0x2a;
                                        local_e4 = 0x31;
                                        std::allocator<int>::allocator((allocator<int> *)&local_1b8)
                                        ;
                                        std::vector<int,_std::allocator<int>_>::vector
                                                  ((vector<int,_std::allocator<int>_> *)&input_flag,
                                                   (initializer_list<int>)CONCAT88(uVar2,__a),
                                                   (allocator_type *)local_f8);
                                        std::__cxx11::
                                        basic_string<char,std::char_traits<char>,std::allocator<char >>
                                        ::basic_string(&position.top_);
                                        is_flag = checkIndexes(this,(string *)&position,
                                                               (vector<int,_std::allocator<int>_> *)
                                                               &input_flag,'4');
                                        std::__cxx11::
                                        basic_string<char,std::char_traits<char>,std::allocator<char >>
                                        ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                        std::vector<int,_std::allocator<int>_>::~vector
                                                  ((vector<int,_std::allocator<int>_> *)&input_flag)
                                        ;
                                        std::allocator<int>::~allocator
                                                  ((allocator<int> *)&local_1b8);
                                        if (is_flag == true) {
                                          local_f8._0_4_ = 0x39;
                                          local_f8._4_4_ = 0x3d;
                                          local_f0 = 0x41;
                                          local_ec = 0x42;
                                          std::allocator<int>::allocator
                                                    ((allocator<int> *)&local_1b8);
                                          std::vector<int,_std::allocator<int>_>::vector
                                                    ((vector<int,_std::allocator<int>_> *)
                                                     &input_flag,
                                                     (initializer_list<int>)CONCAT88(uVar2,__a),
                                                     (allocator_type *)local_f8);
                                          std::__cxx11::
                                          basic_string<char,std::char_traits<char>,std::allocator<ch ar>>
                                          ::basic_string(&position.top_);
                                          is_flag = checkIndexes(this,(string *)&position,
                                                                 (vector<int,_std::allocator<int>_>
                                                                  *)&input_flag,'e');
                                          std::__cxx11::
                                          basic_string<char,std::char_traits<char>,std::allocator<ch ar>>
                                          ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                          std::vector<int,_std::allocator<int>_>::~vector
                                                    ((vector<int,_std::allocator<int>_> *)
                                                     &input_flag);
                                          std::allocator<int>::~allocator
                                                    ((allocator<int> *)&local_1b8);
                                          if (is_flag == true) {
                                            local_f8._0_4_ = 7;
                                            local_f8._4_4_ = 0x15;
                                            local_f0 = 0x30;
                                            std::allocator<int>::allocator
                                                      ((allocator<int> *)&local_1b8);
                                            std::vector<int,_std::allocator<int>_>::vector
                                                      ((vector<int,_std::allocator<int>_> *)
                                                       &input_flag,
                                                       (initializer_list<int>)CONCAT88(uVar2,__a),
                                                       (allocator_type *)local_f8);
                                            std::__cxx11::
                                            basic_string<char,std::char_traits<char>,std::allocator< char>>
                                            ::basic_string(&position.top_);
                                            is_flag = checkIndexes(this,(string *)&position,
                                                                   (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'f');
                                            std::__cxx11::
                                            basic_string<char,std::char_traits<char>,std::allocator< char>>
                                            ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                            std::vector<int,_std::allocator<int>_>::~vector
                                                      ((vector<int,_std::allocator<int>_> *)
                                                       &input_flag);
                                            std::allocator<int>::~allocator
                                                      ((allocator<int> *)&local_1b8);
                                            if (is_flag == true) {
                                              local_f8._0_4_ = 0x10;
                                              local_f8._4_4_ = 0x12;
                                              local_f0 = 0x13;
                                              local_ec = 0x18;
                                              local_e8 = 0x2a;
                                              local_e4 = 0x31;
                                              std::allocator<int>::allocator
                                                        ((allocator<int> *)&local_1b8);
                                              std::vector<int,_std::allocator<int>_>::vector
                                                        ((vector<int,_std::allocator<int>_> *)
                                                         &input_flag,
                                                         (initializer_list<int>)CONCAT88(uVar2,__a),
                                                         (allocator_type *)local_f8);
                                              std::__cxx11::
                                              basic_string<char,std::char_traits<char>,std::allocato r<char>>
                                              ::basic_string(&position.top_);
                                              is_flag = checkIndexes(this,(string *)&position,
                                                                     (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '4');
                                              std::__cxx11::
                                              basic_string<char,std::char_traits<char>,std::allocato r<char>>
                                              ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                              std::vector<int,_std::allocator<int>_>::~vector
                                                        ((vector<int,_std::allocator<int>_> *)
                                                         &input_flag);
                                              std::allocator<int>::~allocator
                                                        ((allocator<int> *)&local_1b8);
                                              if (is_flag == true) {
                                                local_f8._0_4_ = 0xd;
                                                local_f8._4_4_ = 0x16;
                                                local_f0 = 0x1d;
                                                local_ec = 0x1f;
                                                local_e8 = 0x27;
                                                local_e4 = 0x28;
                                                local_e0 = 0x2d;
                                                local_dc = 0x3b;
                                                std::allocator<int>::allocator
                                                          ((allocator<int> *)&local_1b8);
                                                std::vector<int,_std::allocator<int>_>::vector
                                                          ((vector<int,_std::allocator<int>_> *)
                                                           &input_flag,
                                                           (initializer_list<int>)
                                                           CONCAT88(uVar2,__a),
                                                           (allocator_type *)local_f8);
                                                std::__cxx11::
                                                basic_string<char,std::char_traits<char>,std::alloca tor<char>>
                                                ::basic_string(&position.top_);
                                                is_flag = checkIndexes(this,(string *)&position,
                                                                       (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '5');
                                                std::__cxx11::
                                                basic_string<char,std::char_traits<char>,std::alloca tor<char>>
                                                ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                std::vector<int,_std::allocator<int>_>::~vector
                                                          ((vector<int,_std::allocator<int>_> *)
                                                           &input_flag);
                                                std::allocator<int>::~allocator
                                                          ((allocator<int> *)&local_1b8);
                                                if (is_flag == true) {
                                                  local_f8._0_4_ = 3;
                                                  std::allocator<int>::allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  std::vector<int,_std::allocator<int>_>::vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag,
                                                             (initializer_list<int>)
                                                             CONCAT88(uVar2,__a),
                                                             (allocator_type *)local_f8);
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'K');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xd;
                                                    local_f8._4_4_ = 0x16;
                                                    local_f0 = 0x1d;
                                                    local_ec = 0x1f;
                                                    local_e8 = 0x27;
                                                    local_e4 = 0x28;
                                                    local_e0 = 0x2d;
                                                    local_dc = 0x3b;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '5');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xc;
                                                    local_f8._4_4_ = 0x17;
                                                    local_f0 = 0x1c;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '3');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 5;
                                                    local_f8._4_4_ = 8;
                                                    local_f0 = 10;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '6');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x10;
                                                    local_f8._4_4_ = 0x12;
                                                    local_f0 = 0x13;
                                                    local_ec = 0x18;
                                                    local_e8 = 0x2a;
                                                    local_e4 = 0x31;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '4');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xe;
                                                    local_f8._4_4_ = 0x2e;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '9');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 5;
                                                    local_f8._4_4_ = 8;
                                                    local_f0 = 10;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '6');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x21;
                                                    local_f8._4_4_ = 0x2b;
                                                    local_f0 = 0x34;
                                                    local_ec = 0x37;
                                                    local_e8 = 0x38;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '8');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x39;
                                                    local_f8._4_4_ = 0x3d;
                                                    local_f0 = 0x41;
                                                    local_ec = 0x42;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'e');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xc;
                                                    local_f8._4_4_ = 0x17;
                                                    local_f0 = 0x1c;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '3');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x11;
                                                    local_f8._4_4_ = 0x23;
                                                    local_f0 = 0x24;
                                                    local_ec = 0x32;
                                                    local_e8 = 0x33;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'b');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xb;
                                                    local_f8._4_4_ = 0x1b;
                                                    local_f0 = 0x1e;
                                                    local_ec = 0x20;
                                                    local_e8 = 0x26;
                                                    local_e4 = 0x36;
                                                    local_e0 = 0x40;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '1');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 6;
                                                    local_f8._4_4_ = 0x22;
                                                    local_f0 = 0x3a;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'a');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 6;
                                                    local_f8._4_4_ = 0x22;
                                                    local_f0 = 0x3a;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'a');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x2c;
                                                    local_f8._4_4_ = 0x2f;
                                                    local_f0 = 0x3e;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'd');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xf;
                                                    local_f8._4_4_ = 0x29;
                                                    local_f0 = 0x43;
                                                    local_ec = 0x44;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'c');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x21;
                                                    local_f8._4_4_ = 0x2b;
                                                    local_f0 = 0x34;
                                                    local_ec = 0x37;
                                                    local_e8 = 0x38;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '8');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x19;
                                                    local_f8._4_4_ = 0x35;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '0');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x11;
                                                    local_f8._4_4_ = 0x23;
                                                    local_f0 = 0x24;
                                                    local_ec = 0x32;
                                                    local_e8 = 0x33;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'b');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x11;
                                                    local_f8._4_4_ = 0x23;
                                                    local_f0 = 0x24;
                                                    local_ec = 0x32;
                                                    local_e8 = 0x33;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'b');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 4;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '{');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x14;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '2');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x21;
                                                    local_f8._4_4_ = 0x2b;
                                                    local_f0 = 0x34;
                                                    local_ec = 0x37;
                                                    local_e8 = 0x38;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '8');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x21;
                                                    local_f8._4_4_ = 0x2b;
                                                    local_f0 = 0x34;
                                                    local_ec = 0x37;
                                                    local_e8 = 0x38;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '8');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x39;
                                                    local_f8._4_4_ = 0x3d;
                                                    local_f0 = 0x41;
                                                    local_ec = 0x42;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'e');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 5;
                                                    local_f8._4_4_ = 8;
                                                    local_f0 = 10;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '6');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'S');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x45;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '}');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xb;
                                                    local_f8._4_4_ = 0x1b;
                                                    local_f0 = 0x1e;
                                                    local_ec = 0x20;
                                                    local_e8 = 0x26;
                                                    local_e4 = 0x36;
                                                    local_e0 = 0x40;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '1');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xd;
                                                    local_f8._4_4_ = 0x16;
                                                    local_f0 = 0x1d;
                                                    local_ec = 0x1f;
                                                    local_e8 = 0x27;
                                                    local_e4 = 0x28;
                                                    local_e0 = 0x2d;
                                                    local_dc = 0x3b;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '5');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 9;
                                                    local_f8._4_4_ = 0x1a;
                                                    local_f0 = 0x25;
                                                    local_ec = 0x3c;
                                                    local_e8 = 0x3f;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '7');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x2c;
                                                    local_f8._4_4_ = 0x2f;
                                                    local_f0 = 0x3e;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'd');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xb;
                                                    local_f8._4_4_ = 0x1b;
                                                    local_f0 = 0x1e;
                                                    local_ec = 0x20;
                                                    local_e8 = 0x26;
                                                    local_e4 = 0x36;
                                                    local_e0 = 0x40;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '1');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 7;
                                                    local_f8._4_4_ = 0x15;
                                                    local_f0 = 0x30;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'f');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xb;
                                                    local_f8._4_4_ = 0x1b;
                                                    local_f0 = 0x1e;
                                                    local_ec = 0x20;
                                                    local_e8 = 0x26;
                                                    local_e4 = 0x36;
                                                    local_e0 = 0x40;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '1');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xd;
                                                    local_f8._4_4_ = 0x16;
                                                    local_f0 = 0x1d;
                                                    local_ec = 0x1f;
                                                    local_e8 = 0x27;
                                                    local_e4 = 0x28;
                                                    local_e0 = 0x2d;
                                                    local_dc = 0x3b;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '5');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 9;
                                                    local_f8._4_4_ = 0x1a;
                                                    local_f0 = 0x25;
                                                    local_ec = 0x3c;
                                                    local_e8 = 0x3f;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '7');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xd;
                                                    local_f8._4_4_ = 0x16;
                                                    local_f0 = 0x1d;
                                                    local_ec = 0x1f;
                                                    local_e8 = 0x27;
                                                    local_e4 = 0x28;
                                                    local_e0 = 0x2d;
                                                    local_dc = 0x3b;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '5');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x11;
                                                    local_f8._4_4_ = 0x23;
                                                    local_f0 = 0x24;
                                                    local_ec = 0x32;
                                                    local_e8 = 0x33;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'b');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 9;
                                                    local_f8._4_4_ = 0x1a;
                                                    local_f0 = 0x25;
                                                    local_ec = 0x3c;
                                                    local_e8 = 0x3f;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '7');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x21;
                                                    local_f8._4_4_ = 0x2b;
                                                    local_f0 = 0x34;
                                                    local_ec = 0x37;
                                                    local_e8 = 0x38;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '8');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xd;
                                                    local_f8._4_4_ = 0x16;
                                                    local_f0 = 0x1d;
                                                    local_ec = 0x1f;
                                                    local_e8 = 0x27;
                                                    local_e4 = 0x28;
                                                    local_e0 = 0x2d;
                                                    local_dc = 0x3b;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '5');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0x2c;
                                                    local_f8._4_4_ = 0x2f;
                                                    local_f0 = 0x3e;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'd');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xc;
                                                    local_f8._4_4_ = 0x17;
                                                    local_f0 = 0x1c;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '3');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xb;
                                                    local_f8._4_4_ = 0x1b;
                                                    local_f0 = 0x1e;
                                                    local_ec = 0x20;
                                                    local_e8 = 0x26;
                                                    local_e4 = 0x36;
                                                    local_e0 = 0x40;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '1');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xf;
                                                    local_f8._4_4_ = 0x29;
                                                    local_f0 = 0x43;
                                                    local_ec = 0x44;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  'c');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    local_f8._0_4_ = 0xb;
                                                    local_f8._4_4_ = 0x1b;
                                                    local_f0 = 0x1e;
                                                    local_ec = 0x20;
                                                    local_e8 = 0x26;
                                                    local_e4 = 0x36;
                                                    local_e0 = 0x40;
                                                    std::allocator<int>::allocator
                                                              ((allocator<int> *)&local_1b8);
                                                    std::vector<int,_std::allocator<int>_>::vector
                                                              ((vector<int,_std::allocator<int>_> *)
                                                               &input_flag,
                                                               (initializer_list<int>)
                                                               CONCAT88(uVar2,__a),
                                                               (allocator_type *)local_f8);
                                                    std::__cxx11::
                                                                                                         
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::basic_string(&position.top_);
                                                  is_flag = checkIndexes(this,(string *)&position,
                                                                         (
                                                  vector<int,_std::allocator<int>_> *)&input_flag,
                                                  '1');
                                                  std::__cxx11::
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  ::~basic_string((
                                                  basic_string<char,std::char_traits<char>,std::allo cator<char>>
                                                  *)&position);
                                                  std::vector<int,_std::allocator<int>_>::~vector
                                                            ((vector<int,_std::allocator<int>_> *)
                                                             &input_flag);
                                                  std::allocator<int>::~allocator
                                                            ((allocator<int> *)&local_1b8);
                                                  if (is_flag == true) {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<3>
                                                              (&input_flag,response,200,
                                                               (char (*) [3])&DAT_00127267,&position
                                                              );
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&input_flag);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_1b8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_1b8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_1f8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_1f8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_238,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_238);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_278,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_278);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_2b8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_2b8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_2f8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_2f8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_338,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_338);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_378,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_378);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_3b8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_3b8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_3f8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_3f8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_438,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_438);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_478,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_478);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_4b8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_4b8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_4f8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_4f8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_538,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_538);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_578,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_578);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_5b8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_5b8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_5f8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_5f8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_638,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_638);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_678,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_678);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_6b8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_6b8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_6f8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_6f8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_738,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_738);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_778,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_778);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_7b8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_7b8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_7f8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_7f8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_838,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_838);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_878,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_878);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_8b8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_8b8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_8f8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_8f8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_938,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_938);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_978,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_978);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_9b8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_9b8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_9f8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_9f8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_a38,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_a38);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_a78,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_a78);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_ab8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_ab8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_af8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_af8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_b38,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_b38);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_b78,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_b78);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_bb8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_bb8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_bf8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_bf8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_c38,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_c38);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_c78,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_c78);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_cb8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_cb8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_cf8,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_cf8);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                  }
                                                  else {
                                                    Pistache::Http::Mime::MediaType::MediaType
                                                              (&position);
                                                    Pistache::Http::ResponseWriter::send<7>
                                                              (&local_d38,response,Forbidden,
                                                               (char (*) [7])"not ok",&position);
                                                    Pistache::Async::Promise<long_int>::~Promise
                                                              (&local_d38);
                                                    Pistache::Http::Mime::MediaType::~MediaType
                                                              (&position);
                                                  }
                                                }
                                                else {
                                                  Pistache::Http::Mime::MediaType::MediaType
                                                            (&position);
                                                  Pistache::Http::ResponseWriter::send<7>
                                                            (&local_d78,response,Forbidden,
                                                             (char (*) [7])"not ok",&position);
                                                  Pistache::Async::Promise<long_int>::~Promise
                                                            (&local_d78);
                                                  Pistache::Http::Mime::MediaType::~MediaType
                                                            (&position);
                                                }
                                              }
                                              else {
                                                Pistache::Http::Mime::MediaType::MediaType
                                                          (&position);
                                                Pistache::Http::ResponseWriter::send<7>
                                                          (&local_db8,response,Forbidden,
                                                           (char (*) [7])"not ok",&position);
                                                Pistache::Async::Promise<long_int>::~Promise
                                                          (&local_db8);
                                                Pistache::Http::Mime::MediaType::~MediaType
                                                          (&position);
                                              }
                                            }
                                            else {
                                              Pistache::Http::Mime::MediaType::MediaType(&position);
                                              Pistache::Http::ResponseWriter::send<7>
                                                        (&local_df8,response,Forbidden,
                                                         (char (*) [7])"not ok",&position);
                                              Pistache::Async::Promise<long_int>::~Promise
                                                        (&local_df8);
                                              Pistache::Http::Mime::MediaType::~MediaType(&position)
                                              ;
                                            }
                                          }
                                          else {
                                            Pistache::Http::Mime::MediaType::MediaType(&position);
                                            Pistache::Http::ResponseWriter::send<7>
                                                      (&local_e38,response,Forbidden,
                                                       (char (*) [7])"not ok",&position);
                                            Pistache::Async::Promise<long_int>::~Promise(&local_e38)
                                            ;
                                            Pistache::Http::Mime::MediaType::~MediaType(&position);
                                          }
                                        }
                                        else {
                                          Pistache::Http::Mime::MediaType::MediaType(&position);
                                          Pistache::Http::ResponseWriter::send<7>
                                                    (&local_e78,response,Forbidden,
                                                     (char (*) [7])"not ok",&position);
                                          Pistache::Async::Promise<long_int>::~Promise(&local_e78);
                                          Pistache::Http::Mime::MediaType::~MediaType(&position);
                                        }
                                      }
                                      else {
                                        Pistache::Http::Mime::MediaType::MediaType(&position);
                                        Pistache::Http::ResponseWriter::send<7>
                                                  (&local_eb8,response,Forbidden,
                                                   (char (*) [7])"not ok",&position);
                                        Pistache::Async::Promise<long_int>::~Promise(&local_eb8);
                                        Pistache::Http::Mime::MediaType::~MediaType(&position);
                                      }
                                    }
                                    else {
                                      Pistache::Http::Mime::MediaType::MediaType(&position);
                                      Pistache::Http::ResponseWriter::send<7>
                                                (&local_ef8,response,Forbidden,
                                                 (char (*) [7])"not ok",&position);
                                      Pistache::Async::Promise<long_int>::~Promise(&local_ef8);
                                      Pistache::Http::Mime::MediaType::~MediaType(&position);
                                    }
                                  }
                                  else {
                                    Pistache::Http::Mime::MediaType::MediaType(&position);
                                    Pistache::Http::ResponseWriter::send<7>
                                              (&local_f38,response,Forbidden,(char (*) [7])"not ok",
                                               &position);
                                    Pistache::Async::Promise<long_int>::~Promise(&local_f38);
                                    Pistache::Http::Mime::MediaType::~MediaType(&position);
                                  }
                                }
                                else {
                                  Pistache::Http::Mime::MediaType::MediaType(&position);
                                  Pistache::Http::ResponseWriter::send<7>
                                            (&local_f78,response,Forbidden,(char (*) [7])"not ok",
                                             &position);
                                  Pistache::Async::Promise<long_int>::~Promise(&local_f78);
                                  Pistache::Http::Mime::MediaType::~MediaType(&position);
                                }
                              }
                              else {
                                Pistache::Http::Mime::MediaType::MediaType(&position);
                                Pistache::Http::ResponseWriter::send<7>
                                          (&local_fb8,response,Forbidden,(char (*) [7])"not ok",
                                           &position);
                                Pistache::Async::Promise<long_int>::~Promise(&local_fb8);
                                Pistache::Http::Mime::MediaType::~MediaType(&position);
                              }
                            }
                            else {
                              Pistache::Http::Mime::MediaType::MediaType(&position);
                              Pistache::Http::ResponseWriter::send<7>
                                        (&local_ff8,response,Forbidden,(char (*) [7])"not ok",
                                         &position);
                              Pistache::Async::Promise<long_int>::~Promise(&local_ff8);
                              Pistache::Http::Mime::MediaType::~MediaType(&position);
                            }
                          }
                          else {
                            Pistache::Http::Mime::MediaType::MediaType(&position);
                            Pistache::Http::ResponseWriter::send<7>
                                      (&local_1038,response,Forbidden,(char (*) [7])"not ok",
                                       &position);
                            Pistache::Async::Promise<long_int>::~Promise(&local_1038);
                            Pistache::Http::Mime::MediaType::~MediaType(&position);
                          }
                        }
                        else {
                          Pistache::Http::Mime::MediaType::MediaType(&position);
                          Pistache::Http::ResponseWriter::send<7>
                                    (&local_1078,response,Forbidden,(char (*) [7])"not ok",&position
                                    );
                          Pistache::Async::Promise<long_int>::~Promise(&local_1078);
                          Pistache::Http::Mime::MediaType::~MediaType(&position);
                        }
                      }
                      else {
                        Pistache::Http::Mime::MediaType::MediaType(&position);
                        Pistache::Http::ResponseWriter::send<7>
                                  (&local_10b8,response,Forbidden,(char (*) [7])"not ok",&position);
                        Pistache::Async::Promise<long_int>::~Promise(&local_10b8);
                        Pistache::Http::Mime::MediaType::~MediaType(&position);
                      }
                    }
                    else {
                      Pistache::Http::Mime::MediaType::MediaType(&position);
                      Pistache::Http::ResponseWriter::send<7>
                                (&local_10f8,response,Forbidden,(char (*) [7])"not ok",&position);
                      Pistache::Async::Promise<long_int>::~Promise(&local_10f8);
                      Pistache::Http::Mime::MediaType::~MediaType(&position);
                    }
                  }
                  else {
                    Pistache::Http::Mime::MediaType::MediaType(&position);
                    Pistache::Http::ResponseWriter::send<7>
                              (&local_1138,response,Forbidden,(char (*) [7])"not ok",&position);
                    Pistache::Async::Promise<long_int>::~Promise(&local_1138);
                    Pistache::Http::Mime::MediaType::~MediaType(&position);
                  }
                }
                else {
                  Pistache::Http::Mime::MediaType::MediaType(&position);
                  Pistache::Http::ResponseWriter::send<7>
                            (&local_1178,response,Forbidden,(char (*) [7])"not ok",&position);
                  Pistache::Async::Promise<long_int>::~Promise(&local_1178);
                  Pistache::Http::Mime::MediaType::~MediaType(&position);
                }
              }
              else {
                Pistache::Http::Mime::MediaType::MediaType(&position);
                Pistache::Http::ResponseWriter::send<7>
                          (&local_11b8,response,Forbidden,(char (*) [7])"not ok",&position);
                Pistache::Async::Promise<long_int>::~Promise(&local_11b8);
                Pistache::Http::Mime::MediaType::~MediaType(&position);
              }
            }
            else {
              Pistache::Http::Mime::MediaType::MediaType(&position);
              Pistache::Http::ResponseWriter::send<7>
                        (&local_11f8,response,Forbidden,(char (*) [7])"not ok",&position);
              Pistache::Async::Promise<long_int>::~Promise(&local_11f8);
              Pistache::Http::Mime::MediaType::~MediaType(&position);
            }
          }
          else {
            Pistache::Http::Mime::MediaType::MediaType(&position);
            Pistache::Http::ResponseWriter::send<7>
                      (&local_1238,response,Forbidden,(char (*) [7])"not ok",&position);
            Pistache::Async::Promise<long_int>::~Promise(&local_1238);
            Pistache::Http::Mime::MediaType::~MediaType(&position);
          }
        }
        else {
          Pistache::Http::Mime::MediaType::MediaType(&position);
          Pistache::Http::ResponseWriter::send<7>
                    (&local_1278,response,Forbidden,(char (*) [7])"not ok",&position);
          Pistache::Async::Promise<long_int>::~Promise(&local_1278);
          Pistache::Http::Mime::MediaType::~MediaType(&position);
        }
      }
      else {
        Pistache::Http::Mime::MediaType::MediaType(&position);
        Pistache::Http::ResponseWriter::send<7>
                  (&local_12b8,response,Forbidden,(char (*) [7])"not ok",&position);
        Pistache::Async::Promise<long_int>::~Promise(&local_12b8);
        Pistache::Http::Mime::MediaType::~MediaType(&position);
      }
    }
    else {
      Pistache::Http::Mime::MediaType::MediaType(&position);
      Pistache::Http::ResponseWriter::send<7>
                (&local_12f8,response,Forbidden,(char (*) [7])"not ok",&position);
      Pistache::Async::Promise<long_int>::~Promise(&local_12f8);
      Pistache::Http::Mime::MediaType::~MediaType(&position);
    }
  }
  else {
    Pistache::Http::Mime::MediaType::MediaType(&position);
    Pistache::Http::ResponseWriter::send<7>
              (&local_1338,response,Forbidden,(char (*) [7])"not ok",&position);
    Pistache::Async::Promise<long_int>::~Promise(&local_1338);
    Pistache::Http::Mime::MediaType::~MediaType(&position);
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string
            ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)&flag);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


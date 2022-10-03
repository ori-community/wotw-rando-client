#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::MACTripleDES {
    IL2CPP_REGISTER_METHOD(0x020DC4C0, void, ctor_1, (app::MACTripleDES * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DC680, void, ctor_2, (app::MACTripleDES * this_ptr, app::Byte__Array* rgb_key))
    IL2CPP_REGISTER_METHOD(0x020DC720, void, ctor_3, (app::MACTripleDES * this_ptr, app::String* str_triple_d_e_s, app::Byte__Array* rgb_key))
    IL2CPP_REGISTER_METHODINFO(0x0475F228, MACTripleDES__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00650B90, void, Initialize, (app::MACTripleDES * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DCA60, app::PaddingMode__Enum, get_Padding, (app::MACTripleDES * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DCA90, void, set_Padding, (app::MACTripleDES * this_ptr, app::PaddingMode__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0470CDB0, MACTripleDES_set_Padding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020DCB80, void, HashCore, (app::MACTripleDES * this_ptr, app::Byte__Array* rgb_data, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x020DCEA0, app::Byte__Array*, HashFinal, (app::MACTripleDES * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DD2C0, void, Dispose, (app::MACTripleDES * this_ptr, bool disposing))
} // namespace app::classes::System::Security::Cryptography::MACTripleDES

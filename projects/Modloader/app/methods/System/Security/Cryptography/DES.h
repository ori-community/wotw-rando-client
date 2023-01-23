#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DES.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::DES {
    IL2CPP_REGISTER_METHOD(0x020D07E0, void, ctor, (app::DES * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D08C0, app::Byte__Array*, get_Key, (app::DES * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D0A90, void, set_Key, (app::DES * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHODINFO(0x0472A220, DES_set_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020D0D30, app::DES*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x020D0E70, app::DES*, Create_2, (app::String * alg_name))
    IL2CPP_REGISTER_METHOD(0x020D0F50, bool, IsWeakKey, (app::Byte__Array * rgb_key))
    IL2CPP_REGISTER_METHODINFO(0x04795090, DES_IsWeakKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020D10E0, bool, IsSemiWeakKey, (app::Byte__Array * rgb_key))
    IL2CPP_REGISTER_METHODINFO(0x04727078, DES_IsSemiWeakKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020D12F0, bool, IsLegalKeySize, (app::Byte__Array * rgb_key))
    IL2CPP_REGISTER_METHOD(0x020D1310, uint64_t, QuadWordFromBigEndian, (app::Byte__Array * block))
    IL2CPP_REGISTER_METHOD(0x020D1450, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::DES

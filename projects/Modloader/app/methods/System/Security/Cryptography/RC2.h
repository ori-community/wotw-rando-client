#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RC2.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::RC2 {
    IL2CPP_REGISTER_METHOD(0x028DDDF0, void, ctor, (app::RC2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028DDED0, int32_t, get_EffectiveKeySize, (app::RC2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028DDEE0, void, set_EffectiveKeySize, (app::RC2 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04758A90, RC2_set_EffectiveKeySize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_KeySize, (app::RC2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028DE060, void, set_KeySize, (app::RC2 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0477E2F0, RC2_set_KeySize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028DE130, app::RC2*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x028DE270, app::RC2*, Create_2, (app::String * alg_name))
    IL2CPP_REGISTER_METHOD(0x028DE350, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::RC2

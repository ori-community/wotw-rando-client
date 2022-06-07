#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::KuOriMounting {
    IL2CPP_REGISTER_METHOD(0x01244740, bool, get_MountInFront, (app::KuOriMounting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsStatePerforming, (app::KuOriMounting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012448B0, void, OnSetReferenceToKu, (app::KuOriMounting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012448E0, void, EnterMounting, (app::KuOriMounting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::KuOriMounting * this_ptr))
}

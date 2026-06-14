#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoftJointLimit__Boxed.h>

namespace app::classes::UnityEngine::SoftJointLimit {
    IL2CPP_REGISTER_METHOD(0x001EB400, float, get_limit, app::SoftJointLimit__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00114F30, void, set_limit, app::SoftJointLimit__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_bounciness, app::SoftJointLimit__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001155C0, void, set_bounciness, app::SoftJointLimit__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001D9B90, float, get_contactDistance, app::SoftJointLimit__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00115B30, void, set_contactDistance, app::SoftJointLimit__Boxed* this_ptr, float value)
} // namespace app::classes::UnityEngine::SoftJointLimit

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::InverseKinematicsPostprocess {
    IL2CPP_REGISTER_METHOD(0x01B14380, app::IK *, get_IK, (app::InverseKinematicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C03C70, int32_t, get_Order, (app::InverseKinematicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B14450, float, get_TotalWeight, (app::InverseKinematicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B14470, void, Awake, (app::InverseKinematicsPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B144E0, void, OnAddedToAnimator, (app::InverseKinematicsPostprocess * this_ptr, app::MoonAnimator * animator))
    IL2CPP_REGISTER_METHOD(0x01B14A10, void, Process_1, (app::InverseKinematicsPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01B14C30, void, Process_2, (app::InverseKinematicsPostprocess * this_ptr, app::MoonAnimator * animator, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01B14E40, app::Transform *, FindChildRecursive, (app::GameObject * go, app::String * name, bool allow_inactive))
    IL2CPP_REGISTER_METHOD(0x01B15170, void, ctor, (app::InverseKinematicsPostprocess * this_ptr))
}

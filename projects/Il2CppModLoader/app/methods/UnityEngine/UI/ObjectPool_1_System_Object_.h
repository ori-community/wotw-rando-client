#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UI::ObjectPool_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01F19BD0, int32_t, get_countAll, (app::ObjectPool_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_countAll, (app::ObjectPool_1_System_Object_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02ACEF00, int32_t, get_countActive, (app::ObjectPool_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ACEF70, int32_t, get_countInactive, (app::ObjectPool_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ACEDE0, void, ctor, (app::ObjectPool_1_System_Object_ * this_ptr, app::UnityAction_1_System_Object_ * action_on_get, app::UnityAction_1_System_Object_ * action_on_release))
    IL2CPP_REGISTER_METHOD(0x02ACEFA0, app::Object *, Get, (app::ObjectPool_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ACF090, void, Release, (app::ObjectPool_1_System_Object_ * this_ptr, app::Object * element))
}

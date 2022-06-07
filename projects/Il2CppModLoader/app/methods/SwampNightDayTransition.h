#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SwampNightDayTransition {
    IL2CPP_REGISTER_METHOD(0x00675960, bool, get_DayTime, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675AE0, bool, get_NightTime, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_InvalidateParentTimelineCache, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675C70, void, set_InvalidateParentTimelineCache, (app::SwampNightDayTransition * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00675C80, void, OnValidate, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675D60, void, Awake, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00676000, void, OnDestroy, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006761A0, void, FixedUpdate, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006761B0, bool, DayTimeCondition, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00676310, void, UpdateStateBasedOnCondition, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006761A0, void, OnSceneStartLateAfterSerialize, (app::SwampNightDayTransition * this_ptr, app::SceneRoot * root))
    IL2CPP_REGISTER_METHODINFO(0x04794118, SwampNightDayTransition_OnSceneStartLateAfterSerialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00676720, void, SetupNightTime, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006769C0, void, SetupDayTime, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00676C60, void, SetupPhysics, (app::SwampNightDayTransition * this_ptr, app::String * time_state_name))
    IL2CPP_REGISTER_METHOD(0x00676DD0, app::GameObject__Array *, GetDynamicGraphicTargets, (app::SwampNightDayTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SwampNightDayTransition * this_ptr))
}

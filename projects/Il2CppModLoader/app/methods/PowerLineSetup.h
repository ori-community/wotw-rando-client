#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PowerLineSetup {
    IL2CPP_REGISTER_METHOD(0x00C6B6C0, app::MoonTimeline*, get_AllDestroyedResolvedTimeline, (app::PowerLineSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::PowerLineSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6B7C0, app::IUberState__Array*, get_AffectingUberStates, (app::PowerLineSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6B8C0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::PowerLineSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6BB20, void, OnEnable, (app::PowerLineSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6BF40, void, OnDisable, (app::PowerLineSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6C360, void, CollectFusesOnChildren, (app::PowerLineSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6C460, void, OnRestoreCheckpoint, (app::PowerLineSetup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764178, PowerLineSetup_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C6C540, void, FuseDestroyed, (app::PowerLineSetup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B170, PowerLineSetup_FuseDestroyed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C6C730, void, Apply, (app::PowerLineSetup * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00C6C910, bool, Validate, (app::PowerLineSetup * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C6C9F0, void, UpdateWireColor, (app::PowerLineSetup * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00C6CB20, app::IDesiredUberState*, GetRequirementsForTimeline, (app::PowerLineSetup * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00C6CD30, void, ctor, (app::PowerLineSetup * this_ptr))
} // namespace app::classes::PowerLineSetup

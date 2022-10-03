#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Setups::ChangeStateOnCondition {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, ShouldCreateCheckpoint, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E24500, void, ctor, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A09730, void, Reset, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E24520, void, Awake, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E246F0, void, OnDestroy, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E248C0, void, OnCheckpointRestore, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737AB8, ChangeStateOnCondition_OnCheckpointRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E24A30, void, OnUpdate, (app::ChangeStateOnCondition * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00E24B20, void, PerformStateChange, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E24B80, app::IDesiredUberState*, GetRequirementsForTimeline, (app::ChangeStateOnCondition * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E24B20, void, OnSkipCutscene, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E24C90, bool, get_InvalidateParentTimelineCache, (app::ChangeStateOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E24CA0, void, set_InvalidateParentTimelineCache, (app::ChangeStateOnCondition * this_ptr, bool value))
} // namespace app::classes::Moon::Setups::ChangeStateOnCondition

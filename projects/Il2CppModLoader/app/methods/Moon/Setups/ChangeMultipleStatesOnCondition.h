#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Setups::ChangeMultipleStatesOnCondition {
    IL2CPP_REGISTER_METHOD(0x00446590, bool, ShouldCreateCheckpoint, (app::ChangeMultipleStatesOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1B030, void, Reset, (app::ChangeMultipleStatesOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED1A00, void, Awake, (app::ChangeMultipleStatesOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED1BD0, void, OnDestroy, (app::ChangeMultipleStatesOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED1DA0, void, OnCheckpointRestore, (app::ChangeMultipleStatesOnCondition * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E9F0, ChangeMultipleStatesOnCondition_OnCheckpointRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::ChangeMultipleStatesOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED1FB0, void, OnUpdate, (app::ChangeMultipleStatesOnCondition * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00ED20A0, void, PerformStateChange, (app::ChangeMultipleStatesOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED2230, app::IDesiredUberState*, GetRequirementsForTimeline, (app::ChangeMultipleStatesOnCondition * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::ChangeMultipleStatesOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (app::ChangeMultipleStatesOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED2490, void, OnSkipCutscene, (app::ChangeMultipleStatesOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ChangeMultipleStatesOnCondition * this_ptr))
} // namespace app::classes::Moon::Setups::ChangeMultipleStatesOnCondition

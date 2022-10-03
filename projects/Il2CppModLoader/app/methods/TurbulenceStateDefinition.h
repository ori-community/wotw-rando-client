#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TurbulenceStateDefinition {
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentPassiveStateApplied, (app::TurbulenceStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPassiveStateDescriptorValid, (app::TurbulenceStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_FallbackPassiveState, (app::TurbulenceStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1B720, void, OnDestroy, (app::TurbulenceStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1B730, void, ApplyKnownState, (app::TurbulenceStateDefinition * this_ptr, int32_t state_g_u_i_d, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00B1B800, void, RemoveAllInfluences, (app::TurbulenceStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1B910, app::Int32__Array*, GetAllStateGUIDs, (app::TurbulenceStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1BA40, app::String*, GetStateName, (app::TurbulenceStateDefinition * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x00B1BAF0, bool, HasStateGUID, (app::TurbulenceStateDefinition * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x00B1BB10, app::TurbulenceStateDefinition_TurbulenceState*, GetStateByGuid, (app::TurbulenceStateDefinition * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x00B1BC10, void, AddState, (app::TurbulenceStateDefinition * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x00B1BDB0, void, RemoveStateByIndex, (app::TurbulenceStateDefinition * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00B1BE50, int32_t, GetNewGuid, (app::TurbulenceStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1C150, void, ctor, (app::TurbulenceStateDefinition * this_ptr))
} // namespace app::classes::TurbulenceStateDefinition

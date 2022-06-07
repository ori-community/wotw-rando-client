#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PostStateDefinition {
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentPassiveStateApplied, (app::PostStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPassiveStateDescriptorValid, (app::PostStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_FallbackPassiveState, (app::PostStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::PostStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C69930, void, OnDestroy, (app::PostStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C69940, void, UpdateSceneRoot, (app::PostStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C69B00, void, ApplyKnownState, (app::PostStateDefinition * this_ptr, int32_t state_g_u_i_d, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00C69BD0, void, RemoveAllInfluences, (app::PostStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C69CE0, app::Int32__Array *, GetAllStateGUIDs, (app::PostStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C69E10, app::String *, GetStateName, (app::PostStateDefinition * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x00C69EC0, bool, HasStateGUID, (app::PostStateDefinition * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x00C69EE0, app::PostStateDefinition_PostState *, GetStateByGuid, (app::PostStateDefinition * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x00C69FE0, void, AddState, (app::PostStateDefinition * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x00C6A170, void, RemoveStateByIndex, (app::PostStateDefinition * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00C6A210, int32_t, GetNewGuid, (app::PostStateDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6A500, void, ctor, (app::PostStateDefinition * this_ptr))
}

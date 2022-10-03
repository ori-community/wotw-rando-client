#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::StateOverrideSystem {
    IL2CPP_REGISTER_METHOD(0x03146FE0, app::StateOverrideSystem*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::StateOverrideSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031472B0, void, SubmitDynamicStateOverride_1, (app::StateOverrideSystem * this_ptr, app::IGenericUberState* uber_state, float state))
    IL2CPP_REGISTER_METHOD(0x03147580, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x031476A0, void, OnDestroy, (app::StateOverrideSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031476B0, void, SubmitDynamicStateOverride_2, (app::StateOverrideSystem * this_ptr, app::IPassiveStateDescriptor* passive_state_descriptor, int32_t state))
    IL2CPP_REGISTER_METHOD(0x03147980, void, SubmitStaticStateOverride, (app::StateOverrideSystem * this_ptr, app::IPassiveStateDescriptor* passive_state_descriptor, int32_t state, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x03147C20, void, ClearState_1, (app::StateOverrideSystem * this_ptr, app::IGenericUberState* uber_state))
    IL2CPP_REGISTER_METHOD(0x03147CE0, void, ClearState_2, (app::StateOverrideSystem * this_ptr, app::IPassiveStateDescriptor* passive_state_descriptor))
    IL2CPP_REGISTER_METHOD(0x03147D10, void, ClearState_3, (app::StateOverrideSystem * this_ptr, int32_t object_id))
    IL2CPP_REGISTER_METHOD(0x03147EB0, void, ClearAll, (app::StateOverrideSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03147F90, void, ClearAllStates, ())
    IL2CPP_REGISTER_METHOD(0x03148070, int32_t, GetPassiveStateDescriptorId, (app::StateOverrideSystem * this_ptr, app::IPassiveStateDescriptor* passive_state_descriptor))
    IL2CPP_REGISTER_METHOD(0x031481C0, void, OnUpdate, (app::StateOverrideSystem * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x03148470, void, ctor, (app::StateOverrideSystem * this_ptr))
} // namespace app::classes::StateOverrideSystem

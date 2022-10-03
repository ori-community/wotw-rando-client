#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LightCanvasStateController {
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentPassiveStateApplied, (app::LightCanvasStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPassiveStateDescriptorValid, (app::LightCanvasStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_FallbackPassiveState, (app::LightCanvasStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01149830, void, OnValidate, (app::LightCanvasStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01149850, void, CollectCanvases, (app::LightCanvasStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011498E0, void, UpdateStatesDefinitionOnChildren, (app::LightCanvasStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01149970, void, ApplyKnownState, (app::LightCanvasStateController * this_ptr, int32_t state_g_u_i_d, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x01149AE0, app::Int32__Array*, GetAllStateGUIDs, (app::LightCanvasStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01149C10, app::String*, GetStateName, (app::LightCanvasStateController * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x01149CC0, bool, HasStateGUID, (app::LightCanvasStateController * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x01149CE0, app::LightCanvasStateController_LightCanvasState*, GetStateByGuid, (app::LightCanvasStateController * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x01149DE0, void, AddState, (app::LightCanvasStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01149F70, void, RemoveStateByIndex, (app::LightCanvasStateController * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0114A020, int32_t, GetNewGuid, (app::LightCanvasStateController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114A310, void, ctor, (app::LightCanvasStateController * this_ptr))
} // namespace app::classes::LightCanvasStateController

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::RammingBehaviour_RamState {
    IL2CPP_REGISTER_METHOD(0x00C52F40, app::SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_*, get_VfxHandler, (app::RammingBehaviour_RamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C53240, app::String*, get_StateName, (app::RammingBehaviour_RamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RammingBehaviour_RamState * this_ptr, app::RammingBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::RammingBehaviour_RamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::RammingBehaviour_RamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RammingBehaviour_RamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RammingBehaviour_RamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C532C0, void, UpdateVFX, (app::RammingBehaviour_RamState * this_ptr, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHOD(0x00C53370, void, StopCurrentEfffect, (app::RammingBehaviour_RamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C534F0, void, StopAllEfffects, (app::RammingBehaviour_RamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C53590, void, ReleaseEffects, (app::RammingBehaviour_RamState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C53630, app::GameObject*, GetEffectsPrefab, (app::RammingBehaviour_RamState * this_ptr, app::HornBugMovementEffects* surface_type))
} // namespace app::classes::Moon::RammingBehaviour_RamState

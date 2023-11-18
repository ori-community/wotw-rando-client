#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VerletStructure.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VerletStructure_VerletStructureState.h>

namespace app::classes::VerletStructure {
    IL2CPP_REGISTER_METHOD(0x013C8F00, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x013C8FC0, void, Awake, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9300, void, OnDestroy, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9410, app::Bounds, get_WorldBounds, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9600, app::Bounds, get_Bounds, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9620, void, IFrustumOptimizable_OnFrustumEnter, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9630, void, IFrustumOptimizable_OnFrustumExit, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD88C0, bool, get_InsideFrustum, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01212740, bool, ISuspendable_get_IsSuspended, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01212750, void, ISuspendable_set_IsSuspended, (app::VerletStructure * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x009D2A80, app::SuspendableMask__Enum, ISuspendable_get_Mask, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9640, void, ISuspendable_set_Mask, (app::VerletStructure * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x013C9650, bool, get_Initialised, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9660, void, Init, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9AC0, bool, get_ShouldUpdate, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, IUpdateHandler_get_UpdateType, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9BB0, void, OnEnable, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9D90, void, OnDisable, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C9F70, void, OnExtraLateUpdate, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013CA090, void, OnUpdate_1, (app::VerletStructure * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x013CA1C0, void, OnUpdatePhysics, (app::VerletStructure * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x013CA210, void, OnUpdate_2, (app::VerletStructure * this_ptr, float dt, bool update_handlers))
    IL2CPP_REGISTER_METHOD(0x013CA4F0, void, PreJob, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013CA6F0, void, PostJob, (app::VerletStructure * this_ptr, float dt, bool update_handlers))
    IL2CPP_REGISTER_METHOD(0x013CA810, void, SimulateFromJob, (app::VerletStructure * this_ptr, float dt, app::Vector3 center_position))
    IL2CPP_REGISTER_METHOD(0x013CA870, void, SimulateFromJob0, (app::VerletStructure * this_ptr, float dt, app::Vector3 center_position))
    IL2CPP_REGISTER_METHOD(0x013CC610, void, SimulateFromJob1, (app::VerletStructure * this_ptr, float dt, app::Vector3 center_position))
    IL2CPP_REGISTER_METHOD(0x013CE130, app::VerletStructure_VerletStructureState*, GetSystemState, (app::VerletStructure * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x013CE1D0, bool, HasSystemState, (app::VerletStructure * this_ptr, int32_t state_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x013CE1F0, void, ApplyState_1, (app::VerletStructure * this_ptr, int32_t state_g_u_i_d, bool apply_immediate))
    IL2CPP_REGISTER_METHOD(0x013CE480, void, ApplyState_2, (app::VerletStructure * this_ptr, app::VerletStructure_VerletStructureState* state))
    IL2CPP_REGISTER_METHOD(0x013CE7C0, void, UpdateFromMainThread, (app::VerletStructure * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x013CE800, bool, get_NeedsPostJob, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013CE820, void, ctor, (app::VerletStructure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013CED10, void, cctor, ())
} // namespace app::classes::VerletStructure

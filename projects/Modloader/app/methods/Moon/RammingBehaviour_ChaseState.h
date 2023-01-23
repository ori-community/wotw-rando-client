#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/RammingBehaviour_ChaseState.h>
#include <Modloader/app/structs/RammingBehaviour.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>

namespace app::classes::Moon::RammingBehaviour_ChaseState {
    IL2CPP_REGISTER_METHOD(0x00C503D0, app::String*, get_StateName, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C50450, void, ctor, (app::RammingBehaviour_ChaseState * this_ptr, app::RammingBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00C50570, void, OnEnter, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C50780, void, UpdateState, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C50C50, void, OnExit, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C50E30, bool, CanFallExhausted, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C51090, void, UpdateSpeed, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C514B0, void, UpdateRamHitAnimation, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C516A0, void, Turn, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C517A0, void, OnHitWall, (app::RammingBehaviour_ChaseState * this_ptr, app::Vector3 wall_normal, app::Vector3 position, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHOD(0x00C51840, void, OnColliderHit, (app::RammingBehaviour_ChaseState * this_ptr, app::MoonControllerColliderHit hit_info))
    IL2CPP_REGISTER_METHODINFO(0x0475D7A0, RammingBehaviour_ChaseState_OnColliderHit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C51C30, void, Accelerate, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C51E30, void, Brake, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C51FD0, void, UpdateBrakingPosition, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C52290, bool, ShouldPlayerRamHitAnimation, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C524E0, void, OnRammingHitEnded, (app::RammingBehaviour_ChaseState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475FCD8, RammingBehaviour_ChaseState_OnRammingHitEnded__MethodInfo)
} // namespace app::classes::Moon::RammingBehaviour_ChaseState

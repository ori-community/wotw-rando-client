#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour_Direction__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KwolokBossWormSpitBehaviour {
    IL2CPP_REGISTER_METHOD(0x012F9400, bool, CanCancel, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E0B60, void, InitializeCancellableController, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F9450, void, OnEntityInitialized, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F9610, void, OnDestroy, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F97E0, void, OnKwolokHealthReachedZero, (app::KwolokBossWormSpitBehaviour * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHODINFO(0x047276B8, KwolokBossWormSpitBehaviour_OnKwolokHealthReachedZero__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012F9990, void, OnEnter, (app::KwolokBossWormSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012F9DF0, void, FixedUpdate, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F9E00, app::BehaviourStatus__Enum, OnExecute, (app::KwolokBossWormSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012F9F40, void, OnExit, (app::KwolokBossWormSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012FA290, float, ComputeUtility, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FA450, void, OnSpawnTrigger, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04745FF0, KwolokBossWormSpitBehaviour_OnSpawnTrigger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012FA460, void, LaunchBabySandWorm, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FA950, bool, UpdateWorms, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FAB40, void, ToggleCollisionEnabled, (app::KwolokBossWormSpitBehaviour * this_ptr, app::Collider__Array* colliders1, app::Collider__Array* colliders2, bool enabled))
    IL2CPP_REGISTER_METHOD(0x012FAD60, void, SetCurrentDirection, (app::KwolokBossWormSpitBehaviour * this_ptr, app::KwolokBossWormSpitBehaviour_Direction__Enum dir))
    IL2CPP_REGISTER_METHOD(0x012FAEC0, app::Vector3, GetWormSpitDirection, (app::KwolokBossWormSpitBehaviour * this_ptr, app::KwolokBossWormSpitBehaviour_Direction__Enum dir))
    IL2CPP_REGISTER_METHOD(0x01251800, void, ModifyDesiredLookAngle, (app::KwolokBossWormSpitBehaviour * this_ptr, float* angle))
    IL2CPP_REGISTER_METHODINFO(0x04788770, KwolokBossWormSpitBehaviour_ModifyDesiredLookAngle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012FB080, void, ClearMoveRequest, (app::KwolokBossWormSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012FB0E0, void, ctor, (app::KwolokBossWormSpitBehaviour * this_ptr))
} // namespace app::classes::KwolokBossWormSpitBehaviour

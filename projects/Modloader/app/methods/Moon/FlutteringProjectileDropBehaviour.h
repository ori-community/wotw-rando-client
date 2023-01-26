#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FlutteringProjectileDropBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::FlutteringProjectileDropBehaviour {
    IL2CPP_REGISTER_METHOD(0x01225C20, void, OnEntityInitialized, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01225FC0, void, OnEnter, (app::FlutteringProjectileDropBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012260C0, app::BehaviourStatus__Enum, OnExecute, (app::FlutteringProjectileDropBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01226470, void, OnExit, (app::FlutteringProjectileDropBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01226560, void, StartTimeline, (app::FlutteringProjectileDropBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x01226590, void, ResetTimeline, (app::FlutteringProjectileDropBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x012267C0, float, GetLookDirection, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012268A0, float, GetDirectionToTarget, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012269C0, float, GetRandomProjectileDropRate, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01226A80, void, UpdateSpeed, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01226D40, void, Turn, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01226E30, void, Accelerate, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01227000, void, Brake, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01227170, void, UpdateShooting, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01227280, void, Shoot, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012277C0, void, UpdateFloating, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01227D50, void, UpdateFlyingOverCharacter, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01227F60, void, UpdateBrakingPosition, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C4F470, bool, IsPointInsideAllowedArea, (app::FlutteringProjectileDropBehaviour * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x01228210, void, OnFlutteringTurnStart, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01228220, void, OnFlutteringTurnEnd, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01228250, void, OnFlutteringTurnFlipEvent, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01228330, void, OnHitByHeavyAttack, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01226470, void, Stop, (app::FlutteringProjectileDropBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012283F0, void, ctor, (app::FlutteringProjectileDropBehaviour * this_ptr))
} // namespace app::classes::Moon::FlutteringProjectileDropBehaviour

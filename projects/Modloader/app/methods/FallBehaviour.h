#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FallBehaviour.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::FallBehaviour {
    IL2CPP_REGISTER_METHOD(0x00994900, void, OnInitialize, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009949A0, void, OnExecute, (app::FallBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x00994D20, void, FallingEnter, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00994F30, void, FallingUpdate, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00995100, void, LandingEnter, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009954C0, void, SpawnImpactEffect, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00995650, void, LandingEnd, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047444B0, FallBehaviour_LandingEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00995820, void, BounceEnter, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00995D30, void, BounceUpdate, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00995E10, void, BounceEnd, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047439A8, FallBehaviour_BounceEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00996020, void, OnUpdateBehaviour, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00996120, void, OnEndBehaviour, (app::FallBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x009963B0, void, OnHitWall, (app::FallBehaviour * this_ptr, app::Vector3 normal, app::Collider* collider))
    IL2CPP_REGISTER_METHODINFO(0x04711B78, FallBehaviour_OnHitWall__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009964B0, bool, WillClashWithNonInterruptableBehaviours, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00996520, bool, _FallingEnter_b__21_0, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04703EA8, FallBehaviour__FallingEnter_b__21_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00996540, bool, _LandingEnter_b__23_0, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047198D0, FallBehaviour__LandingEnter_b__23_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00996550, bool, _BounceEnter_b__26_0, (app::FallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047882D8, FallBehaviour__BounceEnter_b__26_0__MethodInfo)
} // namespace app::classes::FallBehaviour

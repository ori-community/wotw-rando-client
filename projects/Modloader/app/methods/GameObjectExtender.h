#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/BatSwarm.h>
#include <Modloader/app/structs/CameraChaseTarget.h>
#include <Modloader/app/structs/CameraStraightLineMotion.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityPlatformingMovement.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/ICarryable.h>
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/IGoThroughPlatformTester.h>
#include <Modloader/app/structs/INightBerrySpiritRingReciever.h>
#include <Modloader/app/structs/IPickupCollector.h>
#include <Modloader/app/structs/IProjectileDetonatable.h>
#include <Modloader/app/structs/IReflectable.h>
#include <Modloader/app/structs/IRelatedReflectable.h>
#include <Modloader/app/structs/IRespawnReciever.h>
#include <Modloader/app/structs/ISpiritFlameAttackable.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/MortarWormEnemy.h>
#include <Modloader/app/structs/MothSwarm.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/RigidbodyMovement.h>
#include <Modloader/app/structs/SeinDamageReciever.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceGroundMovement.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vitals.h>

namespace app::classes::GameObjectExtender {
    IL2CPP_REGISTER_METHOD(0x003F8460, app::Transform*, FindChildRecursive, app::GameObject* game_object, app::String* name, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x003F8790, app::Transform*, FindParent, app::Transform* transform, app::String* name, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x018F2D10, bool, HasComponent, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::Object*, FindComponent_1, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x01548530, void, GetComponents, app::GameObject* game_object, app::List_1_System_Object_* list)
    IL2CPP_REGISTER_METHOD(0x01548530, void, GetComponentsInChildren_1, app::GameObject* game_object, app::List_1_System_Object_* list)
    IL2CPP_REGISTER_METHOD(0x01548550, void, GetComponentsInChildren_2, app::GameObject* game_object, bool inactive, app::List_1_System_Object_* list)
    IL2CPP_REGISTER_METHOD(0x015E9780, app::Object*, FindComponentUpwards_1, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x02FF7850, app::Component_1__Array*, FindComponents_1, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9620, app::Object*, FindComponentInChildren_1, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_1, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9780, app::BatSwarm*, FindComponentUpwards_2, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x015E9620, app::IDamageReciever*, FindComponentInChildren_2, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9620, app::Collider*, FindComponentInChildren_3, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_2, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF7850, app::Component_1__Array*, FindComponents_2, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_3, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_4, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9620, app::SeinDamageReciever*, FindComponentInChildren_4, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9620, app::IPickupCollector*, FindComponentInChildren_5, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9780, app::LegacyEntity*, FindComponentUpwards_3, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x015E9780, app::Entity*, FindComponentUpwards_4, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_5, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9620, app::IGoThroughPlatformTester*, FindComponentInChildren_6, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_6, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9620, app::IRespawnReciever*, FindComponentInChildren_7, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9780, app::MortarWormEnemy*, FindComponentUpwards_5, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x015E9780, app::MothSwarm*, FindComponentUpwards_6, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x02FF7850, app::Component_1__Array*, FindComponents_3, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::INightBerrySpiritRingReciever*, FindComponent_2, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::ICarryable*, FindComponent_3, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::IProjectileDetonatable*, FindComponent_4, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::IReflectable*, FindComponent_5, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::IRelatedReflectable*, FindComponent_6, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_7, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_8, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_9, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_10, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_11, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9620, app::Animator*, FindComponentInChildren_8, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::IAttackable*, FindComponent_7, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::ISpiritFlameAttackable*, FindComponent_8, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::Projectile*, FindComponent_9, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::CameraChaseTarget*, FindComponent_10, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::CharacterPlatformMovement*, FindComponent_11, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::CameraStraightLineMotion*, FindComponent_12, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::EntityPlatformingMovement*, FindComponent_13, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::RigidbodyMovement*, FindComponent_14, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015E9490, app::TraceGroundMovement*, FindComponent_15, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_12, app::GameObject* game_object, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015E9780, app::Vitals*, FindComponentUpwards_7, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x02FF7920, app::Component_1__Array*, FindComponentsInChildren_13, app::GameObject* game_object, bool include_inactive)
} // namespace app::classes::GameObjectExtender

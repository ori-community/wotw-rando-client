#include <Core/api/game/player.h>
#include <Randomizer/tracking/game_tracker.h>

#include <Modloader/app/methods/Projectile.h>
#include <Modloader/app/types/IAttackable.h>
#include <Modloader/app/methods/MeleeComboMoveSword.h>
#include <Modloader/app/methods/MeleeComboMoveHammerSimple.h>
#include <Modloader/app/methods/MeleeComboMove.h>
#include <Modloader/app/methods/UnityEngine/Component.h>
#include <Modloader/app/methods/UnityEngine/Collider.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/types/Collider.h>
#include <Modloader/interception.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace {
    using namespace app::classes;

    IL2CPP_INTERCEPT(void, Projectile, OnPoolSpawned, app::Projectile* this_ptr) {
        next::Projectile::OnPoolSpawned(this_ptr);

        // Add the HasIAttackable Moon flag to all projectiles because projectiles
        // are always IAttackable.
        constexpr uint32_t MOON_FLAGS_HAS_IATTACKABLE = 65536;

        for (const auto& collider: il2cpp::unity::get_components_in_children<app::Collider>(this_ptr, types::Collider::get_class(), true)) {
            const auto collider_go = il2cpp::unity::get_game_object(collider);
            UnityEngine::GameObject::set_moonFlags(
                collider_go,
                UnityEngine::GameObject::get_moonFlags(collider_go) | MOON_FLAGS_HAS_IATTACKABLE
            );
        }
    }

    // If true, the next invocation to Collider.GetComponent<IAttackable> will return
    // an IAttackable from the RigidBody the collider is attached to as well, if it doesn't
    // have an IAttackable on its own.
    bool search_for_iattackable_in_attached_rigid_body_once = false;

    IL2CPP_INTERCEPT(
        void,
        MeleeComboMoveSword,
        TryToDealDamage,
        app::MeleeComboMoveSword* this_ptr,
        app::Collider* collider,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    ) {
        modloader::ScopedSetter _(search_for_iattackable_in_attached_rigid_body_once, true);
        next::MeleeComboMoveSword::TryToDealDamage(this_ptr, collider, hit_direction, damage_position);
    }

    IL2CPP_INTERCEPT(
        void,
        MeleeComboMoveHammerSimple,
        TryToDealDamage,
        app::MeleeComboMoveHammerSimple* this_ptr,
        app::Collider* collider,
        bool top_hit,
        app::Vector3 hit_direction,
        app::Vector3 damage_position
    ) {
        modloader::ScopedSetter _(search_for_iattackable_in_attached_rigid_body_once, true);
        next::MeleeComboMoveHammerSimple::TryToDealDamage(this_ptr, collider, top_hit, hit_direction, damage_position);
    }

    IL2CPP_INTERCEPT(bool, MeleeComboMove, HaveBeenHit, app::MeleeComboMove* this_ptr, app::Collider* collider) {
        modloader::ScopedSetter _(search_for_iattackable_in_attached_rigid_body_once, true);
        return next::MeleeComboMove::HaveBeenHit(this_ptr, collider);
    }

    IL2CPP_INTERCEPT(app::IAttackable*, UnityEngine::Component, GetComponent_80, app::Component_1* this_ptr, MethodInfo* method_info) {
        const auto component = next::UnityEngine::Component::GetComponent_80(this_ptr, method_info);

        if (!search_for_iattackable_in_attached_rigid_body_once || il2cpp::unity::is_valid(component)) {
            return component;
        }

        search_for_iattackable_in_attached_rigid_body_once = false;
        const auto attached_rigid_body = UnityEngine::Collider::get_attachedRigidbody(reinterpret_cast<app::Collider*>(this_ptr));
        const auto parent_component = il2cpp::unity::get_component<app::IAttackable>(attached_rigid_body, types::IAttackable::get_class());
        return parent_component;
    }
} // namespace

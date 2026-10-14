#include <Core/api/game/player.h>
#include <Modloader/app/methods/Damage.h>
#include <Modloader/app/methods/HornBugBossEntity.h>
#include <Modloader/app/methods/Moon/DamageReceiver.h>
#include <Modloader/app/methods/Moon/Entity.h>
#include <Modloader/app/methods/NightCrawlerFightController.h>
#include <Modloader/app/methods/PetrifiedOwlBossEntity.h>
#include <Modloader/app/methods/UberGCManager.h>
#include <Modloader/app/methods/UnityEngine/Resources.h>
#include <Modloader/app/types/Damage.h>
#include <Modloader/app/types/Entity.h>
#include <Modloader/app/types/HornBugBossEntity.h>
#include <Modloader/app/types/DamageReceiver.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/damage.h>
#include <unordered_set>


namespace randomizer::damage {
    using namespace app::classes;

    namespace {
        auto force_deal_damage = false;
        std::unordered_set<int32_t> forced_damage_ids;
        std::optional<il2cpp::WeakGCRef<app::NightCrawlerFightController>> night_crawler_fight_controller_ref;

        IL2CPP_INTERCEPT_WITH_ORDER(0, void, UberGCManager, RunGC, bool is_debug) {
            next::UberGCManager::RunGC(is_debug);
            forced_damage_ids.clear();
        }

        IL2CPP_INTERCEPT(void, PetrifiedOwlBossEntity, ResolveDamage, app::PetrifiedOwlBossEntity* this_ptr, app::DamageResult* damage_result) {
            if (force_deal_damage || forced_damage_ids.contains(damage_result->Damage->fields.ID)) {
                Moon::Entity::ResolveDamage(reinterpret_cast<app::Entity*>(this_ptr), damage_result);
                return;
            }

            next::PetrifiedOwlBossEntity::ResolveDamage(this_ptr, damage_result);
        }

        IL2CPP_INTERCEPT(bool, Moon::DamageReceiver, get_Active, app::DamageReceiver* this_ptr) {
            if (force_deal_damage) {
                return true;
            }

            return next::Moon::DamageReceiver::get_Active(this_ptr);
        }

        IL2CPP_INTERCEPT(void, HornBugBossEntity, ResolveDamage, app::HornBugBossEntity* this_ptr, app::DamageResult* damage_result) {
            if (damage_result->Damage->fields.m_damageType == app::DamageType__Enum::DebugDamage) {
                Moon::Entity::ResolveDamage(reinterpret_cast<app::Entity*>(this_ptr), damage_result);
            } else {
                next::HornBugBossEntity::ResolveDamage(this_ptr, damage_result);
            }
        }

        IL2CPP_INTERCEPT(bool, Moon::DamageReceiver, IsDamageFilteredByAngle, app::DamageReceiver* this_ptr, app::Damage* damage) {
            if (damage->fields.m_damageType == app::DamageType__Enum::DebugDamage) {
                return false;
            }

            return next::Moon::DamageReceiver::IsDamageFilteredByAngle(this_ptr, damage);
        }

        IL2CPP_INTERCEPT(bool, Moon::DamageReceiver, IsDamageFilteredByReceiver, app::DamageReceiver* this_ptr, app::Damage* damage) {
            if (damage->fields.m_damageType == app::DamageType__Enum::DebugDamage) {
                return false;
            }

            return next::Moon::DamageReceiver::IsDamageFilteredByReceiver(this_ptr, damage);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(0, void, NightCrawlerFightController, Awake, app::NightCrawlerFightController* this_ptr) {
            night_crawler_fight_controller_ref = il2cpp::WeakGCRef(this_ptr);
            next::NightCrawlerFightController::Awake(this_ptr);
        }
    } // namespace

    void damage_all_enemies(float amount, bool force) {
        common::ScopedSetter _(force_deal_damage, force);

        const auto nightcrawler_fight_controller = night_crawler_fight_controller_ref.and_then([](auto& ref) { return *ref; });
        auto all_damage_receivers = reinterpret_cast<app::DamageReceiver__Array*>(UnityEngine::Resources::FindObjectsOfTypeAll_1(il2cpp::get_runtime_type(types::DamageReceiver::get_class())));
        auto all_entities = reinterpret_cast<app::Entity__Array*>(UnityEngine::Resources::FindObjectsOfTypeAll_1(il2cpp::get_runtime_type(types::Entity::get_class())));
        std::unordered_set<app::Entity*> entities;

        for (auto& found_damage_receiver: il2cpp::ArrayIterator(all_damage_receivers)) {
            if (nightcrawler_fight_controller.has_value() && (*nightcrawler_fight_controller)->fields.DamageReceiver == found_damage_receiver) {
                const auto damage = types::Damage::create();

                Damage::ctor(
                    damage,
                    amount,
                    app::Vector2{0, 0},
                    app::Vector3{0, 0, 0},
                    app::DamageType__Enum::DebugDamage,
                    app::AbilityType__Enum::None,
                    nullptr,
                    -1,
                    nullptr,
                    app::SpiritShardType__Enum::None,
                    false,
                    app::DamageWeight__Enum::Medium,
                    0.0,
                    true
                );

                if (force) {
                    forced_damage_ids.insert(damage->fields.ID);
                }

                Moon::DamageReceiver::OnRecieveDamage(found_damage_receiver, damage);
                continue;
            }

            const auto entity = il2cpp::unity::get_component<app::Entity>(
                il2cpp::unity::get_game_object(found_damage_receiver),
                types::Entity::get_class()
            );

            if (!il2cpp::unity::get_active_in_hierarchy(entity) || entity->fields.m_vitals == nullptr) {
                continue;
            }

            entities.insert(entity);
        }

        for (auto& entity : il2cpp::ArrayIterator(all_entities)) {
            if (!il2cpp::unity::get_active_in_hierarchy(entity) || entity->fields.m_vitals == nullptr) {
                continue;
            }

            entities.insert(entity);
        }

        const auto deal_damage_to = [force](app::DamageReceiver* damage_receiver, float amount, const app::Vector3 position) {
            const auto damage = types::Damage::create();

            Damage::ctor(
                damage,
                amount,
                app::Vector2{0, 0},
                position,
                app::DamageType__Enum::DebugDamage,
                app::AbilityType__Enum::None,
                nullptr,
                -1,
                nullptr,
                app::SpiritShardType__Enum::None,
                false,
                app::DamageWeight__Enum::Medium,
                0.0,
                true
            );

            if (force) {
                forced_damage_ids.insert(damage->fields.ID);
            }

            Moon::DamageReceiver::OnRecieveDamage(damage_receiver, damage);
        };

        for (const auto& entity : entities) {
            if (il2cpp::is_assignable(entity, types::HornBugBossEntity::get_class())) {
                deal_damage_to(entity->fields.m_vitals->fields.DamageReceivers->vector[4], amount, app::Vector3{0, 0, 0});
            } else {
                for (auto& damage_receiver: il2cpp::ArrayIterator(entity->fields.m_vitals->fields.DamageReceivers)) {
                    if (!Moon::DamageReceiver::get_Active(damage_receiver)) {
                        continue;
                    }

                    const auto position = Moon::Entity::get_NavigationAgentPosition(entity);
                    deal_damage_to(damage_receiver, amount, position);
                    break;
                }
            }
        }
    }
} // namespace randomizer::damage

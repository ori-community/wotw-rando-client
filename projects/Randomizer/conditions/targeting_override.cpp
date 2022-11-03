#include <randomizer/conditions/targeting_override.h>

#include <Common/ext.h>

#include <Modloader/app/methods/EntityTargetting.h>
#include <Modloader/common.h>
#include <Modloader/interception_macros.h>

#include <optional>
#include <unordered_map>

using namespace app::classes;

namespace randomizer::conditions {
    namespace {
        struct TargetableOverride {
            std::optional<bool> original;
            std::optional<bool> new_value;
        };

        struct TargetableValues {
            std::unordered_map<app::AbilityType__Enum, TargetableOverride> overrides;
            targetable_intercept intercept;
        };

        std::unordered_map<std::string, TargetableValues> targetable_overrides;

        bool* get_value(app::EntityTargetting* et, app::AbilityType__Enum type) {
            switch (type) {
                case app::AbilityType__Enum::TurretSpell:
                    return &et->fields.SpiritSentryTarget;
            }

            return nullptr;
        }

        void refresh_values(app::EntityTargetting* et) {
            auto dirty = false;
            auto path = il2cpp::unity::get_path(et);
            auto it = targetable_overrides.find(path);
            if (it != targetable_overrides.end()) {
                for (auto& o : it->second.overrides) {
                    auto value = get_value(et, o.first);
                    auto prev = *value;
                    if (value == nullptr)
                        continue;

                    if (!o.second.original.has_value())
                        o.second.original = *value;
                    else
                        *value = o.second.original.value();

                    if (o.second.new_value.has_value())
                        *value = o.second.new_value.value();

                    if (*value != prev)
                        dirty |= true;
                }

                if (it->second.intercept != nullptr)
                    dirty |= it->second.intercept(et);
            }

            if (dirty)
                EntityTargetting::RefreshAttackable(et);
        }

        IL2CPP_INTERCEPT(EntityTargetting, void, OnUpdate, (app::EntityTargetting * this_ptr, float dt)) {
            refresh_values(this_ptr);
            return next::EntityTargetting::OnUpdate(this_ptr, dt);
        }

        bool targetable(void* attacker, app::IAttackable* attackable, std::string const& path) {
            return true;
        }
        bool untargetable(void* attacker, app::IAttackable* attackable, std::string const& path) {
            return false;
        }

        void initialize() {
            // TODO: Add all the wellspring corruption blobs.
            register_targetable("waterMillPool__clone0/interactives/wheelASetup/shootableTentacleCreepA/creep", app::AbilityType__Enum::TurretSpell, true);
            register_targetable("waterMillPool__clone0/interactives/wheelASetup/shootableTentacleCreepB/creep", app::AbilityType__Enum::TurretSpell, true);
            register_targetable("waterMillAExit/interactives/fastWheelsSetup/shootableTentacleCreepC/creep", app::AbilityType__Enum::TurretSpell, true);
            register_targetable("wotwSaveRoomC__clone0__clone1/interactives/fastWheelActivationSetup/shootableTentacleCreepD/creep", app::AbilityType__Enum::TurretSpell, true);
            register_targetable("waterMillEntrance/physics/lanternAndCreepB/shootableTentacleCreepl/Creep", app::AbilityType__Enum::TurretSpell, true);
            register_targetable("waterMillBCorridorB/*rotatingArenaSetupNew/discs/wheelActivationSetup/shootableTentacleCreepE/creep", app::AbilityType__Enum::TurretSpell, true);
            register_targetable("waterMillBEntrance/art/flattened/BigCell12/activationSetup/shootableTentacleCreepF/creep", app::AbilityType__Enum::TurretSpell, true);
            register_targetable("waterMillEntrance/interactives/fallingDiscSetup/shootableTentacleCreepH/creep", app::AbilityType__Enum::TurretSpell, true);
            register_targetable("waterMillEntrance/interactives/doorStateController/shootableTentacleCreepG/creep", app::AbilityType__Enum::TurretSpell, true);
        }

        CALL_ON_INIT(initialize);
    } // namespace

    void register_targetable_intercept(std::string_view path, targetable_intercept intercept) {
        targetable_overrides[std::string(path)].intercept = intercept;
    }

    void register_targetable(std::string_view path, app::AbilityType__Enum ability, bool value) {
        auto& values = targetable_overrides[std::string(path)];
        values.overrides[ability].new_value = value;
    }

    // AttackableSwitch AttackableSwitch_DoesReactTo public List<AttackableSwitch.AttackTypes> Attacks;
} // namespace randomizer::conditions

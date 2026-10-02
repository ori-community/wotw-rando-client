#include <Core/api/game/debug_menu.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state_virtual.h>
#include <Core/input/mouse.h>
#include <Core/settings.h>
#include <Modloader/app/methods/Moon/VisualDebug/DebugRenderer.h>
#include <Randomizer/features/area_segment_states.h>
#include <Randomizer/features/wheel.h>
#include <Randomizer/map/map_filter.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/uber_states/random_value_generator.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace randomizer::uber_states {
    #undef DEFINE_NAMED_STATE
    #define DEFINE_NAMED_STATE(member_id, member_name, type, default_value)                                                                                    \
        core::api::uber_states::StaticUberState<core::api::uber_states::UberId<core::api::uber_states::UberStateType::type>(GROUP_ID, member_id)>& STATE_FUNCTION_NAME(GROUP_ID, member_id)() {                                                       \
            static auto state = core::api::uber_states::StaticUberState<                                                                                        \
                core::api::uber_states::UberId<core::api::uber_states::UberStateType::type>(GROUP_ID, member_id)>();                                           \
            return state;                                                                                                                                      \
        }

    #undef REGISTER_GROUP
    #define REGISTER_GROUP

    #include "randomizer_uber_states.inc"

    #define STATIC_PROPERTY(type, name, default_value)                                                                                                         \
    core::Property<type>& name() {                                                                                                                             \
        static core::Property<type> state(default_value);                                                                                                      \
        return state;                                                                                                                                          \
    }

    namespace properties {
        STATIC_PROPERTY(int, player_current_map_area, -1)
        STATIC_PROPERTY(bool, player_is_teleporting, false)
    }

    // Add randomizer uber states to the game
    namespace {
        using namespace app::classes;

        template<const StringLiteralOrInteger NAME>
        void register_uber_states(const std::function<void(app::IUberState*)>& register_state, app::UberStateGroup* group);

        template<>
        void register_uber_states<"customBooleans">(const std::function<void(app::IUberState*)>& register_state, app::UberStateGroup* group) {
            constexpr auto CUSTOM_BOOLEAN_COUNT = 100;
            for (auto i = 0; i < CUSTOM_BOOLEAN_COUNT; ++i) {
                register_state(core::api::uber_states::create_uber_state<core::api::uber_states::UberStateType::SerializedBooleanUberState>(group, i, std::format("bool{:04d}", i), false));
            }
        }

        template<>
        void register_uber_states<"customIntegers">(const std::function<void(app::IUberState*)>& register_state, app::UberStateGroup* group) {
            constexpr auto CUSTOM_INTEGER_COUNT = 100;
            for (auto i = 0; i < CUSTOM_INTEGER_COUNT; ++i) {
                register_state(core::api::uber_states::create_uber_state<core::api::uber_states::UberStateType::SerializedIntUberState>(group, i, std::format("int{:04d}", i), false));
            }
        }

        template<>
        void register_uber_states<"customFloats">(const std::function<void(app::IUberState*)>& register_state, app::UberStateGroup* group) {
            constexpr auto CUSTOM_FLOAT_COUNT = 100;
            for (auto i = 0; i < CUSTOM_FLOAT_COUNT; ++i) {
                register_state(core::api::uber_states::create_uber_state<core::api::uber_states::UberStateType::SerializedFloatUberState>(group, i, std::format("float{:04d}", i), false));
            }
        }

        template<>
        void register_uber_states<"multiworld">(const std::function<void(app::IUberState*)>& register_state, app::UberStateGroup* group) {
            constexpr auto MULTIWORLD_STATE_COUNT = 2000;
            for (auto i = 0; i < MULTIWORLD_STATE_COUNT; ++i) {
                register_state(core::api::uber_states::create_uber_state<core::api::uber_states::UberStateType::SerializedBooleanUberState>(group, i, std::format("state{:04d}", i), false));
            }
        }

        template<>
        void register_uber_states<"mapSegments">(const std::function<void(app::IUberState*)>& register_state, app::UberStateGroup* group) {
            area_segment_states::register_virtual_uber_states();
        }

        void register_virtual_uber_states() {
            core::api::uber_states::register_virtual_uber_state(
                group_id<"randoConfig">(),
                300,
                core::api::uber_states::VirtualUberState::ValueType::Boolean,
                "enableDebugRenderer",
                [] { return Moon::VisualDebug::DebugRenderer::get_Enabled(); },
                [](double value) {
                    const auto is_enabled = value > 0.5;

                    if (core::api::game::debug_menu::should_prevent_cheats()) {
                        modloader::warn("uber_states", "Tried to enable debug renderer via uber state but Cheats are currently forbidden");
                        return;
                    }

                    if (is_enabled) {
                        core::api::game::debug_menu::notify_debug_was_active_this_session();
                    }

                    Moon::VisualDebug::DebugRenderer::set_Enabled(is_enabled);
                },
                core::api::uber_states::VirtualUberState::ChangeDetectionMode::Poll
            );

            using namespace core::api::game::player;
            using namespace core::api::uber_states;
            register_virtual_uber_state_from_property(group_id<"player">(), 0, VirtualUberState::ValueType::Integer, "spiritLight", spirit_light(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(group_id<"player">(), 1, VirtualUberState::ValueType::Integer, "gorlekOre", ore(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(group_id<"player">(), 2, VirtualUberState::ValueType::Integer, "keystones", keystones(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(group_id<"player">(), 3, VirtualUberState::ValueType::Integer, "shardSlots", shard_slots(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(group_id<"player">(), 10, VirtualUberState::ValueType::Integer, "baseMaxHealth", max_health(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state(group_id<"player">(), 11, VirtualUberState::ValueType::Integer, "maxHealth", [] { return get_max_health(); }, std::nullopt, VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(group_id<"player">(), 12, VirtualUberState::ValueType::Float, "health", health(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(group_id<"player">(), 20, VirtualUberState::ValueType::Float, "baseMaxEnergy", max_energy(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state(group_id<"player">(), 21, VirtualUberState::ValueType::Float, "maxEnergy", [] { return get_max_energy(); }, std::nullopt, VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(group_id<"player">(), 22, VirtualUberState::ValueType::Float, "energy", energy(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state(group_id<"player">(), 50, VirtualUberState::ValueType::Integer, "currentArea", [] { return static_cast<int>(get_current_area()); }, std::nullopt, VirtualUberState::ChangeDetectionMode::Poll);
            register_read_only_virtual_uber_state_from_property(group_id<"player">(), 51, VirtualUberState::ValueType::Integer, "currentMapArea", properties::player_current_map_area(), VirtualUberState::ChangeDetectionMode::ReactiveEffect);
            register_virtual_uber_state(
                group_id<"player">(),
                52,
                VirtualUberState::ValueType::Integer,
                "currentMapFilter",
                [] { return static_cast<int>(map::filter::current_map_filter().get()); },
                [](double value) { return map::filter::current_map_filter().set(static_cast<map::filter::MapFilter>(value)); },
                VirtualUberState::ChangeDetectionMode::ReactiveEffect
            );
            register_read_only_virtual_uber_state_from_property(group_id<"player">(), 100, VirtualUberState::ValueType::Boolean, "isTeleporting", properties::player_is_teleporting(), VirtualUberState::ChangeDetectionMode::ReactiveEffect);

            register_virtual_uber_state(
                group_id<"player">(),
                40,
                VirtualUberState::ValueType::Float,
                "positionX",
                []() -> double { return get_position().x; },
                [](const double x) {
                    const auto pos = get_position();
                    set_position(static_cast<float>(x), pos.y);
                    game_seed().environment().process_position_triggers();
                },
                VirtualUberState::ChangeDetectionMode::Poll
            );

            register_virtual_uber_state(
                group_id<"player">(),
                41,
                VirtualUberState::ValueType::Float,
                "positionY",
                []() -> double { return get_position().y; },
                [](const double y) {
                    const auto pos = get_position();
                    set_position(pos.x, static_cast<float>(y));
                    game_seed().environment().process_position_triggers();
                },
                VirtualUberState::ChangeDetectionMode::Poll
            );

            uber_states::random_value_generator::register_virtual_uber_states();

            register_virtual_uber_state(
                group_id<"settings">(),
                0,
                VirtualUberState::ValueType::Boolean,
                "randomSpiritLight",
                []() -> double { return core::settings::funny_money(); },
                std::nullopt,
                VirtualUberState::ChangeDetectionMode::Poll
            );

            constexpr std::array skills = {
                std::make_tuple(app::AbilityType__Enum::Bash, "bash"),
                std::make_tuple(app::AbilityType__Enum::WallJump, "wallJump"),
                std::make_tuple(app::AbilityType__Enum::DoubleJump, "doubleJump"),
                std::make_tuple(app::AbilityType__Enum::ChargeJump, "launch"),
                std::make_tuple(app::AbilityType__Enum::Glide, "glide"),
                std::make_tuple(app::AbilityType__Enum::WaterBreath, "waterBreath"),
                std::make_tuple(app::AbilityType__Enum::Grenade, "grenade"),
                std::make_tuple(app::AbilityType__Enum::SpiritLeash, "grapple"),
                std::make_tuple(app::AbilityType__Enum::GlowSpell, "flash"),
                std::make_tuple(app::AbilityType__Enum::SpiritSpearSpell, "spear"),
                std::make_tuple(app::AbilityType__Enum::MeditateSpell, "regenerate"),
                std::make_tuple(app::AbilityType__Enum::Bow, "bow"),
                std::make_tuple(app::AbilityType__Enum::Hammer, "hammer"),
                std::make_tuple(app::AbilityType__Enum::Torch, "torch"),
                std::make_tuple(app::AbilityType__Enum::Sword, "sword"),
                std::make_tuple(app::AbilityType__Enum::Digging, "burrow"),
                std::make_tuple(app::AbilityType__Enum::DashNew, "dash"),
                std::make_tuple(app::AbilityType__Enum::WaterDash, "waterDash"),
                std::make_tuple(app::AbilityType__Enum::ChakramSpell, "shuriken"),
                std::make_tuple(app::AbilityType__Enum::GoldenSein, "seir"),
                std::make_tuple(app::AbilityType__Enum::Blaze, "blaze"),
                std::make_tuple(app::AbilityType__Enum::TurretSpell, "sentry"),
                std::make_tuple(app::AbilityType__Enum::FeatherFlap, "flap"),
                std::make_tuple(app::AbilityType__Enum::DamageUpgradeA, "gladesAncestralLight"),
                std::make_tuple(app::AbilityType__Enum::DamageUpgradeB, "marshAncestralLight"),
                std::make_tuple(app::AbilityType__Enum::SpiritFlame, "spiritFlame"),
                std::make_tuple(app::AbilityType__Enum::UltraDefense, "resilience"),
                std::make_tuple(app::AbilityType__Enum::HealthEfficiency, "healthEfficiency"),
                std::make_tuple(app::AbilityType__Enum::EnergyEfficiency, "energyEfficiency"),
                std::make_tuple(app::AbilityType__Enum::BowCharge, "bowCharge"),
                std::make_tuple(app::AbilityType__Enum::SpiritMagnet, "spiritMagnet"),
                std::make_tuple(app::AbilityType__Enum::WeaponCharge, "weaponCharge"),
            };

            for (const auto& [type, name]: skills) {
                register_virtual_uber_state(
                    group_id<"skills">(),
                    static_cast<int>(type),
                    VirtualUberState::ValueType::Boolean,
                    name,
                    [type]() -> double { return ability(type).get(); },
                    [type](const double x) { ability(type).set(x > 0.5); },
                    VirtualUberState::ChangeDetectionMode::Poll
                );
            }

            constexpr std::array shards = {
                std::make_tuple(app::SpiritShardType__Enum::GlassCannon, "overcharge"),
                std::make_tuple(app::SpiritShardType__Enum::TripleJump, "tripleJump"),
                std::make_tuple(app::SpiritShardType__Enum::AntiAir, "wingclip"),
                std::make_tuple(app::SpiritShardType__Enum::Focus, "bounty"),
                std::make_tuple(app::SpiritShardType__Enum::Swap, "swap"),
                std::make_tuple(app::SpiritShardType__Enum::CrescentShot_Deprecated, "crescentShotDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::Pierce, "pierce"),
                std::make_tuple(app::SpiritShardType__Enum::SpiritMagnet, "magnet"),
                std::make_tuple(app::SpiritShardType__Enum::Splinter, "splinter"),
                std::make_tuple(app::SpiritShardType__Enum::Blaze_Deprecated, "blazeDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::Frost_Deprecated, "frostDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::LifeLeech_Deprecated, "lifeLeechDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::Reckless, "reckless"),
                std::make_tuple(app::SpiritShardType__Enum::Frenzy, "quickshot"),
                std::make_tuple(app::SpiritShardType__Enum::Explosive_Deprecated, "explosiveDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::Ricochet, "ricochet"),
                std::make_tuple(app::SpiritShardType__Enum::Climb_Deprecated, "climbDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::Barrier, "resilience"),
                std::make_tuple(app::SpiritShardType__Enum::SpiritLightLuck, "spiritLightHarvest"),
                std::make_tuple(app::SpiritShardType__Enum::Compass_Deprecated, "compassDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::Waterbreathing_Deprecated, "waterbreathingDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::Vitality, "vitality"),
                std::make_tuple(app::SpiritShardType__Enum::VitalityLuck, "lifeHarvest"),
                std::make_tuple(app::SpiritShardType__Enum::SpiritWellShield_Deprecated, "spiritWellShieldDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::EnergyLuck, "energyHarvest"),
                std::make_tuple(app::SpiritShardType__Enum::Energy, "energy"),
                std::make_tuple(app::SpiritShardType__Enum::BloodPact, "lifePact"),
                std::make_tuple(app::SpiritShardType__Enum::LastResort, "lastStand"),
                std::make_tuple(app::SpiritShardType__Enum::HarvestOfLight_Deprecated, "harvestOfLightDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::Sense, "sense"),
                std::make_tuple(app::SpiritShardType__Enum::UnderwaterEfficiency_Deprecated, "underwaterEfficiencyDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::UltraBash, "ultraBash"),
                std::make_tuple(app::SpiritShardType__Enum::UltraLeash, "ultraGrapple"),
                std::make_tuple(app::SpiritShardType__Enum::Recycler, "overflow"),
                std::make_tuple(app::SpiritShardType__Enum::Counterstrike, "thorn"),
                std::make_tuple(app::SpiritShardType__Enum::HollowEnergy, "catalyst"),
                std::make_tuple(app::SpiritShardType__Enum::Supressor, "supressor"),
                std::make_tuple(app::SpiritShardType__Enum::Aggressor, "turmoil"),
                std::make_tuple(app::SpiritShardType__Enum::Glue, "sticky"),
                std::make_tuple(app::SpiritShardType__Enum::CombatLuck, "finesse"),
                std::make_tuple(app::SpiritShardType__Enum::SpiritPower, "spiritSurge"),
                std::make_tuple(app::SpiritShardType__Enum::Overcharge_Deprecated, "overchargeDeprecated"),
                std::make_tuple(app::SpiritShardType__Enum::Untouchable, "lifeforce"),
                std::make_tuple(app::SpiritShardType__Enum::MirrorStrike, "deflector"),
                std::make_tuple(app::SpiritShardType__Enum::Stinger, "stinger"),
                std::make_tuple(app::SpiritShardType__Enum::Fracture, "fracture"),
                std::make_tuple(app::SpiritShardType__Enum::ChainLightning, "arcing"),
            };

            for (const auto& [type, name]: shards) {
                register_virtual_uber_state(
                    group_id<"shards">(),
                    static_cast<int>(type),
                    VirtualUberState::ValueType::Boolean,
                    name,
                    [type]() -> double { return shard(type).get(); },
                    [type](const double x) { shard(type).set(x > 0.5); },
                    VirtualUberState::ChangeDetectionMode::Poll
                );
            }

            register_virtual_uber_state(
                group_id<"input">(),
                1,
                VirtualUberState::ValueType::Float,
                "mouseWorldPositionX",
                []() -> double { return core::input::mouse::get_world_position().x; },
                std::nullopt,
                VirtualUberState::ChangeDetectionMode::Poll
            );

            register_virtual_uber_state(
                group_id<"input">(),
                2,
                VirtualUberState::ValueType::Float,
                "mouseWorldPositionY",
                []() -> double { return core::input::mouse::get_world_position().y; },
                std::nullopt,
                VirtualUberState::ChangeDetectionMode::Poll
            );

            register_read_only_virtual_uber_state_from_property(
                group_id<"input">(),
                3,
                VirtualUberState::ValueType::Boolean,
                "wheelOpen",
                features::wheel::is_wheel_visible(),
                VirtualUberState::ChangeDetectionMode::ReactiveEffect
            );
        }

        template<const core::api::uber_states::UberStateType>
        void debug_validate_uber_state(const int group_id, const int member_id) {
            // non-virtual uber states are always valid, because they are automatically created.
            // Virtual uber states need to be registered manually in register_virtual_uber_states().
            // The specialization of this function for virtual uber states checks their existence.
        }

        void debug_validate_virtual_uber_state(const int group_id, const int member_id) {
            // If it crashes here you forgot to register the virtual uber state in register_virtual_uber_states()
            assert(core::api::uber_states::is_virtual_uber_state(group_id, member_id));
        }

        template<>
        void debug_validate_uber_state<core::api::uber_states::UberStateType::VirtualBooleanUberState>(const int group_id, const int member_id) {
            debug_validate_virtual_uber_state(group_id, member_id);
        }

        template<>
        void debug_validate_uber_state<core::api::uber_states::UberStateType::VirtualByteUberState>(const int group_id, const int member_id) {
            debug_validate_virtual_uber_state(group_id, member_id);
        }

        template<>
        void debug_validate_uber_state<core::api::uber_states::UberStateType::VirtualIntUberState>(const int group_id, const int member_id) {
            debug_validate_virtual_uber_state(group_id, member_id);
        }

        template<>
        void debug_validate_uber_state<core::api::uber_states::UberStateType::VirtualFloatUberState>(const int group_id, const int member_id) {
            debug_validate_virtual_uber_state(group_id, member_id);
        }

        IL2CPP_INTERCEPT(void, Moon::UberStateCollection, PrepareRuntimeDataType, app::UberStateCollection* this_ptr) {
            app::UberStateGroup* group = nullptr;
            const auto register_state = [&](app::IUberState* state) {
                il2cpp::invoke(this_ptr->fields.m_descriptors, "Add", state);
            };

            #undef REGISTER_GROUP
            #define REGISTER_GROUP group = core::api::uber_states::create_uber_state_group(GROUP_ID, GROUP_NAME);

            #undef REGISTER_STATES_AT_RUNTIME
            #define REGISTER_STATES_AT_RUNTIME register_uber_states<GROUP_NAME>(register_state, group);

            #undef DEFINE_NAMED_STATE
            #define DEFINE_NAMED_STATE(member_id, member_name, type, default_value) \
                register_state(core::api::uber_states::create_uber_state<core::api::uber_states::UberStateType::type>(group, member_id, member_name, default_value));

            // Virtual uber states need to be manually registered in register_virtual_uber_states()
            #undef DEFINE_NAMED_VIRTUAL_STATE
            #define DEFINE_NAMED_VIRTUAL_STATE(member_id, member_name, type)

            #include "randomizer_uber_states.inc"

            next::Moon::UberStateCollection::PrepareRuntimeDataType(this_ptr);

            register_virtual_uber_states();

            #ifdef DEBUG
            // Validate that all defined virtual uber states are registered.
            #undef REGISTER_GROUP
            #define REGISTER_GROUP
            #undef REGISTER_STATES_AT_RUNTIME
            #define REGISTER_STATES_AT_RUNTIME
            #undef DEFINE_NAMED_STATE
            #define DEFINE_NAMED_STATE(member_id, member_name, type, default_value)
            #undef DEFINE_NAMED_VIRTUAL_STATE
            #define DEFINE_NAMED_VIRTUAL_STATE(member_id, member_name, type) \
                debug_validate_uber_state<core::api::uber_states::UberStateType::type>(GROUP_ID, member_id);
            #include "randomizer_uber_states.inc"
            #endif
        }
    }
}

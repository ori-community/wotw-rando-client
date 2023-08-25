#include <constants.h>
#include <features/controls/mouse_control.h>
#include <randomizer.h>

#include <Common/ext.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_virtual.h>
#include <Core/dev/timing.h>
#include <Core/enums/uber_state.h>

#include <Modloader/app/methods/Moon/UberStateCollection.h>
#include <Modloader/app/types/BooleanUberState.h>
#include <Modloader/app/types/ByteUberState.h>
#include <Modloader/app/types/FloatUberState.h>
#include <Modloader/app/types/IntUberState.h>
#include <Modloader/app/types/PlayerInput.h>
#include <Modloader/app/types/SerializedBooleanUberState.h>
#include <Modloader/app/types/SerializedByteUberState.h>
#include <Modloader/app/types/SerializedFloatUberState.h>
#include <Modloader/app/types/SerializedIntUberState.h>
#include <Modloader/app/types/UberID.h>
#include <Modloader/app/types/UberStateGroup.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <chrono>

using namespace modloader;
using namespace app::classes;
using namespace core::api::uber_states;

namespace randomizer {
    namespace {
        app::UberID* create_uber_id_ptr(int id) {
            auto uber_id = types::UberID::create();
            uber_id->fields.m_id = id;
            return uber_id;
        }

        // We cache the scriptable objects and use il2cpp::unity::instantiate_object to create instances from them
        // because that's a lot faster
        std::unordered_map<Il2CppClass*, app::IUberState*> uber_state_so_cache;
        app::UberStateGroup* group_so_cache = nullptr;

        template <typename T>
        Il2CppClass* get_klass();
        template <>
        Il2CppClass* get_klass<app::SerializedBooleanUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedBooleanUberState::get_class());
        }
        template <>
        Il2CppClass* get_klass<app::SerializedByteUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedByteUberState::get_class());
        }
        template <>
        Il2CppClass* get_klass<app::SerializedIntUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedIntUberState::get_class());
        }
        template <>
        Il2CppClass* get_klass<app::SerializedFloatUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedFloatUberState::get_class());
        }
        template <>
        Il2CppClass* get_klass<app::BooleanUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::BooleanUberState::get_class());
        }
        template <>
        Il2CppClass* get_klass<app::ByteUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::ByteUberState::get_class());
        }
        template <>
        Il2CppClass* get_klass<app::IntUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::IntUberState::get_class());
        }
        template <>
        Il2CppClass* get_klass<app::FloatUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::FloatUberState::get_class());
        }

        template <typename T, typename V>
        app::IUberState* add_state(UberStateGroup group, const std::string& state_name, int state_id, V default_value) {
            auto klass = get_klass<T>();

            if (!uber_state_so_cache.contains(klass)) {
                uber_state_so_cache[klass] = reinterpret_cast<app::IUberState*>(il2cpp::unity::create_scriptable_object<T>(get_klass<T>()));
            }

            auto state = il2cpp::unity::instantiate_object<T>(reinterpret_cast<T*>(uber_state_so_cache[klass]));

            if (group_so_cache == nullptr) {
                group_so_cache = il2cpp::unity::create_scriptable_object<app::UberStateGroup>(types::UberStateGroup::get_class());
            }

            state->fields.Group = il2cpp::unity::instantiate_object<app::UberStateGroup>(group_so_cache);

            state->fields.Group->fields._.m_id = create_uber_id_ptr(static_cast<int>(group));
            il2cpp::invoke(state->fields.Group, "set_name", il2cpp::string_new(uber_state_group_name(group)));

            state->fields._.m_id = create_uber_id_ptr(state_id);
            il2cpp::invoke(state, "set_name", il2cpp::string_new(state_name.c_str()));

            state->fields.DefaultValue = default_value;
            state->fields.m_value = default_value;
            state->fields.NamedValues = nullptr;
            state->fields._VolitileGenericOverrideValue_k__BackingField.has_value = false;

            return reinterpret_cast<app::IUberState*>(state);
        }

        IL2CPP_INTERCEPT(Moon::UberStateCollection, void, PrepareRuntimeDataType, (app::UberStateCollection * this_ptr)) {
            auto start_time = std::chrono::high_resolution_clock::now();

            std::vector<app::IUberState*> states = {
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "swordTree", static_cast<int>(app::AbilityType__Enum::Sword), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "doubleJumpTree", static_cast<int>(app::AbilityType__Enum::DoubleJump), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "regenerateTree", static_cast<int>(app::AbilityType__Enum::MeditateSpell), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "bowTree", static_cast<int>(app::AbilityType__Enum::Bow), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "dashTree", static_cast<int>(app::AbilityType__Enum::DashNew), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "bashTree", static_cast<int>(app::AbilityType__Enum::Bash), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "grappleTree", static_cast<int>(app::AbilityType__Enum::SpiritLeash), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "waterDashTree", static_cast<int>(app::AbilityType__Enum::WaterDash), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "flashTree", static_cast<int>(app::AbilityType__Enum::GlowSpell), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "grenadeTree", static_cast<int>(app::AbilityType__Enum::Grenade), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "burrowTree", static_cast<int>(app::AbilityType__Enum::Digging), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "launchTree", static_cast<int>(app::AbilityType__Enum::ChargeJump), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "ancestralLightTreeA", static_cast<int>(app::AbilityType__Enum::DamageUpgradeA), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "ancestralLightTreeB", static_cast<int>(app::AbilityType__Enum::DamageUpgradeB), false),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "waterBreath", 23, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "spike", 74, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "spiritSmash", 98, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "fastTravel", 105, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "spiritStar", 106, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "blaze", 115, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "sentry", 116, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "explodingSpike", 1074, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "shockSmash", 1098, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "staticStar", 1106, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "chargeBlaze", 1115, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "rapidSentry", 1116, false),

                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "waterBreathCost", 10023, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "spikeCost", 10074, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "spiritSmashCost", 10098, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "fastTravelCost", 10105, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "spiritStarCost", 10106, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "blazeCost", 10115, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "sentryCost", 10116, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "explodingSpikeCost", 11074, 300),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "shockSmashCost", 11098, 300),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "staticStarCost", 11106, 300),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "chargeBlazeCost", 11115, 300),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherWeapon, "rapidSentryCost", 11116, 300),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherWeapon, "hasBoughtEverything", 20000, false),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "energy", 26, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "vitality", 22, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "overcharge", 1, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "wingclip", 3, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "tripleJump", 2, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "finesse", 40, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "swap", 5, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "lightHarvest", 19, false),

                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "energyCost", 126, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "vitalityCost", 122, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "overchargeCost", 101, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "wingclipCost", 103, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "tripleJumpCost", 102, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "finesseCost", 140, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "swapCost", 105, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShard, "lightHarvestCost", 119, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShard, "hasBoughtEverything", 20000, false),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "spiritWell", 16825, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "shardShop", 7528, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "housesA", 51230, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "housesB", 23607, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "housesC", 40448, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "removeThorns", 18751, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "openCave", 16586, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "beautify", 15068, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "spiritWellCost", 116825, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "shardShopCost", 107528, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "housesACost", 151230, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "housesBCost", 123607, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "housesCCost", 140448, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "removeThornsCost", 118751, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "openCaveCost", 116586, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "beautifyCost", 115068, 0),

                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "hammerSpeedMultiplier", 0, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "swordSpeedMultiplier", 1, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "blazeCostMultiplier", 2, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "spikeCostMultiplier", 3, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "shurikenCostMultiplier", 4, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "sentryCostMultiplier", 5, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "bowCostMultiplier", 6, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "regenerationCostMultiplier", 7, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "flashCostMultiplier", 8, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "lightBurstCostMultiplier", 9, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "bowRapidFireMultiplier", 10, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "spearSpeedMultiplier", 11, 1),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "relic", 20, 0),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "healthRegeneration", 30, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "energyRegeneration", 31, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "extraDoubleJumps", 35, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "extraDashes", 36, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "extraSentries", 37, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "extraShurikens", 38, 0),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "extraGrenades", 40, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "grenadesExplodeOnCollision", 41, true),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "bashableUnchargedGrenades", 42, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "chargedAirGrenades", 43, false),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "grenadeChargeTimeModifier", 44, 1.0f),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "grenadeMultishot", 45, 0),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "sentryShots", 46, 3),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "sentryFireRateSpeed", 47, 1.0),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "hammerSpeed", 50, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "swordSpeed", 51, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "blazeEfficiency", 52, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "spikeEfficiency", 53, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "shurikenEfficiency", 54, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "sentryEfficiency", 55, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "bowEfficiency", 56, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "regenerateEfficiency", 57, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "flashEfficiency", 58, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "lightBurstEfficiency", 59, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "bowAsFireSource", 70, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "blazeAsFireSource", 71, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "swordAsFireSource", 72, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "hammerAsFireSource", 73, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "spearAsFireSource", 74, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "shurikenAsFireSource", 75, false),

                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "launchSpeed", 80, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "dashDistance", 81, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "bashSpeed", 82, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "burrowSpeed", 83, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "burrowDashSpeed", 84, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "swimSpeed", 85, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "swimDashSpeed", 86, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "jumpHeight", 87, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "wallJumpStrength", 88, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "doubleJumpStrength", 89, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "grappleSpeed", 90, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "regenerateSpeed", 91, 1.0),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "explodingSpike", 95, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "shockSmash", 96, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "staticStar", 97, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "chargeBlaze", 98, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "rapidSentry", 99, 0),

                // What are these doing here??
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "marshRelic", 100, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "hollowRelic", 101, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "gladesRelic", 102, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "wellspringRelic", 103, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "burrowsRelic", 104, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "woodsRelic", 105, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "reachRelic", 106, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "poolsRelic", 107, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "depthsRelic", 108, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "wastesRelic", 109, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "willowRelic", 111, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "overflowPickupUpgrade", 150, false),

                add_state<app::BooleanUberState>(UberStateGroup::GameState, "goalModesComplete", 11, false),
                add_state<app::IntUberState>(UberStateGroup::GameState, "currentMapArea", 15, static_cast<int>(GameArea::TOTAL)),

                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onTeleport", 20, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onJump", 30, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onDoubleJump", 31, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onDash", 32, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onBash", 33, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onGlide", 34, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onSword", 35, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onHammer", 36, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onSpike", 37, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onSpiritStar", 38, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onLightBurst", 39, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onBow", 40, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onBlaze", 41, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onSentry", 42, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onFlash", 43, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onLaunch", 44, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onWallJump", 45, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onBurrow", 46, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onWaterDash", 47, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onFlap", 48, false),
                add_state<app::BooleanUberState>(UberStateGroup::GameState, "onRegenerate", 49, false),
                // 100 max health
                // 101 max energy
                // 102 ore
                // 103 keystones
                // 104 shard slots
                // 105 health
                // 106 energy
                // 107 spirit light
                // arguably these are just stats but w/e!!!

                add_state<app::IntUberState>(UberStateGroup::ShrineStates, "gladesShrineWave", 0, 0),
                add_state<app::IntUberState>(UberStateGroup::ShrineStates, "marshShrineWave", 1, 0),
                add_state<app::IntUberState>(UberStateGroup::ShrineStates, "howlsDenShrineWave", 2, 0),
                add_state<app::IntUberState>(UberStateGroup::ShrineStates, "depthsShrineWave", 3, 0),
                add_state<app::IntUberState>(UberStateGroup::ShrineStates, "woodsShrineWave", 4, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "collectedKeystones", 0, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "purchasedKeystones", 1, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "pickupsCollected", 2, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "spiritLightCollected", 3, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "spiritLightSpent", 4, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "oreCollected", 5, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoState, "oreSpent", 6, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "checkableItemHint1", 10, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "checkableItemHint2", 11, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "checkableItemHint3", 12, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "checkableItemHint4", 13, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "checkableItemHint5", 14, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "checkableItemHint6", 15, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "checkableItemHint7", 16, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "checkableItemHint8", 17, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "checkableItemHint9", 18, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "checkableItemHint10", 19, false),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "tuleyExists", 300, false),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "rainLiftedInMarsh", 401, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "forceDrainRegenTreeWater", 402, true),

                // skills
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "bash", 1000, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "wallJump", 1003, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "doubleJump", 1005, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "launch", 1008, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "feather", 1014, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "waterBreath", 1023, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "lightBurst", 1051, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "grapple", 1057, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "flash", 1062, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "spike", 1074, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "regenerate", 1077, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "bow", 1097, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "hammer", 1098, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "torch", 1099, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "sword", 1100, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "burrow", 1101, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "dash", 1102, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "waterDash", 1104, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "shuriken", 1106, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "sein", 1108, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "blaze", 1115, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "sentry", 1116, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "flap", 1118, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "ancestralLight", 1120, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "ancestralLight", 1121, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "cleanWater", 2000, false),
                // deep skills
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "spiritFlame", 1015, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "resilience", 1031, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "healthEfficiency", 1032, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "energyEfficiency", 1039, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "bowCharge", 1109, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "spiritMagnet", 1112, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "weaponCharge", 1119, false),

                // LOOK IT'S FINE
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "marshKeyItemHint", 10000, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "hollowKeyItemHint", 10001, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "gladesKeyItemHint", 10002, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "wellspringKeyItemHint", 10003, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "burrowsKeyItemHint", 10004, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "woodsKeyItemHint", 10005, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "reachKeyItemHint", 10006, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "poolsKeyItemHint", 10007, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "depthsKeyItemHint", 10008, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "wastesKeyItemHint", 10009, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoState, "willowKeyItemHint", 10011, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "squares", 0, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "lines", 1, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "rank", 2, 0),

                // murder tracking
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "kills", 10, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "swordKills", 11, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "hammerKills", 12, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "bowKills", 13, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "spearKills", 14, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "sentryKills", 15, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "blazeKills", 16, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "grenadeKills", 17, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "burnDoTKills", 18, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "shurikenKills", 19, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "launchKills", 20, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "flashKills", 21, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "bashKills", 22, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "drownedEnemies", 23, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "minerKills", 40, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "flierKills", 41, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "tentaKills", 42, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "slimeKills", 43, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "fishKills", 44, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "exploderKills", 45, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "gladesTpFix", 0, true),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "preventMapReactivateTps", 1, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "kwolokDoorAvailable", 6, true),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "chaosMode", CHAOS_MODE_ID, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "preventPickup", PREVENT_PICKUP_ID, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "stompThroughPortals", STOMP_THROUGH_PORTALS_ID, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "stompIntoWater", STOMP_INTO_WATER_ID, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "goodHollow", GOOD_HOLLOW_ID, true),

                add_state<app::SerializedIntUberState>(UberStateGroup::RandoConfig, "forceNoAirDecelerationFlag", FORCE_AIR_NO_DECELERATION_ID, 0),

                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoConfig, "chaosTriggerMin", CHAOS_TRIGGER_MIN_ID, 30.f),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoConfig, "chaosTriggerMax", CHAOS_TRIGGER_MAX_ID, 60.f),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::MapFilter, "spoilerIconTag", 70, false),

                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "marshTime", 0, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "hollowTime", 1, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "gladesTime", 2, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "wellspringTime", 3, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "burrowsTime", 4, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "woodsTime", 5, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "reachTime", 6, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "poolsTime", 7, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "depthsTime", 8, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "wastesTime", 9, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "ruinsTime", 10, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "willowTime", 11, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "shopTime", 12, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "voidTime", 13, 0),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "marshDeaths", 20, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "hollowDeaths", 21, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "gladesDeaths", 22, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "wellspringDeaths", 23, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "burrowsDeaths", 24, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "woodsDeaths", 25, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "reachDeaths", 26, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "poolsDeaths", 27, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "depthsDeaths", 28, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "wastesDeaths", 29, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "ruinsDeaths", 30, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "willowDeaths", 31, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "shopDeaths", 32, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "voidDeaths", 33, 0),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "marshPickups", 40, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "hollowPickups", 41, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "gladesPickups", 42, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "wellspringPickups", 43, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "burrowsPickups", 44, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "woodsPickups", 45, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "reachPickups", 46, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "poolsPickups", 47, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "depthsPickups", 48, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "wastesPickups", 49, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "ruinsPickups", 50, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "willowPickups", 51, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "shopPickups", 52, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoStats, "voidPickups", 53, 0),
                // TODO: unclear to me that we need to track void pickups

                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalMarshPickups", 60, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalHollowPickups", 61, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalGladesPickups", 62, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalWellspringPickups", 63, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalBurrowsPickups", 64, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalWoodsPickups", 65, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalReachPickups", 66, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalPoolsPickups", 67, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalDepthsPickups", 68, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalWastesPickups", 69, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalRuinsPickups", 70, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalWillowPickups", 71, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalShopPickups", 72, 0),

                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "time", 100, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "deaths", 101, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "currentDrought", 102, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "longestDrought", 103, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "timeSinceLastCheckpoint", 104, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "timeLostToDeaths", 105, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "warpsUsed", 106, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoStats, "peakPpmTime", 107, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "peakPpmCount", 108, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "totalPickupCount", 109, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "marshMapCost", static_cast<int>(app::GameWorldAreaID__Enum::InkwaterMarsh), 200),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "hollowMapCost", static_cast<int>(app::GameWorldAreaID__Enum::KwoloksHollow), 150),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "wellspringMapCost", static_cast<int>(app::GameWorldAreaID__Enum::WaterMill), 150),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "burrowMapCost", static_cast<int>(app::GameWorldAreaID__Enum::MidnightBurrow), 50),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "reachMapCost", static_cast<int>(app::GameWorldAreaID__Enum::BaursReach), 150),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "poolsMapCost", static_cast<int>(app::GameWorldAreaID__Enum::LumaPools), 150),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "depthsMapCost", static_cast<int>(app::GameWorldAreaID__Enum::MouldwoodDepths), 150),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "wastesMapCost", static_cast<int>(app::GameWorldAreaID__Enum::WindsweptWastes), 150),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoGroup, "willowsEndMapCost", static_cast<int>(app::GameWorldAreaID__Enum::WillowsEnd), 50),

                add_state<app::SerializedIntUberState>(UberStateGroup::npcsStateGroup, "hcMapIconCost", 19397, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::npcsStateGroup, "ecMapIconCost", 57988, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::npcsStateGroup, "shardMapIconCost", 41667, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::npcsStateGroup, "hasBoughtEverything", 20000, false),
            };

            dev::print_time(start_time, "Built state list");

            // Game states
            const int game_modes_int_start = 0;
            const int game_modes_bool_start = 1000;
            const int game_modes_float_start = 2000;
            const int game_modes_int_count = 5;
            const int game_modes_bool_count = 5;
            const int game_modes_float_count = 5;
            for (int i = 0; i < game_modes_int_count; ++i) {
                states.push_back(
                    add_state<app::SerializedIntUberState>(UberStateGroup::RandoGameModes, fmt::format("{:04d}_int", i), game_modes_int_start + i, 0)
                );
            }

            for (int i = 0; i < game_modes_bool_count; ++i) {
                states.push_back(
                    add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoGameModes, fmt::format("{:04d}_bool", i), game_modes_bool_start + i, false)
                );
            }

            for (int i = 0; i < game_modes_float_count; ++i) {
                states.push_back(
                    add_state<app::SerializedFloatUberState>(UberStateGroup::RandoGameModes, fmt::format("{:04d}_float", i), game_modes_float_start + i, false)
                );
            }

            // Plando states
            const int plando_int_start = 0;
            const int plando_bool_start = 100;
            const int plando_float_start = 150;
            const int plando_int_count = 100;
            const int plando_bool_count = 50;
            const int plando_float_count = 25;
            for (int i = 0; i < plando_int_count; ++i) {
                states.push_back(
                    add_state<app::SerializedIntUberState>(UberStateGroup::PlandoVars, fmt::format("{:04d}_int", plando_int_start + i), plando_int_start + i, 0)
                );
            }

            for (int i = 0; i < plando_bool_count; ++i) {
                states.push_back(
                    add_state<app::SerializedBooleanUberState>(UberStateGroup::PlandoVars, fmt::format("{:04d}_bool", plando_bool_start + i), plando_bool_start + i, false)
                );
            }

            for (int i = 0; i < plando_float_count; ++i) {
                states.push_back(
                    add_state<app::SerializedFloatUberState>(UberStateGroup::PlandoVars, fmt::format("{:04d}_float", plando_float_start + i), plando_float_start + i, false)
                );
            }

            // Saved appliers.
            const int appliers_group_count = 50;
            for (int i = 0; i < appliers_group_count; ++i) {
                states.push_back(
                    add_state<app::SerializedIntUberState>(UberStateGroup::Appliers, fmt::format("{:04d}_id", i * 2), i * 2, 0)
                );

                states.push_back(
                    add_state<app::SerializedIntUberState>(UberStateGroup::Appliers, fmt::format("{:04d}_value", i * 2 + 1), i * 2 + 1, 0)
                );
            }

            dev::print_time(start_time, "Built custom state list");

        for (int i = 0; i < 2000; ++i) {
            states.push_back(
                    add_state<app::SerializedBooleanUberState>(UberStateGroup::MultiVars, fmt::format("{}_multi", i), i, false)
            );
        }

            dev::print_time(start_time, "Built multi state list");

            for (auto* state : states) {
                il2cpp::invoke(this_ptr->fields.m_descriptors, "Add", state);
            }

            dev::print_time(start_time, "Added states");

            trace(MessageType::Info, 5, "initialize", "Custom uber states initialized.");
            next::Moon::UberStateCollection::PrepareRuntimeDataType(this_ptr);

            register_virtual_state(
                std::make_pair(UberStateGroup::GameState, 0),
                "On New Game",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) {},
                    []() { return 1; },
                })
            );

            register_virtual_state(
                std::make_pair(UberStateGroup::GameState, 1),
                "On Load Seed",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) {},
                    []() { return 1; },
                })
            );

            register_virtual_state(
                std::make_pair(UberStateGroup::GameState, 2),
                "On Binding 1",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) {},
                    []() { return 1; },
                })
            );

            register_virtual_state(
                std::make_pair(UberStateGroup::GameState, 3),
                "On Binding 2",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) {},
                    []() { return 1; },
                })
            );

            register_virtual_state(
                std::make_pair(UberStateGroup::GameState, 4),
                "On Binding 3",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) {},
                    []() { return 1; },
                })
            );

            register_virtual_state(
                std::make_pair(UberStateGroup::GameState, 5),
                "On Binding 4",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) {},
                    []() { return 1; },
                })
            );

            register_virtual_state(
                std::make_pair(UberStateGroup::GameState, 6),
                "On Binding 5",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) {},
                    []() { return 1; },
                })
            );

            register_virtual_state(
                std::make_pair(UberStateGroup::GameState, 7),
                "On Progress Hint",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) {},
                    []() { return 1; },
                })
            );

            register_virtual_state(std::make_pair(UberStateGroup::RandoVirtual, 0), "Spirit Light", core::wrap<double>(core::api::game::player::spirit_light()));
            register_virtual_state(std::make_pair(UberStateGroup::RandoVirtual, 1), "Gorlek Ore", core::wrap<double>(core::api::game::player::ore()));
            register_virtual_state(std::make_pair(UberStateGroup::RandoVirtual, 1), "Keystones", core::wrap<double>(core::api::game::player::keystones()));
            register_virtual_state(std::make_pair(UberStateGroup::RandoVirtual, 10), "Max Health", core::wrap<double>(core::api::game::player::max_health()));
            register_virtual_state(std::make_pair(UberStateGroup::RandoVirtual, 11), "Health", core::wrap<double>(core::api::game::player::health()));
            register_virtual_state(std::make_pair(UberStateGroup::RandoVirtual, 12), "Max Energy", core::wrap<double>(core::api::game::player::max_energy()));
            register_virtual_state(std::make_pair(UberStateGroup::RandoVirtual, 13), "Energy", core::wrap<double>(core::api::game::player::energy()));
            register_virtual_state(
                std::make_pair(UberStateGroup::RandoVirtual, 100),
                "Debug Enabled",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) { core::api::game::debug_controls(x > 0.5); },
                    []() { return core::api::game::debug_controls() ? 1.0 : 0.0; } })
            );
            register_virtual_state(
                std::make_pair(UberStateGroup::RandoVirtual, 110),
                "Invert x axis",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) { set_axis_inverted(true, x > 0.5); },
                    []() { return get_axis_inverted(true) ? 1.0 : 0.0; } })
            );
            register_virtual_state(
                std::make_pair(UberStateGroup::RandoVirtual, 111),
                "Invert y axis",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) { set_axis_inverted(false, x > 0.5); },
                    []() -> double { return get_axis_inverted(false) ? 1.0 : 0.0; } })
            );
            register_virtual_state(
                std::make_pair(UberStateGroup::RandoVirtual, 112),
                "Player input active",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) {
                        auto player_input = types::PlayerInput::get_class()->static_fields->Instance;
                        player_input->fields.Active = x > 0.5;
                    },
                    []() -> double {
                        auto player_input = types::PlayerInput::get_class()->static_fields->Instance;
                        return static_cast<double>(player_input->fields.Active);
                    } })
            );
            register_virtual_state(
                std::make_pair(UberStateGroup::RandoVirtual, 200),
                "Area",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 200) is read only."); },
                    []() -> double { return static_cast<double>(core::api::game::player::get_current_area()); } })
            );
            register_virtual_state(
                std::make_pair(UberStateGroup::RandoVirtual, 500),
                "Total Relics",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 500) is read only."); },
                    []() -> double { return static_cast<double>(0 /*TODO: csharp_bridge::get_relic_count(true)*/); } })
            );
            register_virtual_state(
                std::make_pair(UberStateGroup::RandoVirtual, 501),
                "Current Relics",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 501) is read only."); },
                    []() -> double { return static_cast<double>(0 /*TODO: csharp_bridge::get_relic_count(false)*/); } })
            );
            register_virtual_state(
                std::make_pair(UberStateGroup::RandoVirtual, 502),
                "Current Trees",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 502) is read only."); },
                    []() -> double {
                        return UberState(UberStateGroup::Tree, app::AbilityType__Enum::Sword).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::DoubleJump).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::MeditateSpell).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::Bow).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::DashNew).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::Bash).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::SpiritLeash).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::WaterDash).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::GlowSpell).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::Grenade).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::Digging).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::ChargeJump).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::DamageUpgradeA).get() + UberState(UberStateGroup::Tree, app::AbilityType__Enum::DamageUpgradeB).get();
                    } })
            );
            register_virtual_state(
                std::make_pair(UberStateGroup::RandoVirtual, 503),
                "Current Wisps",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 503) is read only."); },
                    []() -> double {
                        return UberState(static_cast<UberStateGroup>(28895), 25522).get() // Reach
                            + UberState(static_cast<UberStateGroup>(18793), 63291).get() // Mouldwood
                            + UberState(static_cast<UberStateGroup>(945), 49747).get() // Pools
                            + UberState(static_cast<UberStateGroup>(10289), 22102).get() // Wastes
                            + UberState(static_cast<UberStateGroup>(46462), 59806).get(); // Hollow
                    } })
            );
            register_virtual_state(
                std::make_pair(UberStateGroup::RandoVirtual, 504),
                "Current Quests",
                core::DynamicValue<double>(core::set_get<double>{
                    [](double x) { trace(MessageType::Error, 1, "uber_state_virtual", "Invalid operation: uberstate (15, 504) is read only."); },
                    []() -> double {
                        return static_cast<int>(UberState(static_cast<UberStateGroup>(937), 34641).get() > 3.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 35399).get() > 2.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 35087).get() > 2.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 45931).get() > 2.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 8973).get() > 2.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(48248), 51645).get() > 2.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(48248), 18458).get() > 3.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 20667).get() > 2.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 15983).get() > 2.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 27804).get() > 3.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 59708).get() > 2.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 61011).get() > 4.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 26318).get() > 10.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 33776).get() > 2.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 50597).get() > 3.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 44578).get() > 1.5) +
                            static_cast<int>(UberState(static_cast<UberStateGroup>(14019), 26394).get() > 1.5);
                    } })
            );

            dev::print_time(start_time, "Virtual states initialized");

            dev::print_time(start_time, "Uber states initialized");
        }
    } // namespace
} // namespace randomizer
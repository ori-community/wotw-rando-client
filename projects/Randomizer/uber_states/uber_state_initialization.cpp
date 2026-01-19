#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_virtual.h>
#include <Core/dev/timing.h>
#include <Core/enums/uber_state.h>
#include <Core/input/mouse.h>
#include <Core/settings.h>
#include <Modloader/app/methods/Moon/UberStateCollection.h>
#include <Modloader/app/types/BooleanUberState.h>
#include <Modloader/app/types/ByteUberState.h>
#include <Modloader/app/types/FloatUberState.h>
#include <Modloader/app/types/IntUberState.h>
#include <Modloader/app/types/SerializedBooleanUberState.h>
#include <Modloader/app/types/SerializedByteUberState.h>
#include <Modloader/app/types/SerializedFloatUberState.h>
#include <Modloader/app/types/SerializedIntUberState.h>
#include <Modloader/app/types/UberID.h>
#include <Modloader/app/types/UberStateGroup.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/constants.h>
#include <Randomizer/features/area_segment_states.h>
#include <Randomizer/features/door_randomizer.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/uber_states/uber_state_initialization.h>
#include <chrono>

#include "random_value_generator.h"

using namespace modloader;
using namespace app::classes;
using namespace core::api::uber_states;

#define STATIC_PROPERTY(type, name, default_value)                                                                                                             \
    core::Property<type>& name() {                                                                                                                             \
        static core::Property<type> state(default_value);                                                                                                      \
        return state;                                                                                                                                          \
    }

namespace randomizer {
    namespace uber_states::readonly {
        STATIC_PROPERTY(int, player_current_map_area, static_cast<int>(GameArea::TOTAL))
        STATIC_PROPERTY(bool, player_is_teleporting, false)
    } // namespace uber_states::readonly

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

        template<typename T>
        Il2CppClass* get_klass();

        template<>
        Il2CppClass* get_klass<app::SerializedBooleanUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedBooleanUberState::get_class());
        }

        template<>
        Il2CppClass* get_klass<app::SerializedByteUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedByteUberState::get_class());
        }

        template<>
        Il2CppClass* get_klass<app::SerializedIntUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedIntUberState::get_class());
        }

        template<>
        Il2CppClass* get_klass<app::SerializedFloatUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedFloatUberState::get_class());
        }

        template<>
        Il2CppClass* get_klass<app::BooleanUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::BooleanUberState::get_class());
        }

        template<>
        Il2CppClass* get_klass<app::ByteUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::ByteUberState::get_class());
        }

        template<>
        Il2CppClass* get_klass<app::IntUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::IntUberState::get_class());
        }

        template<>
        Il2CppClass* get_klass<app::FloatUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::FloatUberState::get_class());
        }

        template<typename T, typename V>
        app::IUberState* add_state(UberStateGroup group, const std::string& state_name, int state_id, V default_value, bool read_only = false) {
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
            il2cpp::invoke(state->fields.Group, "set_name", il2cpp::string_new(custom_uber_state_group_name(group).value_or("unknown")));

            state->fields._.m_id = create_uber_id_ptr(state_id);
            il2cpp::invoke(state, "set_name", il2cpp::string_new(state_name));

            state->fields.DefaultValue = default_value;
            state->fields.m_value = default_value;
            state->fields.NamedValues = nullptr;
            state->fields._VolitileGenericOverrideValue_k__BackingField.has_value = false;

            return reinterpret_cast<app::IUberState*>(state);
        }

        IL2CPP_INTERCEPT(void, Moon::UberStateCollection, PrepareRuntimeDataType, app::UberStateCollection * this_ptr) {
            auto start_time = std::chrono::high_resolution_clock::now();

            // clang-format off
            std::vector<app::IUberState*> states = {
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "sword", static_cast<int>(app::AbilityType__Enum::Sword), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "doubleJump", static_cast<int>(app::AbilityType__Enum::DoubleJump), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "regenerate", static_cast<int>(app::AbilityType__Enum::MeditateSpell), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "bow", static_cast<int>(app::AbilityType__Enum::Bow), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "dash", static_cast<int>(app::AbilityType__Enum::DashNew), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "bash", static_cast<int>(app::AbilityType__Enum::Bash), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "grapple", static_cast<int>(app::AbilityType__Enum::SpiritLeash), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "waterDash", static_cast<int>(app::AbilityType__Enum::WaterDash), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "flash", static_cast<int>(app::AbilityType__Enum::GlowSpell), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "grenade", static_cast<int>(app::AbilityType__Enum::Grenade), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "burrow", static_cast<int>(app::AbilityType__Enum::Digging), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "launch", static_cast<int>(app::AbilityType__Enum::ChargeJump), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "gladesAncestralLight", static_cast<int>(app::AbilityType__Enum::DamageUpgradeA), false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Tree, "marshAncestralLight", static_cast<int>(app::AbilityType__Enum::DamageUpgradeB), false),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "waterBreath", 23, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "spear", 74, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "hammer", 98, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "fastTravel", 105, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "shuriken", 106, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "blaze", 115, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "sentry", 116, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "explodingSpear", 1074, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "hammerShockwave", 1098, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "staticShuriken", 1106, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "chargeBlaze", 1115, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::OpherShop, "rapidSentry", 1116, false),

                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "waterBreathCost", 10023, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "spearCost", 10074, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "hammerCost", 10098, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "fastTravelCost", 10105, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "shurikenCost", 10106, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "blazeCost", 10115, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "sentryCost", 10116, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "explodingSpearCost", 11074, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "hammerShockwaveCost", 11098, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "staticShurikenCost", 11106, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "chargeBlazeCost", 11115, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::OpherShop, "rapidSentryCost", 11116, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShop, "energy", 26, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShop, "vitality", 22, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShop, "overcharge", 1, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShop, "wingclip", 3, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShop, "tripleJump", 2, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShop, "finesse", 40, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShop, "swap", 5, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::TwillenShop, "lightHarvest", 19, false),

                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShop, "energyCost", 126, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShop, "vitalityCost", 122, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShop, "overchargeCost", 101, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShop, "wingclipCost", 103, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShop, "tripleJumpCost", 102, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShop, "finesseCost", 140, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShop, "swapCost", 105, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TwillenShop, "lightHarvestCost", 119, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "spiritWellBuilt", 16825, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "housesABuilt", 51230, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "housesBBuilt", 23607, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "housesCBuilt", 40448, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "removeThornsBuilt", 18751, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "openCaveBuilt", 16586, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "beautifyBuilt", 15068, false),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "repairTheSpiritWell", 16825, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "dwellingRepairs", 51230, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "roofsOverHeads", 23607, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "onwardsAndUpwards", 40448, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "thornySituation", 18751, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "clearTheCaveEntrance", 16586, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GromShop, "theGorlekTouch", 15068, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "repairTheSpiritWellCost", 16826, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "dwellingRepairsCost", 51231, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "roofsOverHeadsCost", 23608, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "onwardsAndUpwardsCost", 40449, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "thornySituationCost", 18752, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "clearTheCaveEntranceCost", 16587, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::GromShop, "theGorlekTouchCost", 15069, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "lightcatchersPlanted", 47651, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "selaFlowersPlanted", 16254, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "blueMoonPlanted", 33011, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "stickyGrassPlanted", 64583, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "springPlantsPlanted", 38393, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::GladesProjects, "lastTreePlanted", 40006, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "lightcatchers", 47651, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "selaFlowers", 16254, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "blueMoon", 33011, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "stickyGrass", 64583, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "springPlants", 38393, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "lastTree", 40006, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "lightcatchersCost", 47652, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "selaFlowersCost", 16255, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "blueMoonCost", 33012, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "stickyGrassCost", 64584, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "springPlantsCost", 38394, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "lastTreeCost", 40007, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "lightcatchersPlayCutscene", 47653, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "selaFlowersPlayCutscene", 16256, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "blueMoonPlayCutscene", 33013, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "stickyGrassPlayCutscene", 64585, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "springPlantsPlayCutscene", 38395, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::TuleyShop, "lastTreePlayCutscene", 40008, 0),

                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "hammerSpeedMultiplier", 0, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "swordSpeedMultiplier", 1, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "blazeCostMultiplier", 2, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "spearCostMultiplier", 3, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "shurikenCostMultiplier", 4, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "sentryCostMultiplier", 5, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "bowCostMultiplier", 6, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "regenerateCostMultiplier", 7, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "flashCostMultiplier", 8, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "grenadeCostMultiplier", 9, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "bowRapidFireIntervalDurationMultiplier", 10, 1),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "spearSpeedMultiplier", 11, 1),

                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "healthRegenerationPerMinute", 30, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "energyRegenerationPerMinute", 31, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "extraDoubleJumps", 35, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "extraDashes", 36, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "extraSentries", 37, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "extraShurikens", 38, 0),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "extraGrenades", 40, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "grenadesExplodeOnCollision", 41, true),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "unchargedGrenadesBashable", 42, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "chargedAirGrenades", 43, false),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "grenadeChargeDurationMultiplier", 44, 1.0f),
                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "grenadeMultishotCount", 45, 0),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "sentryShots", 46, 3),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "sentryFireRateSpeed", 47, 1.0),

                add_state<app::SerializedByteUberState>(UberStateGroup::RandoUpgrade, "shurikenMultishotCount", 48, 0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "shurikenMultishotSpread", 49, 35.f),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "bowAsFireSource", 70, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "blazeAsFireSource", 71, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "swordAsFireSource", 72, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "hammerAsFireSource", 73, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "spearAsFireSource", 74, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "shurikenAsFireSource", 75, false),

                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "launchSpeedMultiplier", 80, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "dashDistanceMultiplier", 81, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "bashSpeedMultiplier", 82, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "burrowSpeedMultiplier", 83, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "burrowDashSpeedMultiplier", 84, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "swimSpeedMultiplier", 85, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "waterDashSpeedMultiplier", 86, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "jumpHeightMultiplier", 87, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "wallJumpHeightMultiplier", 88, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "doubleJumpHeightMultiplier", 89, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "grappleSpeedMultiplier", 90, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "regenerateSpeedMultiplier", 91, 1.0),

                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "shurikenDamageMultiplier", 92, 1.0),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "flashDamageMultiplier", 93, 1.0),

                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "flashTickInterval", 94, 1.0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoUpgrade, "shurikenBashable", 95, false),
                add_state<app::SerializedFloatUberState>(UberStateGroup::RandoUpgrade, "flapDamage", 96, 0.0),

                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onTeleport", 20, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onJump", 30, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onDoubleJump", 31, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onDash", 32, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onBash", 33, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onGlide", 34, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onSword", 35, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onHammer", 36, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onSpear", 37, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onShuriken", 38, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onGrenade", 39, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onBow", 40, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onBlaze", 41, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onSentry", 42, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onFlash", 43, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onLaunch", 44, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onWallJump", 45, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onBurrow", 46, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onWaterDash", 47, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onFlap", 48, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onRegenerate", 49, false),
                // add_state<app::BooleanUberState>(UberStateGroup::RandoEvents, "onGrapple", 50, false),

                add_state<app::IntUberState>(UberStateGroup::Shrines, "gladesWave", 0, 0),
                add_state<app::IntUberState>(UberStateGroup::Shrines, "marshWave", 1, 0),
                add_state<app::IntUberState>(UberStateGroup::Shrines, "howlsDenWave", 2, 0),
                add_state<app::IntUberState>(UberStateGroup::Shrines, "depthsWave", 3, 0),
                add_state<app::IntUberState>(UberStateGroup::Shrines, "woodsWave", 4, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "keystonesCollected", 0, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "pickupsCollected", 2, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "spiritLightCollected", 3, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "spiritLightSpent", 4, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "oreCollected", 5, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "oreSpent", 6, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "kills", 10, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "swordKills", 11, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "hammerKills", 12, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "bowKills", 13, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "spearKills", 14, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "sentryKills", 15, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "blazeKills", 16, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "grenadeKills", 17, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "shurikenKills", 19, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "launchKills", 20, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "flashKills", 21, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "bashKills", 22, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "drownedEnemies", 23, 0),

                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "minerKills", 40, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "flierKills", 41, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "tentacleKills", 42, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "slimeKills", 43, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "fishKills", 44, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::RandoStats, "exploderKills", 45, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "shriekBarrier", 0, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "eastWoodsTrunkSlowWalkZoneEnabledState", 36, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "enableSpoilerFilter", 100, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "spawnTuley", 300, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "spawnOpherEverywhere", 301, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "spawnTwillenEverywhere", 302, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "rainLiftedInMarsh", 401, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "regenTreeDrained", 402, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "canOpenMokiFatherHut", 500, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "allowOpeningEyestoneDoor", 501, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "darkenTopLeftCornerOfMap", 600, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoState, "cleanWater", 2000, false),

                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "squares", 0, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "lines", 1, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::BingoState, "rank", 2, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "preventMapReactivateTps", 1, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "useAllowOpeningEyestoneDoorState", 6, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "preventPickup", PREVENT_PICKUP_ID, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "stompThroughPortals", STOMP_THROUGH_PORTALS_ID, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "stompIntoWater", STOMP_INTO_WATER_ID, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "goodHollow", GOOD_HOLLOW_ID, true),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "inLogicFilterEnabled", IN_LOGIC_FILTER_ENABLED_ID, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "fixMeetingKwolokUnderwaterTrigger", 13, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "fixTeleporterChainOutOfBounds", 14, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "fixKwolokBossEscapeUnderwaterSpiritLightSoftlock", 15, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "fixShopAnywhere", 16, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "patch2Kickback", 17, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "allowTeleportingUnderwater", 18, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "allowTeleportingDuringCombatShrineFights", 19, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "disableWillowHeartCutscenes", 20, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "allowTeleportingAtRuinsMapstone", 21, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "keepShriekHealthBarDuringEscape", 22, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "fixCatAndMouseSoftlock", 23, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "useSpawnTuleyRandoState", 30, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "useSpawnOpherEverywhereRandoState", 31, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "useSpawnTwillenEverywhereRandoState", 32, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "useCanOpenMokiFatherHutRandoState", 33, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "useRainLiftedInMarshRandoState", 34, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "useRegenTreeDrainedRandoState", 35, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "useEastWoodsTrunkSlowWalkZoneEnabledState", 36, false),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "removeShriekEscapeSand", 100, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "removeFeedingGroundsToElevatorSand", 101, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "knockKnockWellspring", 102, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "allowSpawningEnemiesNearby", 103, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "showSmallDoors", 200, false),

                add_state<app::SerializedIntUberState>(UberStateGroup::RandoConfig, "forceNoAirDecelerationFlag", FORCE_AIR_NO_DECELERATION_ID, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "baurSneezeWithBlaze", 420, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "baurSneezeWithFlash", 421, false),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "spiritWellPlayCutscene", 500, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "housesAPlayCutscene", 501, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "housesBPlayCutscene", 502, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "housesCPlayCutscene", 503, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "removeThornsPlayCutscene", 504, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "openCavePlayCutscene", 505, false),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandoConfig, "beautifyPlayCutscene", 506, false),

                add_state<app::SerializedIntUberState>(UberStateGroup::ItemTracker, "launchFragmentsCount", 1, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::ItemTracker, "launchFragmentsRequired", 2, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::ItemTracker, "totalRelicCount", 500, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::ItemTracker, "currentRelicCount", 501, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::ItemTracker, "currentTreeCount", 502, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::ItemTracker, "currentAreaHasUncollectedRelic", 505, false),

                add_state<app::SerializedByteUberState>(UberStateGroup::LupoShop, "hcMapIcons", 19396, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoShop, "hcMapIconsCost", 19397, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::LupoShop, "ecMapIcons", 57987, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoShop, "ecMapIconsCost", 57988, 0),
                add_state<app::SerializedByteUberState>(UberStateGroup::LupoShop, "shardMapIcons", 41666, 0),
                add_state<app::SerializedIntUberState>(UberStateGroup::LupoShop, "shardMapIconsCost", 41667, 0),

                add_state<app::SerializedBooleanUberState>(UberStateGroup::Player, "inputLocked", 1000, 0),

                // Dash has special handling, see burrow_and_waterdash_without_dash.cpp
                add_state<app::SerializedBooleanUberState>(UberStateGroup::Skills, "dash", static_cast<int>(app::AbilityType__Enum::DashNew), false),

                add_state<app::SerializedIntUberState>(UberStateGroup::RandomValueGenerator, "seed", 0, 0),
                add_state<app::SerializedBooleanUberState>(UberStateGroup::RandomValueGenerator, "useSeed", 1, false),
            };
            // clang-format on

            dev::print_time(start_time, "Built state list");

            // Custom states for userland variables
            constexpr int custom_integer_count = 100;
            constexpr int custom_boolean_count = 100;
            constexpr int custom_float_count = 100;

            for (int i = 0; i < custom_boolean_count; ++i) {
                states.push_back(add_state<app::SerializedBooleanUberState>(UberStateGroup::CustomBooleans, std::format("bool{:04d}", i), i, false));
            }

            for (int i = 0; i < custom_integer_count; ++i) {
                states.push_back(add_state<app::SerializedIntUberState>(UberStateGroup::CustomIntegers, std::format("int{:04d}", i), i, 0));
            }

            for (int i = 0; i < custom_float_count; ++i) {
                states.push_back(add_state<app::SerializedFloatUberState>(UberStateGroup::CustomFloats, std::format("float{:04d}", i), i, 0.f));
            }

            // Doors
            for (const auto& [door_name, door_id] : randomizer::doors::get_door_name_to_door_id_map()) {
                const auto default_door_info = randomizer::doors::get_default_door_info(door_name);

                const auto default_target_door_id = default_door_info.target_door_name.has_value()
                    ? randomizer::doors::get_door_id_from_door_name(*default_door_info.target_door_name)
                    : 0;

                states.push_back(add_state<app::SerializedIntUberState>(UberStateGroup::Doors, default_door_info.display_name, door_id, default_target_door_id));
                states.push_back(add_state<app::SerializedBooleanUberState>(UberStateGroup::KnownDoorConnections, default_door_info.display_name, door_id, true));
            }

            dev::print_time(start_time, "Built custom state list");

            for (int i = 0; i < 2000; ++i) {
                states.push_back(add_state<app::SerializedBooleanUberState>(UberStateGroup::Multiworld, std::format("state{}", i), i, false));
            }

            dev::print_time(start_time, "Built multi state list");

            for (auto* state: states) {
                il2cpp::invoke(this_ptr->fields.m_descriptors, "Add", state);
            }

            dev::print_time(start_time, "Added states");

            info("initialize", "Custom uber states initialized.");
            next::Moon::UberStateCollection::PrepareRuntimeDataType(this_ptr);

            using namespace core::api::game::player;
            register_virtual_uber_state_from_property(UberStateGroup::Player, 0, ValueType::Integer, "spiritLight", spirit_light(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(UberStateGroup::Player, 1, ValueType::Integer, "gorlekOre", ore(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(UberStateGroup::Player, 2, ValueType::Integer, "keystones", keystones(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(UberStateGroup::Player, 3, ValueType::Integer, "shardSlots", shard_slots(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(UberStateGroup::Player, 10, ValueType::Integer, "maxHealth", max_health(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(UberStateGroup::Player, 11, ValueType::Float, "health", health(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(UberStateGroup::Player, 12, ValueType::Float, "maxEnergy", max_energy(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state_from_property(UberStateGroup::Player, 13, ValueType::Float, "energy", energy(), VirtualUberState::ChangeDetectionMode::Poll);
            register_virtual_uber_state(UberStateGroup::Player, 50, ValueType::Integer, "currentMapArea", [] { return static_cast<int>(get_current_area()); }, std::nullopt, VirtualUberState::ChangeDetectionMode::ReactiveEffect);
            register_read_only_virtual_uber_state_from_property(UberStateGroup::Player, 51, ValueType::Integer, "currentMapArea", uber_states::readonly::player_current_map_area(), VirtualUberState::ChangeDetectionMode::ReactiveEffect);
            register_read_only_virtual_uber_state_from_property(UberStateGroup::Player, 100, ValueType::Boolean, "isTeleporting", uber_states::readonly::player_is_teleporting(), VirtualUberState::ChangeDetectionMode::ReactiveEffect);

            register_virtual_uber_state(
                UberStateGroup::Player,
                40,
                ValueType::Float,
                "positionX",
                []() -> double { return get_position().x; },
                [](const double x) {
                    const auto pos = get_position();
                    set_position(static_cast<float>(x), pos.y);
                    game_seed().environment().process_box_triggers();
                },
                VirtualUberState::ChangeDetectionMode::Poll
            );

            register_virtual_uber_state(
                UberStateGroup::Player,
                41,
                ValueType::Float,
                "positionY",
                []() -> double { return get_position().y; },
                [](const double y) {
                    const auto pos = get_position();
                    set_position(pos.x, static_cast<float>(y));
                    game_seed().environment().process_box_triggers();
                },
                VirtualUberState::ChangeDetectionMode::Poll
            );

            uber_states::random_value_generator::register_virtual_uber_states();

            register_virtual_uber_state(
                UberStateGroup::Settings,
                0,
                ValueType::Boolean,
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
                    UberStateGroup::Skills,
                    static_cast<int>(type),
                    ValueType::Boolean,
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
                    UberStateGroup::Shards,
                    static_cast<int>(type),
                    ValueType::Boolean,
                    name,
                    [type]() -> double { return shard(type).get(); },
                    [type](const double x) { shard(type).set(x > 0.5); },
                    VirtualUberState::ChangeDetectionMode::Poll
                );
            }

            register_virtual_uber_state(
                UberStateGroup::Input,
                1,
                ValueType::Float,
                "mouseWorldPositionX",
                []() -> double { return core::input::mouse::get_world_position().x; },
                std::nullopt,
                VirtualUberState::ChangeDetectionMode::Poll
            );

            register_virtual_uber_state(
                UberStateGroup::Input,
                2,
                ValueType::Float,
                "mouseWorldPositionY",
                []() -> double { return core::input::mouse::get_world_position().y; },
                std::nullopt,
                VirtualUberState::ChangeDetectionMode::Poll
            );

            area_segment_states::register_virtual_uber_states();
            dev::print_time(start_time, "Virtual states initialized");

            dev::print_time(start_time, "Uber states initialized");
        }
    } // namespace
} // namespace randomizer

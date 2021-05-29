#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/common.h>
#include <constants.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Common/ext.h>
#include <uber_states/uber_state_helper.h>

#include <csharp_bridge.h>

using namespace modloader;

namespace uber_states
{
    namespace
    {
        STATIC_IL2CPP_BINDING(Moon, UberStateCollection, app::IUberState*, GetState, (app::UberID* groupID, app::UberID* stateID));
        STATIC_IL2CPP_BINDING(Moon, UberStateCollection, void, Add, (app::UberID* groupID, app::UberStateCollectionGroup* group));

        NAMED_IL2CPP_BINDING(Moon, UberStateCollectionGroup, void, .ctor, ctor, (app::UberStateCollectionGroup* this_ptr));
        IL2CPP_BINDING(Moon, UberStateCollectionGroup, void, Add, (app::UberStateCollectionGroup* this_ptr, app::UberID* state_id, app::IUberState* state));

        STATIC_IL2CPP_BINDING_OVERLOAD(Moon, UberStateController, void, Apply, (app::IUberState* descriptor, int32_t context), (Moon:IUberState, Moon:UberStateApplyContext));

        IL2CPP_BINDING(Moon, SerializedIntUberState, int32_t, get_Value, (app::SerializedIntUberState* this_ptr));

        app::UberID* create_uber_id_ptr(int id)
        {
            auto uber_id = il2cpp::create_object<app::UberID>("Moon", "UberID");
            uber_id->fields.m_id = id;
            return uber_id;
        }

        template<typename T, typename V>
        app::IUberState* add_state(std::string klass, std::string group_name, int group_id, std::string state_name, int state_id, V default_value)
        {
            auto state = il2cpp::unity::create_scriptable_object<T>("Moon", klass);

            state->fields.Group = il2cpp::unity::create_scriptable_object<app::UberStateGroup>("Moon", "UberStateGroup");
            state->fields.Group->fields._.m_id = create_uber_id_ptr(group_id);
            il2cpp::invoke(state->fields.Group, "set_name", il2cpp::string_new(group_name.c_str()));

            state->fields._.m_id = create_uber_id_ptr(state_id);
            il2cpp::invoke(state, "set_name", il2cpp::string_new(state_name.c_str()));

            state->fields.DefaultValue = default_value;
            state->fields.m_value = default_value;
            state->fields.NamedValues = nullptr;
            state->fields._VolitileGenericOverrideValue_k__BackingField.has_value = false;
            return reinterpret_cast<app::IUberState*>(state);
        }

        bool initialized = false;
        NAMED_IL2CPP_INTERCEPT(Moon, UberStateCollection, void, .ctor, ctor, (app::UberStateCollection* this_ptr)) {
            UberStateCollection::ctor(this_ptr);
            initialized = false;
        }
        int multi_bool_count = 0;
        INJECT_C_DLLEXPORT void set_multi_bool_count(int count) {
            multi_bool_count = count;
        }

        IL2CPP_INTERCEPT(Moon, UberStateCollection, void, PrepareRuntimeDataType, (app::UberStateCollection* this_ptr)) {
            if (!initialized)
            {
                std::vector<app::IUberState*> states = {
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "sword", app::AbilityType__Enum_Sword, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "double_jump", app::AbilityType__Enum_DoubleJump, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "regenerate", app::AbilityType__Enum_MeditateSpell, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "bow", app::AbilityType__Enum_Bow, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "dash", app::AbilityType__Enum_DashNew, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "bash", app::AbilityType__Enum_Bash, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "grapple", app::AbilityType__Enum_SpiritLeash, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "water_dash", app::AbilityType__Enum_WaterDash, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "flash", app::AbilityType__Enum_GlowSpell, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "grenade", app::AbilityType__Enum_Grenade, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "burrow", app::AbilityType__Enum_Digging, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "launch", app::AbilityType__Enum_ChargeJump, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "ancestral_light", app::AbilityType__Enum_DamageUpgradeA, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "ancestral_light_2", app::AbilityType__Enum_DamageUpgradeB, false),

                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Water Breath", 23, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Spike", 74, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Spirit Smash", 98, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Fast Travel", 105, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Spirit Star", 106, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Blaze", 115, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Sentry", 116, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Exploding Spike", 1074, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Shock Smash", 1098, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Static Star", 1106, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Charge Blaze", 1115, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Rapid Sentry", 1116, false),

                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Water Breath cost", 10023, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Spike cost", 10074, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Spirit Smash cost", 10098, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Fast Travel cost", 10105, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Spirit Star cost", 10106, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Blaze cost", 10115, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Sentry cost", 10116, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Exploding Spike cost", 11074, 300),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Shock Smash cost", 11098, 300),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Static Star cost", 11106, 300),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Charge Blaze cost", 11115, 300),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Rapid Sentry cost", 11116, 300),

                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "Has bought everything", 20000, false),

                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Energy", 26, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Vitality", 22, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Overcharge", 1, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Wingclip", 3, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "TripleJump", 2, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Finesse", 40, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Swap", 5, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "LightHarvest", 19, false),

                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Energy cost", 126, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Vitality cost", 122, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Overcharge cost", 101, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Wingclip cost", 103, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "TripleJump cost", 102, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Finesse cost", 140, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Swap cost", 105, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "LightHarvest cost", 119, 0),

                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TWILLEN_SHARD_GROUP_NAME, constants::TWILLEN_SHARD_GROUP_ID, "Has bought everything", 20000, false),

                    add_state<app::SerializedFloatUberState>("SerializedFloatUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Rapid Smash", 0, 1),
                    add_state<app::SerializedFloatUberState>("SerializedFloatUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Rapid Sword", 1, 1),
                    add_state<app::SerializedFloatUberState>("SerializedFloatUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Blaze Efficiency", 2, 1),
                    add_state<app::SerializedFloatUberState>("SerializedFloatUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Spike Efficiency", 3, 1),
                    add_state<app::SerializedFloatUberState>("SerializedFloatUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Star Efficiency", 4, 1),
                    add_state<app::SerializedFloatUberState>("SerializedFloatUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Sentry Efficiency", 5, 1),
                    add_state<app::SerializedFloatUberState>("SerializedFloatUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Bow Efficiency", 6, 1),
                    add_state<app::SerializedFloatUberState>("SerializedFloatUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Regeneration Efficiency", 7, 1),
                    add_state<app::SerializedFloatUberState>("SerializedFloatUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Flash Efficiency", 8, 1),
                    add_state<app::SerializedFloatUberState>("SerializedFloatUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Light Burst Efficiency", 9, 1),

                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Health Regeneration", 30, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Energy Regeneration", 31, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Extra Double Jumps", 35, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Extra Dashes", 36, 0),

                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Relic", 20, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Marsh Relic", 100, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Hollow Relic", 101, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Glades Relic", 102, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Wellspring Relic", 103, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Burrows Relic", 104, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Woods Relic", 105, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Reach Relic", 106, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Pools Relic", 107, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Depths Relic", 108, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Wastes Relic", 109, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_UPGRADE_GROUP_NAME, constants::RANDO_UPGRADE_GROUP_ID, "Willow Relic", 111, 0),

                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::GAME_STATE_GROUP_NAME, constants::GAME_STATE_GROUP_ID, "Spawn", 0, false),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::GAME_STATE_GROUP_NAME, constants::GAME_STATE_GROUP_ID, "Reload", 1, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::GAME_STATE_GROUP_NAME, constants::GAME_STATE_GROUP_ID, "Binding One", 2, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::GAME_STATE_GROUP_NAME, constants::GAME_STATE_GROUP_ID, "Binding Two", 3, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::GAME_STATE_GROUP_NAME, constants::GAME_STATE_GROUP_ID, "Binding Three", 4, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::GAME_STATE_GROUP_NAME, constants::GAME_STATE_GROUP_ID, "Binding Four", 5, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::GAME_STATE_GROUP_NAME, constants::GAME_STATE_GROUP_ID, "Binding Five", 6, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::GAME_STATE_GROUP_NAME, constants::GAME_STATE_GROUP_ID, "Load", 7, 0),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::GAME_STATE_GROUP_NAME, constants::GAME_STATE_GROUP_ID, "Goal Modes Complete", 11, false),

                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Collected Keystones", 0, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Purchased Keystones", 1, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Pickups Collected", 2, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Spirit Light Collected", 3, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Spirit Light Spent", 4, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Ore Collected", 5, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Ore Spent", 6, 0),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Checkable Item Hint 1", 10, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Checkable Item Hint 2", 11, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Checkable Item Hint 3", 12, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Checkable Item Hint 4", 13, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Checkable Item Hint 5",  14, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Checkable Item Hint 6",  15, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Checkable Item Hint 7",  16, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Checkable Item Hint 8",  17, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Checkable Item Hint 9",  18, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Checkable Item Hint 10", 19, false),

                    // hate this, hope we don't end up needing more of these!
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "HollowTP", 106, false),

                    // skills
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Bash", 1000, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "WallJump", 1003, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "DoubleJump", 1005, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Launch", 1008, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Feather", 1014, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "WaterBreath", 1023, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "LightBurst", 1051, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Grapple", 1057, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Flash", 1062, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Spike", 1074, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Regenerate", 1077, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "SpiritArc", 1097, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "SpiritSmash", 1098, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Torch", 1099, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "SpiritEdge", 1100, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Burrow", 1101, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Dash", 1102, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "WaterDash", 1104, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "SpiritStar", 1106, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Seir", 1108, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Blaze", 1115, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Sentry", 1116, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Flap", 1118, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "DamageUpgrade1", 1120, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "DamageUpgrade2", 1121, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Clean Water", 2000, false),
                    // deep skills
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Spirit Flame", 1015, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Resilience", 1031, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Health Efficiency", 1032, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Energy Efficiency", 1039, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Bow Charge", 1109, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Spirit Magnet", 1112, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Weapon Charge", 1119, false),

                    // LOOK IT'S FINE
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Marsh Key Item Hint", 10000, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Hollow Key Item Hint", 10001, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Glades Key Item Hint", 10002, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Wellspring Key Item Hint", 10003, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Burrows Key Item Hint", 10004, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Woods Key Item Hint", 10005, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Reach Key Item Hint", 10006, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Pools Key Item Hint", 10007, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Depths Key Item Hint", 10008, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Wastes Key Item Hint", 10009, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::RANDO_STATE_GROUP_NAME, constants::RANDO_STATE_GROUP_ID, "Willow Key Item Hint", 10011, 0),

                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "Squares", 0, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "Lines", 1, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "Rank", 2, 0),
                    
                    // murder tracking
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "Kills", 10, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "SwordKills", 11, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "HammerKills", 12, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "BowKills", 13, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "SpearKills", 14, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "SentryKills", 15, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "BlazeKills", 16, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "GrenadeKills", 17, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "BurnDoTKills", 18, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "ShurikenKills", 19, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "LaunchKills", 20, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "FlashKills", 21, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "BashKills", 22, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "DrownedEnemies", 23, 0),


                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "MinerKills", 40, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "FlierKills", 41, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "TentaKills", 42, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "SlimeKills", 43, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "FishKills", 44, 0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::BINGO_STATE_GROUP_NAME, constants::BINGO_STATE_GROUP_ID, "ExploderKills", 45, 0),

                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_CONFIG_GROUP_NAME, constants::RANDO_CONFIG_GROUP_ID, "glades_tp_fix", 0, true),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_CONFIG_GROUP_NAME, constants::RANDO_CONFIG_GROUP_ID, "prevent_map_reactivate_tps", 1, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_CONFIG_GROUP_NAME, constants::RANDO_CONFIG_GROUP_ID, "marsh_starts_sunny", 2, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_CONFIG_GROUP_NAME, constants::RANDO_CONFIG_GROUP_ID, "howl_starts_dead", 3, false),

                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::MAP_FILTER_GROUP_NAME, constants::MAP_FILTER_GROUP_ID, "show_spoiler", 70, false),

                    add_state<app::SerializedIntUberState>("SerializedIntUberState", "npcsStateGroup", 48248, "HCMapIconCost", 19397,  0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", "npcsStateGroup", 48248, "ECMapIconCost", 57988,  0),
                    add_state<app::SerializedIntUberState>("SerializedIntUberState", "npcsStateGroup", 48248, "ShardMapIconCost", 41667,  0),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", "npcsStateGroup", 48248, "Has bought everything", 20000, false),
                };

                int i = 0;
                for (; i < 100; ++i)
                    states.push_back(add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::PLANDO_VARS_GROUP_NAME,
                        constants::PLANDO_VARS_GROUP_ID, format("%3d_int", i), i, 0));
                for (; i < 150; ++i)
                    states.push_back(add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::PLANDO_VARS_GROUP_NAME,
                        constants::PLANDO_VARS_GROUP_ID, format("%3d_bool", i), i, false));

                for (i = 0; i < constants::APPLIERS_GROUP_COUNT; ++i)
                {
                    states.push_back(add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::APPLIERS_GROUP_NAME,
                        constants::APPLIERS_GROUP_ID, format("%3d_id", i * 2), i * 2, 0));

                    states.push_back(add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::APPLIERS_GROUP_NAME,
                        constants::APPLIERS_GROUP_ID, format("%3d_value", i * 2 + 1), i * 2 + 1, 0));
                }
                for (i = 0; i < 100; ++i) {
                    states.push_back(add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::MULTI_VARS_GROUP_NAME,
                        constants::MULTI_VARS_GROUP_ID, format("%3d_multi", i), i, 0));
                }

                for (auto* state : states)
                    il2cpp::invoke(this_ptr->fields.m_descriptors, "Add", state);
                
                initialized = true;
            }

            UberStateCollection::PrepareRuntimeDataType(this_ptr);
            trace(MessageType::Info, 5, "initialize", "Custom uber states initialized.");
        }

        void notify_uber_state_change(app::IUberState* uber_state, double prev, double current)
        {
            if (prev == current) return; // :upside_clown:
            auto uprev = static_cast<int>(prev);
            auto ucurr = static_cast<int>(current);
            const auto state = get_uber_state_id(uber_state);
            const auto group = get_uber_state_group_id(uber_state);
            if (group->fields.m_id == 12) {
                int delta = uprev ^ ucurr;
                int real_state = static_cast<int>(log2(delta)) + 31 * state->fields.m_id;
                if (ucurr > uprev)
                    csharp_bridge::on_uber_state_applied(12, real_state, 3, 0.0, 1.0);
                else
                    csharp_bridge::on_uber_state_applied(12, real_state, 3, 1.0, 0.0);
                return;
            }
            auto type = resolve_type(uber_state);
            csharp_bridge::on_uber_state_applied(group->fields.m_id, state->fields.m_id, static_cast<uint8_t>(type), prev, current);
        }

        IL2CPP_INTERCEPT(Moon, SerializedBooleanUberState, void, set_Value, (app::SerializedBooleanUberState* this_ptr, bool value)) {
            const auto cast_ptr = reinterpret_cast<app::IUberState*>(this_ptr);
            const auto prev = get_uber_state_value(cast_ptr);
            set_Value(this_ptr, value);
            const auto current = get_uber_state_value(cast_ptr);
            notify_uber_state_change(cast_ptr, prev, current);
        }

        IL2CPP_INTERCEPT(Moon, SerializedByteUberState, void, set_Value, (app::SerializedByteUberState* this_ptr, uint8_t value)) {
            const auto cast_ptr = reinterpret_cast<app::IUberState*>(this_ptr);
            const auto prev = get_uber_state_value(cast_ptr);
            set_Value(this_ptr, value);
            const auto current = get_uber_state_value(cast_ptr);
            notify_uber_state_change(cast_ptr, prev, current);
        }

        IL2CPP_INTERCEPT(Moon, SerializedFloatUberState, void, set_Value, (app::SerializedFloatUberState* this_ptr, float value)) {
            const auto cast_ptr = reinterpret_cast<app::IUberState*>(this_ptr);
            const auto prev = get_uber_state_value(cast_ptr);
            set_Value(this_ptr, value);
            const auto current = get_uber_state_value(cast_ptr);
            notify_uber_state_change(cast_ptr, prev, current);
        }

        IL2CPP_INTERCEPT(Moon, SerializedIntUberState, void, set_Value, (app::SerializedIntUberState* this_ptr, int value)) {
            const auto cast_ptr = reinterpret_cast<app::IUberState*>(this_ptr);
            const auto prev = get_uber_state_value(cast_ptr);
            set_Value(this_ptr, value);
            const auto current = get_uber_state_value(cast_ptr);
            notify_uber_state_change(cast_ptr, prev, current);
        }

        double convert_pedestal_state(app::SavePedestalUberState_PedestalState* state)
        {
            if (state == nullptr)
                return 0.0;

            const auto active = static_cast<int>(state->fields.IsTeleporterActive != 0);
            const auto save = static_cast<int>(state->fields.HasGameBeenSaved != 0) << 1;
            return static_cast<double>(save | active);
        }

        IL2CPP_BINDING(Moon.uberSerializationWisp, SavePedestalUberState, app::SavePedestalUberState_PedestalState*, ReadStateFromStore, (app::SavePedestalUberState* this_ptr));

        IL2CPP_INTERCEPT(Moon.uberSerializationWisp, SavePedestalUberState, void, set_HasGameBeenSaved, (app::SavePedestalUberState* this_ptr, bool value)) {
            const auto prev = convert_pedestal_state(ReadStateFromStore(this_ptr));
            set_HasGameBeenSaved(this_ptr, value);
            const auto current = convert_pedestal_state(ReadStateFromStore(this_ptr));
            notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        IL2CPP_INTERCEPT(Moon.uberSerializationWisp, SavePedestalUberState, void, set_IsTeleporterActive, (app::SavePedestalUberState* this_ptr, bool value)) {
            const auto prev = convert_pedestal_state(ReadStateFromStore(this_ptr));
            set_IsTeleporterActive(this_ptr, value);
            const auto current = convert_pedestal_state(ReadStateFromStore(this_ptr));
            notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }
        
        IL2CPP_INTERCEPT(Moon.UberStateVisualization, SerializedBoolUberStateWrapper, void, SetValue, (app::SerializedBoolUberStateWrapper* this_ptr, bool value)) {
            const auto cast_ptr = reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state);
            const auto prev = get_uber_state_value(cast_ptr);
            SetValue(this_ptr, value);
            const auto current = get_uber_state_value(cast_ptr);
            notify_uber_state_change(cast_ptr, prev, current);
        }

        IL2CPP_INTERCEPT(Moon.UberStateVisualization, SerializedByteUberStateWrapper, void, SetValue, (app::SerializedByteUberStateWrapper* this_ptr, uint8_t value)) {
            const auto cast_ptr = reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state);
            const auto prev = get_uber_state_value(cast_ptr);
            SetValue(this_ptr, value);
            const auto current = get_uber_state_value(cast_ptr);
            notify_uber_state_change(cast_ptr, prev, current);
        }

        IL2CPP_INTERCEPT(Moon.UberStateVisualization, SerializedFloatUberStateWrapper, void, SetValue, (app::SerializedFloatUberStateWrapper* this_ptr, float value)) {
            const auto cast_ptr = reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state);
            const auto prev = get_uber_state_value(cast_ptr);
            SetValue(this_ptr, value);
            const auto current = get_uber_state_value(cast_ptr);
            notify_uber_state_change(cast_ptr, prev, current);
        }

        IL2CPP_INTERCEPT(Moon.UberStateVisualization, SerializedIntUberStateWrapper, void, SetValue, (app::SerializedIntUberStateWrapper* this_ptr, int value)) {
            const auto cast_ptr = reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state);
            const auto prev = get_uber_state_value(cast_ptr);
            SetValue(this_ptr, value);
            const auto current = get_uber_state_value(cast_ptr);
            notify_uber_state_change(cast_ptr, prev, current);
        }
    }

    void apply_uber_state_no_notify(app::IUberState* uber_state)
    {
        UberStateController::Apply(uber_state, 0);
        //il2cpp::invoke(il2cpp::get_class<app::UberStateController__Class>("Moon", "UberStateController")
        //    ->static_fields->s_instance, "Apply", uber_state, 0);
    }

    app::UberID* get_uber_state_id(app::IUberState* uber_state) {
        return il2cpp::invoke<app::UberID>(uber_state, "get_StateID");
    }

    app::UberID* get_uber_state_group_id(app::IUberState* uber_state) {
        return il2cpp::invoke<app::UberID>(uber_state, "get_GroupID");
    }
    
    std::string get_uber_state_name(app::IUberState* uber_state) {
        auto csstring = il2cpp::invoke<app::String>(uber_state, "get_Name");
        return il2cpp::convert_csstring(csstring);
    }

    std::string get_uber_state_group_name(app::IUberState* uber_state) {
        auto group = il2cpp::invoke<app::IUberStateGroup>(uber_state, "get_UberStateGroup");
        auto csstring = il2cpp::invoke<app::String>(group, "get_GroupName");
        return il2cpp::convert_csstring(csstring);
    }

    std::string tostring(app::IUberState* uber_state) {
      auto str = new std::string(format("%d|%d // %s.%s = %f",
        get_uber_state_group_id(uber_state)->fields.m_id, 
        get_uber_state_id(uber_state)->fields.m_id,
        get_uber_state_group_name(uber_state),
        get_uber_state_name(uber_state),
        get_uber_state_value(uber_state)));
      return *str;
    }

    app::UberID create_uber_id(int id)
    {
        app::UberID uber_id;
        uber_id.monitor = nullptr;
        uber_id.klass = reinterpret_cast<app::UberID__Class*>(il2cpp::get_class("Moon", "UberID"));
        uber_id.fields.m_id = id;
        return uber_id;
    }

    app::IUberState* get_uber_state_untyped(app::UberID& group_id, app::UberID& state_id)
    {
        auto state = UberStateCollection::GetState(&group_id, &state_id);
        if (state == nullptr)
            trace(MessageType::Error, 3, "uber_state", format("unable to find uber_state %d : %d.", group_id.fields.m_id, state_id.fields.m_id));

        return state;
    }

    constexpr bool check_set = false;
    void set_uber_state_value(app::IUberState* uber_state, double value)
    {
        if (il2cpp::is_assignable(uber_state, "Moon", "SerializedIntUberState"))
            SerializedIntUberState::set_Value_intercept(reinterpret_cast<app::SerializedIntUberState*>(uber_state), value);
        else if (il2cpp::is_assignable(uber_state, "Moon", "IGenericUberState"))
        {
            float cast_value = static_cast<float>(value);
            il2cpp::invoke_virtual(uber_state, il2cpp::get_class("Moon", "IGenericUberState"), "set_GenericValue", &cast_value);
        }
        else if (il2cpp::is_assignable(uber_state, "Moon.uberSerializationWisp", "SavePedestalUberState"))
        {
            auto ivalue = static_cast<uint8_t>(value);
            bool is_teleporter_active = static_cast<bool>(ivalue & 1);
            bool has_been_saved = static_cast<bool>((ivalue >> 1) & 1);
            il2cpp::invoke<>(uber_state, "set_IsTeleporterActive", &is_teleporter_active);
            il2cpp::invoke<>(uber_state, "set_HasGameBeenSaved", &has_been_saved);
        }
        else
        {
            auto state_id = il2cpp::invoke<app::UberID>(uber_state, "get_StateID")->fields.m_id;
            auto group_id = il2cpp::invoke<app::UberID>(uber_state, "get_GroupID")->fields.m_id;
            trace(MessageType::Warning, 2, "uber_state",
                format("uber state (%d, %d) does not implement IGenericUberState", state_id, group_id));
        }
    }

    double get_uber_state_value(app::IUberState* uber_state)
    {
        if (il2cpp::is_assignable(uber_state, "Moon", "SerializedIntUberState"))
            return static_cast<double>(SerializedIntUberState::get_Value(reinterpret_cast<app::SerializedIntUberState*>(uber_state)));
        else if (il2cpp::is_assignable(uber_state, "Moon", "IGenericUberState"))
            return static_cast<double>(il2cpp::invoke_virtual<app::Single__Boxed>(
                uber_state, il2cpp::get_class("Moon", "IGenericUberState"), "get_GenericValue")->fields);
        else if (il2cpp::is_assignable(uber_state, "Moon.uberSerializationWisp", "SavePedestalUberState"))
        {
            auto is_teleporter_active = static_cast<int>(il2cpp::invoke<app::Boolean__Boxed>(uber_state, "get_IsTeleporterActive")->fields);
            auto has_been_saved = static_cast<int>(il2cpp::invoke<app::Boolean__Boxed>(uber_state, "get_HasGameBeenSaved")->fields);
            uint32_t value = is_teleporter_active | (has_been_saved << 1);
            return static_cast<double>(value);
        } else {
            auto state_id = il2cpp::invoke<app::UberID>(uber_state, "get_StateID");
            auto group_id = il2cpp::invoke<app::UberID>(uber_state, "get_GroupID");
            if(state_id != nullptr && group_id != nullptr)
                trace(MessageType::Warning, 2, "uber_state",
                    format("uber state (%d, %d) does not implement IGenericUberState", group_id->fields.m_id, state_id->fields.m_id));
            else
                trace(MessageType::Warning, 2, "uber_state",
                    format("unknown uber state at %d does not implement IGenericUberState ", uber_state));

            return 0.0;
        }
    }


    INJECT_C_DLLEXPORT void set_uber_state_value(int group, int state, double value)
    {
        auto group_id = create_uber_id(group);
        auto state_id = create_uber_id((group == 12) ? state / 31 : state);
        auto uber_state = get_uber_state(group_id, state_id);
        if (uber_state != nullptr)
            if (group == 12) {
                int curr = static_cast<int>(get_uber_state_value(uber_state));
                int8_t offset = state % 31;
                if (value > 0.1f)
                    curr |= 1 << offset; // or if it's true
                else
                    curr &= ~(1 << offset); // invert bit then and it
                set_uber_state_value(uber_state, static_cast<double>(curr));
            } else 
                set_uber_state_value(uber_state, value);
        else
            trace(MessageType::Warning, 2, "uber_state", format("uber state (%d, %d) not found", group, state));
    }

    INJECT_C_DLLEXPORT double get_uber_state_value(int group, int state)
    {
        auto group_id = create_uber_id(group);
        auto state_id = create_uber_id(state);
        auto uber_state = get_uber_state(group_id, state_id);
        if (uber_state != nullptr) {
            if (group == 12) {
                int raw = static_cast<int>(get_uber_state_value(uber_state));
                return (raw >> (state % 31)) % 2 ? 1.0 : 0.0;
            }
            return get_uber_state_value(uber_state);
        }
        else
        {
            trace(MessageType::Warning, 2, "uber_state", format("uber state (%d, %d) not found", group, state));
            return 0.0;
        }
    }

    INJECT_C_DLLEXPORT int get_uber_state_name(int group, int state, char* buffer, int len)
    {
        auto group_id = create_uber_id(group);
        auto state_id = create_uber_id(state);
        auto uber_state = get_uber_state(group_id, state_id);
        auto str = get_uber_state_name(uber_state);
        strcpy_s(buffer, len, str.c_str());
        return str.size();
    }

    INJECT_C_DLLEXPORT int get_uber_state_group_name(int group, int state, char* buffer, int len)
    {
        auto group_id = create_uber_id(group);
        auto state_id = create_uber_id(state);
        auto uber_state = get_uber_state(group_id, state_id);
        auto str = get_uber_state_group_name(uber_state);
        strcpy_s(buffer, len, str.c_str());
        return str.size();
    }

    INJECT_C_DLLEXPORT void refresh_uber_state(int group_id, int id) {
      auto uber_state = uber_states::get_uber_state(group_id, id);
      uber_states::apply_uber_state_no_notify(uber_state);
    }
}

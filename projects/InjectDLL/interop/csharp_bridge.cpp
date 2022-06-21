#include <interop/csharp_bridge.h>

#include <game/game.h>
#include <game/pickups/pickups.h>
#include <uber_states/uber_state_interface.h>
#include <macros.h>

#include <Common/ext.h>

#include <Il2CppModLoader/app/methods/SaveSlotsManager.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

#include <variant>

#define DELEGATE_ENTRY(name)                       \
    {                                              \
#name, reinterpret_cast < void**>(&(name)) \
    }

using namespace modloader;
using namespace app::methods;

namespace csharp_bridge {
    signatures::f_void_float update = nullptr;
    signatures::f_void_at on_tree = nullptr;
    signatures::f_void on_checkpoint = nullptr;
    signatures::f_void on_goal_mode_fail = nullptr;
    signatures::f_bool_str check_ini = nullptr;

    signatures::f_bool is_multiplayer = nullptr;
    signatures::f_bool inject_log_enabled = nullptr;
    signatures::f_bool inject_debug_enabled = nullptr;
    signatures::f_bool tp_to_any_pickup = nullptr;
    signatures::f_bool invert_swim = nullptr;
    signatures::f_bool is_day_time = nullptr;
    signatures::f_bool does_howl_exist = nullptr;
    signatures::f_bool water_cleansed = nullptr;
    signatures::f_void_gwa on_map_pan = nullptr;
    signatures::f_void_string_dt on_enemy_death = nullptr;
    signatures::f_void_string_dt on_player_death = nullptr;
    signatures::f_void on_race_start = nullptr;
    signatures::f_void on_race_end = nullptr;
    signatures::f_void on_teleporting = nullptr;
    signatures::f_void_int_int_int_int_int_double_uc send_resource_request = nullptr;

    // Save system
    signatures::f_void_int new_game = nullptr;
    signatures::f_void_int_int on_load = nullptr;
    signatures::f_void_int_int on_save = nullptr;
    signatures::f_bool_at get_ability = nullptr;
    signatures::f_void_at_bool set_ability = nullptr;
    signatures::f_bool_at is_tree_activated = nullptr;

    // Shop system
    signatures::f_void_at opher_buy_weapon = nullptr;
    signatures::f_void_at opher_buy_upgrade = nullptr;
    signatures::f_bool_at opher_bought_weapon = nullptr;
    signatures::f_bool_at opher_bought_upgrade = nullptr;
    signatures::f_void_st twillen_buy_shard = nullptr;
    signatures::f_bool_st twillen_bought_shard = nullptr;
    signatures::f_void_st_int_int twillen_shard_upgraded = nullptr;
    signatures::f_int_st twillen_shard_cost = nullptr;
    signatures::f_int_int lupo_upgrade_cost = nullptr;
    signatures::f_void update_shop_data = nullptr;

    signatures::f_void_int_int_byte_double_double on_uber_state_applied = nullptr;
    signatures::f_void_a on_action_triggered = nullptr;

    signatures::f_void_int on_found_tp = nullptr;
    signatures::f_void_float_float on_map_tp_active = nullptr;
    signatures::f_bool_int_int_int filter_icon_show = nullptr;
    signatures::f_int_int_int_int filter_icon_type = nullptr;
    signatures::f_void_ptr_int_int_int_int_int filter_icon_text = nullptr;
    signatures::f_bool_int filter_enabled = nullptr;
    signatures::f_void_bool on_map_state = nullptr;

    signatures::f_void_float credits_progress = nullptr;
    signatures::f_void shutdown = nullptr;
    signatures::f_void post_initialize = nullptr;

    signatures::f_int get_flag_count = nullptr;
    signatures::f_void_int_ptr_int get_flag = nullptr;
    signatures::f_int_bool get_relic_count = nullptr;

    namespace {
        const std::unordered_map<std::string_view, void**> ptr_map{
            DELEGATE_ENTRY(update),
            DELEGATE_ENTRY(on_tree),
            DELEGATE_ENTRY(on_checkpoint),
            DELEGATE_ENTRY(on_goal_mode_fail),
            DELEGATE_ENTRY(check_ini),
            DELEGATE_ENTRY(inject_debug_enabled),
            DELEGATE_ENTRY(tp_to_any_pickup),
            DELEGATE_ENTRY(invert_swim),
            DELEGATE_ENTRY(new_game),
            DELEGATE_ENTRY(on_load),
            DELEGATE_ENTRY(on_save),
            DELEGATE_ENTRY(get_ability),
            DELEGATE_ENTRY(set_ability),
            DELEGATE_ENTRY(water_cleansed),
            DELEGATE_ENTRY(is_day_time),
            DELEGATE_ENTRY(does_howl_exist),
            DELEGATE_ENTRY(on_map_pan),
            DELEGATE_ENTRY(is_tree_activated),
            DELEGATE_ENTRY(opher_buy_weapon),
            DELEGATE_ENTRY(opher_buy_upgrade),
            DELEGATE_ENTRY(opher_bought_weapon),
            DELEGATE_ENTRY(opher_bought_upgrade),
            DELEGATE_ENTRY(twillen_buy_shard),
            DELEGATE_ENTRY(twillen_bought_shard),
            DELEGATE_ENTRY(twillen_shard_cost),
            DELEGATE_ENTRY(lupo_upgrade_cost),
            DELEGATE_ENTRY(on_uber_state_applied),
            DELEGATE_ENTRY(filter_icon_show),
            DELEGATE_ENTRY(filter_icon_type),
            DELEGATE_ENTRY(filter_icon_text),
            DELEGATE_ENTRY(filter_enabled),
            DELEGATE_ENTRY(update_shop_data),
            DELEGATE_ENTRY(on_map_tp_active),
            DELEGATE_ENTRY(on_map_state),
            DELEGATE_ENTRY(on_enemy_death),
            DELEGATE_ENTRY(on_player_death),
            DELEGATE_ENTRY(on_race_start),
            DELEGATE_ENTRY(on_race_end),
            DELEGATE_ENTRY(on_teleporting),
            DELEGATE_ENTRY(on_action_triggered),
            DELEGATE_ENTRY(twillen_shard_upgraded),
            DELEGATE_ENTRY(credits_progress),
            DELEGATE_ENTRY(shutdown),
            DELEGATE_ENTRY(post_initialize),
            DELEGATE_ENTRY(get_flag_count),
            DELEGATE_ENTRY(get_flag),
            DELEGATE_ENTRY(get_relic_count),
            DELEGATE_ENTRY(on_found_tp),
            DELEGATE_ENTRY(send_resource_request),
            DELEGATE_ENTRY(is_multiplayer),
        };

        //private static readonly HashSet<UberId> ResourceIds = new HashSet<UberId>{
        //  new UberId(15, 0), // Spirit Light
        //  new UberId(15, 1), // Gorlek Ore
        //  new UberId(15, 2), // Keystones
        //};

        struct ResourceRequest {
            using amount_callback = int(*)();

            uber_states::UberState resource;
            std::variant<int, amount_callback> amount;
            double target_value = 1;
            UpdateCondition condition = UpdateCondition::UpdateIfLarger;
        };

        std::unordered_map<uber_states::UberState, ResourceRequest> resource_dependencies = {
            { uber_states::UberState(28895, 49900), ResourceRequest{ uber_states::UberState(15, 2), 4 } },
            { uber_states::UberState(28895, 4290), ResourceRequest{ uber_states::UberState(15, 2), 4 } },
            { uber_states::UberState(21786, 42309), ResourceRequest{ uber_states::UberState(15, 2), 2 } },
            { uber_states::UberState(21786, 47445), ResourceRequest{ uber_states::UberState(15, 2), 2 } },
            { uber_states::UberState(5377, 47621), ResourceRequest{ uber_states::UberState(15, 2), 4 } },
            { uber_states::UberState(937, 64003), ResourceRequest{ uber_states::UberState(15, 2), 2 } },
            //{ uber_states::UberState(937, 1038), ResourceRequest{ uber_states::UberState(15, 2), 2 } },
            { uber_states::UberState(21786, 59990), ResourceRequest{ uber_states::UberState(15, 2), 2 } },
            { uber_states::UberState(18793, 10758), ResourceRequest{ uber_states::UberState(15, 2), 2 } },
            { uber_states::UberState(58674, 21500), ResourceRequest{ uber_states::UberState(15, 2), 2 } },
            { uber_states::UberState(18793, 41544), ResourceRequest{ uber_states::UberState(15, 2), 4 } },
            { uber_states::UberState(18793, 3171), ResourceRequest{ uber_states::UberState(15, 2), 4 } },
            { uber_states::UberState(20120, 28786), ResourceRequest{ uber_states::UberState(15, 2), 2 } },
        };

        bool should_intercept_resource_usage = false;
        bool resource_intercept(uber_states::UberState state, double value) {
            // TODO: Add interop to check if we are multiplayer or not.
            // If we are multiplayer, intercept for resource dependant uberstates.
            if (!should_intercept_resource_usage || !is_multiplayer())
                return false;

            auto it = resource_dependencies.find(state);
            if (it == resource_dependencies.end())
                return false;

            if (value != it->second.target_value)
                return false;

            // Send request.
            send_resource_request(
                static_cast<int>(state.group()),
                state.state(),
                std::holds_alternative<int>(it->second.amount)
                    ? std::get<int>(it->second.amount)
                    : std::get<ResourceRequest::amount_callback>(it->second.amount)(),
                static_cast<int>(it->second.resource.group()),
                it->second.resource.state(),
                it->second.target_value,
                it->second.condition
            );

            return true;
        }

        void on_checkpoint_handler(GameEvent game_event, EventTiming timing) {
            auto cp(game::pickups::scoped_not_collecting_pickup()); // fuck fuck fuck shit damn aaaaa
            csharp_bridge::on_checkpoint();
        }

        void on_save_handler(GameEvent game_event, EventTiming timing) {
            csharp_bridge::on_save(SaveSlotsManager::get_CurrentSlotIndex(), SaveSlotsManager::get_BackupIndex());
        }

        void on_load_handler(GameEvent game_event, EventTiming timing) {
            csharp_bridge::on_load(SaveSlotsManager::get_CurrentSlotIndex(), SaveSlotsManager::get_BackupIndex());
        }

        void on_area_map(GameEvent game_event, EventTiming timing) {
            csharp_bridge::on_map_state(timing == EventTiming::Start);
        }

        void on_fixed_update(GameEvent game_event, EventTiming timing) {
            try {
                update(game::fixed_delta_time());
            } catch (int error) {
                trace(MessageType::Info, 3, "csharp_bridge", format("got error code $d", error));
            }
        }

        void on_shutdown(GameEvent game_event, EventTiming timing) {
            if (shutdown != nullptr)
                shutdown();
        }

        void initialize() {
            uber_states::register_value_intercept(&resource_intercept);

            game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::End, &on_fixed_update);
            game::event_bus().register_handler(GameEvent::Shutdown, EventTiming::End, &on_shutdown);
            game::event_bus().register_handler(GameEvent::CreateBackup, EventTiming::Start, &on_save_handler);
            game::event_bus().register_handler(GameEvent::CreateSave, EventTiming::Start, &on_save_handler);
            game::event_bus().register_handler(GameEvent::CreateCheckpoint, EventTiming::Start, &on_checkpoint_handler);
            game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::End, &on_load_handler);
            game::event_bus().register_handler(GameEvent::FinishedLoadingCheckpoint, EventTiming::End, &on_load_handler);
            game::event_bus().register_handler(GameEvent::Respawn, EventTiming::End, &on_load_handler);
            game::event_bus().register_handler(GameEvent::AreaMap, EventTiming::Start, &on_area_map);
            game::event_bus().register_handler(GameEvent::AreaMap, EventTiming::End, &on_area_map);
            if (post_initialize != nullptr)
                post_initialize();
        }

        CALL_ON_INIT(initialize);
    } // namespace
} // namespace csharp_bridge

INJECT_C_DLLEXPORT void register_delegate(const char* name, uint64_t ptr) {
    using namespace csharp_bridge;
    using namespace signatures;

    auto it = ptr_map.find(name);
    if (it != ptr_map.end())
        *it->second = reinterpret_cast<void*>(ptr);
}

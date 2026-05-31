#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/core.h>
#include <Core/ipc/ipc.h>
#include <Modloader/modloader.h>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "Core/settings.h"

using namespace modloader;

namespace randomizer::ipc {
    using namespace app::classes;

    namespace {
        std::unordered_set<core::api::uber_states::UberState> subscribed_uber_states;

        void server_reconnect_current_multiverse(const nlohmann::json& j) {
            info("ipc", "Received server_reconnect_current_multiverse action request.");
            randomizer::server_reconnect_current_multiverse();
        }

        void reread_seed_source(const nlohmann::json& j) {
            info("ipc", "Received reread_seed_source action request.");
            randomizer::reread_seed_source();
        }

        void reload_settings(const nlohmann::json& j) {
            info("ipc", "Received reload_settings action request.");
            core::settings::reload();
        }

        void reload_controls(const nlohmann::json& j) {
            info("ipc", "Received reload_controls action request.");
            input::refresh_control_scheme();
        }

        void load_new_game_source(const nlohmann::json& j) {
            info("ipc", "Received load_new_game_source action request.");
            randomizer::load_new_game_source();

            message_queue().enqueue({
                .text = core::Property<std::string>(std::format("Start an empty save file to play")),
            }, true);
        }

        void subscribe_uber_states(const nlohmann::json& j) {
            randomizer::load_new_game_source();

            for (const auto& entry: j.at("payload")) {
                subscribed_uber_states.emplace(entry.at("group").get<int>(), entry.at("state").get<int>());
            }
        }

        void unsubscribe_uber_states(const nlohmann::json& j) {
            randomizer::load_new_game_source();

            for (const auto& entry: j.at("payload")) {
                subscribed_uber_states.erase(core::api::uber_states::UberState(entry.at("group").get<int>(), entry.at("state").get<int>()));
            }
        }

        void get_tags(const nlohmann::json& j) {
            nlohmann::json response;
            response["type"] = "response";
            response["id"] = j.at("id").get<int>();
            response["payload"] = game_seed().parser_output().meta.tags;
            core::ipc::send_message(response);
        }

        void get_uber_states(const nlohmann::json& j) {
            std::vector<float> values;
            for (auto entry : j.at("payload")) {
                auto group = entry.at("group").get<int>();
                auto state = entry.at("state").get<int>();
                values.push_back(core::api::uber_states::UberState(static_cast<UberStateGroup>(group), state).get<float>());
            }

            nlohmann::json response;
            response["type"] = "response";
            response["id"] = j.at("id").get<int>();
            response["payload"] = values;
            core::ipc::send_message(response);
        }

        void set_uber_state(const nlohmann::json& j) {
            auto p = j.at("payload");
            auto group = p.at("group").get<int>();
            auto state = p.at("state").get<int>();
            auto value = p.at("value").get<double>();
            core::api::uber_states::UberState(static_cast<UberStateGroup>(group), state).set(value);
        }

        void action(const nlohmann::json& j) {
            auto p = j.at("payload");
            auto id = p.at("action_id").get<Action>();
            auto pressed = p.at("pressed").get<bool>();
            input::set_action(id, pressed);
        }

        void set_velocity(const nlohmann::json& j) {
            auto p = j.at("payload");
            auto x = p.at("x").get<float>();
            auto y = p.at("y").get<float>();
            auto z = p.at("z").get<float>();
            auto sein = core::api::game::player::sein();
            if (sein != nullptr) {
                auto& speed = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
                speed.x = x;
                speed.y = y;
                speed.z = z;
            }
        }

        void get_velocity(const nlohmann::json& j) {
            app::Vector3 v{};
            nlohmann::json response;
            response["type"] = "response";
            response["id"] = j.at("id").get<int>();

            auto sein = core::api::game::player::sein();
            if (sein != nullptr) {
                v = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
            }

            response["payload"]["x"] = v.x;
            response["payload"]["y"] = v.y;
            response["payload"]["z"] = v.z;
            core::ipc::send_message(response);
        }

        void get_total_pickup_count(const nlohmann::json& j) {
            auto response = core::ipc::respond_to(j);
            response["payload"]["count"] = core::api::uber_states::UberState(UberStateGroup::RandoStats, 1).get<int>();
            core::ipc::send_message(response);
        }

        void get_pickup_count_by_area(const nlohmann::json& j) {
            auto response = core::ipc::respond_to(j);
            const auto area = j.at("area").get<GameArea>();
            response["payload"]["count"] = core::api::uber_states::UberState(UberStateGroup::RandoStats, 1100 + static_cast<int>(area)).get<int>();
            core::ipc::send_message(response);
        }

        void get_pickup_counts(const nlohmann::json& j) {
            auto response = core::ipc::respond_to(j);

            nlohmann::json areas;
            for (auto i = 0; i < static_cast<int>(GameArea::TOTAL); ++i) {
                auto area = static_cast<GameArea>(i);
                areas[std::to_string(static_cast<int>(area))] = core::api::uber_states::UberState(UberStateGroup::RandoStats, 1100 + static_cast<int>(area)).get<int>();
            }

            response["payload"]["total"] = core::api::uber_states::UberState(UberStateGroup::RandoStats, 1).get<int>();
            response["payload"]["areas"] = areas;
            core::ipc::send_message(response);
        }

        [[maybe_unused]]
        auto on_value_store_loaded = core::api::game::event_bus().register_handler(GameEvent::UberStateValueStoreLoaded, EventTiming::After, [](auto, auto) {
            core::ipc::send_message(core::ipc::make_request("notify_on_load"));
        });

        [[maybe_unused]]
        auto on_gained_focus = core::api::game::event_bus().register_handler(GameEvent::GainedFocus, EventTiming::After, [](auto, auto) {
            core::ipc::send_message(core::ipc::make_request("notify_on_gain_focus"));
        });

        [[maybe_unused]]
        auto on_lost_focus = core::api::game::event_bus().register_handler(GameEvent::LostFocus, EventTiming::After, [](auto, auto) {
            core::ipc::send_message(core::ipc::make_request("notify_on_lost_focus"));
        });

        [[maybe_unused]]
        auto on_shutdown = core::api::game::event_bus().register_handler(GameEvent::Shutdown, EventTiming::After, [](auto, auto) {
            core::ipc::send_message(core::ipc::make_request("notify_on_shutdown"));
        });

        [[maybe_unused]]
        auto on_uber_state_changed = core::api::uber_states::notification_bus().register_handler([](auto const& event) {
            if (!subscribed_uber_states.contains(event.state)) {
                return;
            }

            nlohmann::json request = core::ipc::make_request("notify_on_uber_state_changed");
            request["payload"]["group"] = static_cast<int>(event.state.group());
            request["payload"]["state"] = event.state.state();
            request["payload"]["previous_value"] = event.previous_value;
            request["payload"]["value"] = event.value;
            core::ipc::send_message(request);
        });

        [[maybe_unused]]
        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            core::ipc::register_request_handler("server_reconnect_current_multiverse", server_reconnect_current_multiverse);
            core::ipc::register_request_handler("reread_seed_source", reread_seed_source);
            core::ipc::register_request_handler("reload_settings", reload_settings);
            core::ipc::register_request_handler("reload_controls", reload_controls);
            core::ipc::register_request_handler("get_uber states", get_uber_states);
            core::ipc::register_request_handler("set_uber state", set_uber_state);
            core::ipc::register_request_handler("get_tags", get_tags);
            core::ipc::register_request_handler("action", action);
            core::ipc::register_request_handler("set_velocity", set_velocity);
            core::ipc::register_request_handler("get_velocity", get_velocity);
            core::ipc::register_request_handler("get_total_pickup_count", get_total_pickup_count);
            core::ipc::register_request_handler("get_pickup_count_by_area", get_pickup_count_by_area);
            core::ipc::register_request_handler("get_pickup_counts", get_pickup_counts);
            core::ipc::register_request_handler("load_new_game_source", load_new_game_source);
            core::ipc::register_request_handler("subscribe_uber_states", subscribe_uber_states);
            core::ipc::register_request_handler("unsubscribe_uber_states", unsubscribe_uber_states);
        });
    } // namespace

    auto on_seed_reloaded = event_bus().register_handler(RandomizerEvent::SeedLoaded, EventTiming::After, [](auto, auto) {
        nlohmann::json response;
        response["type"] = "request";
        response["method"] = "notify_on_reload";
        core::ipc::send_message(response);
    });

    void on_action(Action action, bool pressed) {
        nlohmann::json response;
        response["type"] = "request";
        response["method"] = "notify_input";
        response["payload"]["type"] = action;
        response["payload"]["pressed"] = pressed;
        core::ipc::send_message(response);
    }

    [[maybe_unused]]
    auto on_action_pressed = input::input_bus().register_handler(input::InputValue::Pressed, [](auto action, auto) {
        on_action(action, true);
    });

    [[maybe_unused]]
    auto on_action_released = input::input_bus().register_handler(input::InputValue::Released, [](auto action, auto) {
        on_action(action, false);
    });
} // namespace randomizer::ipc

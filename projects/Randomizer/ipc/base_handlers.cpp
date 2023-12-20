#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/ipc/base_handlers.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/messages/message_box.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/core.h>
#include <Core/ipc/ipc.h>
#include <Core/utils/json_serializers.h>

#include <Common/ext.h>

#include <Modloader/modloader.h>

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

using namespace modloader;

using namespace core::ipc;

namespace randomizer::ipc {
    namespace {
        void reload(const nlohmann::json& j) {
            info("ipc", "Received reload action request.");
            randomizer::reload();
        }

        void get_flags(const nlohmann::json& j) {
            nlohmann::json response;
            response["type"] = "response";
            response["id"] = j.at("id").get<int>();
            response["payload"] = game_seed().parser_output().meta.flags;
            send_message(response);
        }

        void get_uberstates(const nlohmann::json& j) {
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
            send_message(response);
        }

        void set_uberstate(const nlohmann::json& j) {
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
            send_message(response);
        }

        void message(const nlohmann::json& j) {
            auto& message_registry = core::message_registry();
            auto p = j.at("payload");
            auto message_id = 0;
            if (!p.contains("message_id")) {
                message_id = message_registry.reserve();
                auto& message = message_registry.get(message_id);
                message = std::make_shared<core::api::messages::MessageBox>();
                message->fade_in().set(p.value("fadein", 0.5f));
                message->fade_out().set(p.value("fadeout", 0.5f));
                message->show_box().set(p.value("should_show_box", false));
                // bool should_play_sound = p.value("should_play_sound", false);

                nlohmann::json response;
                response["type"] = "response";
                response["id"] = j.at("id").get<int>();
                response["message_id"] = message_id;
                send_message(response);
            } else {
                message_id = p.at("message_id").get<int>();
                if (p.contains("destroy") && p.at("destroy").get<bool>()) {
                    core::message_registry().remove(message_id);
                    return;
                }
            }

            const auto message_box = message_registry.get(message_id);
            if (p.contains("text")) {
                message_box->text().process_and_set(p.at("text").get<std::string>());
            }

            if (p.contains("position")) {
                auto pos = p.at("position");
                auto screen_position = p.value("screen_position", core::api::messages::ScreenPosition::MiddleCenter);
                app::Vector3 position = get_screen_position(screen_position);
                position.x += pos.at("x").get<float>();
                position.y += pos.at("y").get<float>();
                position.z += pos.at("z").get<float>();
                message_box->screen_position().set(screen_position);
                message_box->use_world_coordinates().set(pos.at("use_in_game_coordinates").get<bool>());
            }

            if (p.contains("color")) {
                auto color = p.at("color");
                message_box->color().set(app::Color{
                    color.at("r").get<float>() / 255.f,
                    color.at("g").get<float>() / 255.f,
                    color.at("b").get<float>() / 255.f,
                    color.at("a").get<float>() / 255.f,
                });
            }

            if (p.contains("alignment")) {
                message_box->alignment().set(p.at("text").get<app::AlignmentMode__Enum>());
            }

            if (p.contains("anchor")) {
                message_box->horizontal_anchor().set(p.value("horizontal", app::HorizontalAnchorMode__Enum::Center));
                message_box->vertical_anchor().set(p.value("vertical", app::VerticalAnchorMode__Enum::Middle));
            }

            if (p.contains("line_spacing")) {
                message_box->line_spacing().set(p.at("line_spacing").get<float>());
            }

            if (p.contains("visible")) {
                if (p.at("visible").get<bool>()) {
                    // TODO: Change to use sound and instant_fade here instead of on creation.
                    message_box->show();
                } else {
                    message_box->hide();
                }
            }
        }

        void get_total_pickup_count(const nlohmann::json& j) {
            auto response = core::ipc::respond_to(j);
            response["payload"]["count"] = game_seed().parser_output().meta.total_pickups;
            core::ipc::send_message(response);
        }

        void get_pickup_count_by_area(const nlohmann::json& j) {
            auto response = core::ipc::respond_to(j);
            const auto area = j.at("area").get<GameArea>();
            const auto& pickup_count_by_area = game_seed().parser_output().meta.pickup_count_by_area;
            auto it = pickup_count_by_area.find(area);
            const auto count = it != pickup_count_by_area.end() ? it->second : 0;
            response["payload"]["count"] = count;
            core::ipc::send_message(response);
        }

        void get_pickup_counts(const nlohmann::json& j) {
            auto response = core::ipc::respond_to(j);
            const auto& info = game_seed().parser_output();

            nlohmann::json areas;
            for (auto i = 0; i < static_cast<int>(GameArea::TOTAL); ++i) {
                auto area = static_cast<GameArea>(i);
                auto it = info.meta.pickup_count_by_area.find(area);
                if (it != info.meta.pickup_count_by_area.end()) {
                    areas[std::to_string(static_cast<int>(area))] = it->second;
                }
            }

            response["payload"]["total"] = info.meta.total_pickups;
            response["payload"]["areas"] = areas;
            core::ipc::send_message(response);
        }

        void report_load(GameEvent game_event, EventTiming timing) {
            send_message(core::ipc::make_request("notify_on_load"));
        }

        std::unordered_map<GameEvent, std::string> event_to_method{
            { GameEvent::GainedFocus, "notify_on_gain_focus" },
            { GameEvent::LostFocus, "notify_on_lost_focus" },
            { GameEvent::Shutdown, "notify_on_shutdown" },
        };

        void report_game_event(GameEvent game_event, EventTiming timing) {
            send_message(core::ipc::make_request(event_to_method.find(game_event)->second));
        }

        auto on_value_store_loaded = core::api::game::event_bus().register_handler(GameEvent::UberStateValueStoreLoaded, EventTiming::After, &report_load);
        auto on_gained_focus = core::api::game::event_bus().register_handler(GameEvent::GainedFocus, EventTiming::After, &report_game_event);
        auto on_lost_focus = core::api::game::event_bus().register_handler(GameEvent::LostFocus, EventTiming::After, &report_game_event);
        auto on_shutdown = core::api::game::event_bus().register_handler(GameEvent::Shutdown, EventTiming::After, &report_game_event);

        auto on_uber_state_changed = core::api::uber_states::notification_bus().register_handler([](auto const& event) {
            nlohmann::json request = core::ipc::make_request("notify_on_uber_state_changed");
            request["payload"]["group"] = static_cast<int>(event.state.group());
            request["payload"]["state"] = event.state.state();
            request["payload"]["previous_value"] = event.previous_value;
            request["payload"]["value"] = event.value;
            core::ipc::send_message(request);
        });

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            register_request_handler("reload", reload);
            register_request_handler("get_uberstates", get_uberstates);
            register_request_handler("set_uberstate", set_uberstate);
            register_request_handler("get_flags", get_flags);
            register_request_handler("action", action);
            register_request_handler("set_velocity", set_velocity);
            register_request_handler("get_velocity", get_velocity);
            register_request_handler("message", message);
            register_request_handler("get_total_pickup_count", get_total_pickup_count);
            register_request_handler("get_pickup_count_by_area", get_pickup_count_by_area);
            register_request_handler("get_pickup_counts", get_pickup_counts);
        });
    } // namespace

    auto on_seed_reloaded = event_bus().register_handler(RandomizerEvent::SeedLoaded, EventTiming::After, [](auto, auto) {
        nlohmann::json response;
        response["type"] = "request";
        response["method"] = "notify_on_reload";
        core::ipc::send_message(response);
    });

    auto on_uber_state_changed = core::api::uber_states::notification_bus().register_handler([](auto params) {
        nlohmann::json response;
        response["type"] = "request";
        response["method"] = "notify_on_uber_state_changed";
        response["payload"]["group"] = static_cast<int>(params.state.group());
        response["payload"]["state"] = params.state.state();
        response["payload"]["value"] = params.state.get();
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

    auto on_before_action = input::input_bus().register_handler(EventTiming::Before, [](auto action, auto) {
        on_action(action, true);
    });

    auto on_after_action = input::input_bus().register_handler(EventTiming::Before, [](auto action, auto) {
        on_action(action, false);
    });
} // namespace randomizer::ipc

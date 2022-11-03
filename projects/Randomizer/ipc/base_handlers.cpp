#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <interop/csharp_bridge.h>
#include <randomizer/input/rando_bindings.h>
#include <Randomizer/ipc/base_handlers.h>
#include <Core/ipc/ipc.h>
#include <Core/api/messages/messages.h>
#include <Core/uber_states/uber_state_interface.h>
#include <Core/utils/json_serializers.h>

#include <Common/ext.h>

#include <Modloader/common.h>

#include <nlohmann/json.hpp>
#include <memory>
#include <string>
#include <vector>

using namespace modloader;

namespace randomizer {
    namespace ipc {
        namespace {
            void reload(const nlohmann::json& j) {
                info("ipc", "Received reload action request.");
                csharp_bridge::on_action_triggered(Action::Reload);
            }

            void get_flags(const nlohmann::json& j) {
                std::vector<std::string> values;
                auto count = csharp_bridge::get_flag_count();
                constexpr int size = 256;
                wchar_t buffer[size];
                for (int i = 0; i < count; ++i) {
                    memset(buffer, 0, size);
                    csharp_bridge::get_flag(i, buffer, size - 1);
                    values.push_back(convert_wstring_to_string(buffer));
                }

                nlohmann::json response;
                response["type"] = "response";
                response["id"] = j.at("id").get<int>();
                response["payload"] = values;
                send_message(std::move(response));
            }

            void get_uberstates(const nlohmann::json& j) {
                std::vector<float> values;
                for (auto entry : j.at("payload")) {
                    auto group = entry.at("group").get<int>();
                    auto state = entry.at("state").get<int>();
                    values.push_back(uber_states::UberState(static_cast<UberStateGroup>(group), state).get());
                }

                nlohmann::json response;
                response["type"] = "response";
                response["id"] = j.at("id").get<int>();
                response["payload"] = values;
                send_message(std::move(response));
            }

            void set_uberstate(const nlohmann::json& j) {
                auto p = j.at("payload");
                auto group = p.at("group").get<int>();
                auto state = p.at("state").get<int>();
                auto value = p.at("value").get<double>();
                uber_states::UberState(static_cast<UberStateGroup>(group), state).set(value);
            }

            void action(const nlohmann::json& j) {
                auto p = j.at("payload");
                auto id = p.at("action_id").get<Action>();
                auto pressed = p.at("pressed").get<bool>();
                if (pressed)
                    set_action_pressed(id);
                else
                    set_action_released(id);
            }

            void set_velocity(const nlohmann::json& j) {
                auto p = j.at("payload");
                auto x = p.at("x").get<float>();
                auto y = p.at("y").get<float>();
                auto z = p.at("z").get<float>();
                auto sein = game::player::sein();
                if (sein != nullptr) {
                    auto& speed = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;
                    speed.x = x;
                    speed.y = y;
                    speed.z = z;
                }
            }

            void get_velocity(const nlohmann::json& j) {
                app::Vector3 v;
                nlohmann::json response;
                response["type"] = "response";
                response["id"] = j.at("id").get<int>();

                auto sein = game::player::sein();
                if (sein != nullptr)
                    v = sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed;

                response["payload"]["x"] = v.x;
                response["payload"]["y"] = v.y;
                response["payload"]["z"] = v.z;
                send_message(std::move(response));
            }

            void message(const nlohmann::json& j) {
                auto p = j.at("payload");
                auto message_id = 0;
                if (!p.contains("message_id")) {
                    auto message_id = reserve_id();
                    float fadein = p.value("fadein", 0.5f);
                    float fadeout = p.value("fadeout", 0.5f);
                    bool should_show_box = p.value("should_show_box", false);
                    bool should_play_sound = p.value("should_play_sound", false);

                    text_box_create(message_id, fadein, fadeout, should_show_box, should_play_sound);

                    nlohmann::json response;
                    response["type"] = "response";
                    response["id"] = j.at("id").get<int>();
                    response["message_id"] = message_id;
                    send_message(std::move(response));
                } else {
                    message_id = p.at("message_id").get<int>();
                    if (p.contains("destroy") && p.at("destroy").get<bool>()) {
                        text_box_destroy(message_id);
                        return;
                    }
                }

                if (p.contains("text"))
                    text_box_text(message_id, convert_string_to_wstring(p.at("text").get<std::string>()).c_str());
                if (p.contains("position")) {
                    auto pos = p.at("position");
                    auto screen_position = p.value("screen_position", ScreenPosition::MiddleCenter);
                    app::Vector3 position;
                    get_screen_position(screen_position, &position);
                    position.x += pos.at("x").get<float>();
                    position.y += pos.at("y").get<float>();
                    position.z += pos.at("z").get<float>();
                    text_box_position(message_id, position.x, position.y, position.z, pos.at("use_in_game_coordinates").get<bool>());
                }
                if (p.contains("color")) {
                    auto color = p.at("color");
                    text_box_color(message_id, color.at("r").get<int>(), color.at("g").get<int>(), color.at("b").get<int>(), color.at("a").get<int>());
                }
                if (p.contains("alignment"))
                    text_box_alignment(message_id, p.at("text").get<app::AlignmentMode__Enum>());
                if (p.contains("anchor"))
                    text_box_anchor(message_id, p.value("horizontal", app::HorizontalAnchorMode__Enum::Center), p.value("vertical", app::VerticalAnchorMode__Enum::Middle));
                if (p.contains("line_spacing"))
                    text_box_line_spacing(message_id, p.at("line_spacing").get<float>());
                if (p.contains("visible"))
                    text_box_visibility(message_id, p.at("visible").get<bool>());
            }

            void report_load(GameEvent game_event, EventTiming timing) {
                nlohmann::json response;
                response["type"] = "request";
                response["method"] = "notify_on_load";
                ipc::send_message(std::move(response));
            }

            std::unordered_map<GameEvent, std::string> event_to_method{
                { GameEvent::GainedFocus, "notify_on_gain_focus" },
                { GameEvent::LostFocus, "notify_on_lost_focus" },
                { GameEvent::Shutdown, "notify_on_shutdown" },
            };
            void report_game_event(GameEvent game_event, EventTiming timing) {
                nlohmann::json response;
                response["type"] = "request";
                response["method"] = event_to_method.find(game_event)->second;
                ipc::send_message(std::move(response));
            }

            void initialize() {
                game::event_bus().register_handler(GameEvent::NewGame, EventTiming::After, &report_load);
                game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, &report_load);
                game::event_bus().register_handler(GameEvent::FinishedLoadingCheckpoint, EventTiming::After, &report_load);
                game::event_bus().register_handler(GameEvent::Respawn, EventTiming::After, &report_load);

                game::event_bus().register_handler(GameEvent::GainedFocus, EventTiming::After, &report_game_event);
                game::event_bus().register_handler(GameEvent::LostFocus, EventTiming::After, &report_game_event);
                game::event_bus().register_handler(GameEvent::Shutdown, EventTiming::After, &report_game_event);

                register_request_handler("reload", reload);
                register_request_handler("get_uberstates", get_uberstates);
                register_request_handler("set_uberstate", set_uberstate);
                register_request_handler("get_flags", get_flags);
                register_request_handler("action", action);
                register_request_handler("set_velocity", set_velocity);
                register_request_handler("get_velocity", get_velocity);
                register_request_handler("message", message);

                for (auto action = static_cast<Action>(0); action < Action::TOTAL; action = static_cast<Action>(static_cast<int>(action) + 1)) {
                    randomizer::input::add_on_pressed_callback(action, report_input);
                    randomizer::input::add_on_released_callback(action, report_input);
                }
            }

            CALL_ON_INIT(initialize);
        } // namespace
    } // namespace ipc
} // namespace randomizer

RANDOMIZER_C_DLLEXPORT void report_seed_reload() {
    nlohmann::json response;
    response["type"] = "request";
    response["method"] = "notify_on_reload";
    randomizer::ipc::send_message(std::move(response));
}

RANDOMIZER_C_DLLEXPORT void report_uber_state_change(UberStateGroup group, int state, double value) {
    nlohmann::json response;
    response["type"] = "request";
    response["method"] = "notify_on_uber_state_changed";
    response["payload"]["group"] = static_cast<int>(group);
    response["payload"]["state"] = state;
    response["payload"]["value"] = value;
    randomizer::ipc::send_message(std::move(response));
}

RANDOMIZER_C_DLLEXPORT void report_input(Action type, bool pressed) {
    nlohmann::json response;
    response["type"] = "request";
    response["method"] = "notify_input";
    response["payload"]["type"] = type;
    response["payload"]["pressed"] = pressed;
    randomizer::ipc::send_message(std::move(response));
}

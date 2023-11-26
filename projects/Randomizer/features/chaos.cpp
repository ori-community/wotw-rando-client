#include <constants.h>
#include <timer.h>

#include <Common/ext.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/messages/message_box.h>
#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <cmath>
#include <vector>

using namespace app::classes;

namespace randomizer::features {
    namespace {
        float next_chaos_trigger = 0.0f;

        core::api::uber_states::UberState chaos_mode(UberStateGroup::RandoConfig, CHAOS_MODE_ID);
        core::api::uber_states::UberState chaos_trigger_min(UberStateGroup::RandoConfig, CHAOS_TRIGGER_MIN_ID);
        core::api::uber_states::UberState chaos_trigger_max(UberStateGroup::RandoConfig, CHAOS_TRIGGER_MAX_ID);
        core::api::uber_states::UberState air_no_deceleration(UberStateGroup::RandoConfig, FORCE_AIR_NO_DECELERATION_ID);

        using chaos_handler = void (*)();
        struct ChaosHandler {
            double weight;
            chaos_handler callback;
        };

        double total_weight = 0.0;
        std::vector<ChaosHandler> handlers;

        std::unique_ptr<core::api::messages::MessageBox> message_box;
        int current_message_box_timer = -1;
        void hide_text(float extra_delta, void* params) {
            message_box->hide();
            current_message_box_timer = -1;
        }

        void show_text(std::string_view text, float duration = 3.0f) {
            if (message_box == nullptr) {
                message_box = std::make_unique<core::api::messages::MessageBox>();
                message_box->position().set({ 0.0f, 1.0f, 0.0f });
            }

            message_box->set_static_text(text);
            message_box->show();
            if (current_message_box_timer < 0) {
                timer::deregister_timer(current_message_box_timer);
            }

            current_message_box_timer = timer::register_timer(&hide_text, duration);
        }

        double gen_random_value() {
            auto r = rand();
            return r / static_cast<double>(RAND_MAX);
        }

        double gen_random_value(double min, double max) {
            return min + gen_random_value() * (max - min);
        }

        void trigger_chaos() {
            float random_value = gen_random_value(chaos_trigger_min.get<double>(), chaos_trigger_max.get());
            next_chaos_trigger += random_value;
            double i = gen_random_value() * total_weight;
            for (auto handler : handlers) {
                i -= handler.weight;
                if (i < 0.0) {
                    handler.callback();
                    break;
                }
            }
        }

        IL2CPP_INTERCEPT(GameController, void, Update, (app::GameController * this_ptr)) {
            next::GameController::Update(this_ptr);

            if (core::api::game::is_paused() || !chaos_mode.get<bool>())
                return;

            next_chaos_trigger -= TimeUtility::get_deltaTime();
            if (next_chaos_trigger < 0.0f) {
                trigger_chaos();
            }
        }

        void add_handler(ChaosHandler handler) {
            total_weight += handler.weight;
            handlers.emplace_back(handler);
        }

        void teleport_to_random_anchor() {
            // TODO: Implement this.
        }

        void take_damage() {
            // TODO: Implement this.
        }

        int last_sling = -1;
        void stop_sling(float extra_delta, void* params) {
            air_no_deceleration.set(0.0);
            last_sling = -1;
        }

        constexpr double SLING_POWER = 160.0;
        void sling() {
            if (last_sling != -1) {
                timer::deregister_timer(last_sling);
            }

            auto sein = core::api::game::player::sein();
            if (sein != nullptr) {
                auto value = gen_random_value() * 2 * PI;
                app::Vector3 speed{};
                speed.x = static_cast<float>(std::cos(value) * SLING_POWER);
                speed.y = static_cast<float>(std::sin(value) * SLING_POWER);
                speed.z = 0.0f;
                sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed = speed;
                air_no_deceleration.set(1.0);
                last_sling = timer::register_timer(&stop_sling, 1.0f);
                show_text("Chaos: Slinging");
            }
        }

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            // add_handler({ 1.0, teleport_to_random_anchor });
            // add_handler({ 1.0, take_damage });
            add_handler({ 1.0, sling });
            // TODO: Add more handlers.
        });
    } // namespace
} // namespace randomizer::features

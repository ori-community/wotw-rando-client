#include <Core/core.h>
#include <Core/api/game/game.h>

#include <random>

namespace core {
    namespace {
        std::mt19937 random_generator; // NOLINT
        std::uniform_real_distribution<float> float_distribution = std::uniform_real_distribution<float>(0.0f, 1.0f);
        messages::MessageController main_message_controller;
        IDRegistry<std::shared_ptr<api::messages::MessageBox>> main_message_registry;

        auto on_update = api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::Before, [](auto, auto) {
            const float delta_time = core::api::game::fixed_delta_time();
            main_message_controller.update(delta_time);
        });
    } // namespace

    messages::MessageController& message_controller() {
        return main_message_controller;
    }

    IDRegistry<std::shared_ptr<api::messages::MessageBox>>& message_registry() {
        return main_message_registry;
    }

    void random_seed(int seed) {
        random_generator.seed(seed);
    }

    float random() {
        return float_distribution(random_generator);
    }

    int random(int start, int end) {
        std::uniform_int_distribution<int> distribution = std::uniform_int_distribution<int>(start, end);
        return distribution(random_generator);
    }
} // namespace core

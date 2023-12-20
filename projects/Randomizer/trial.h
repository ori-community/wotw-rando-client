#pragma once

#include <Common/registration_handle.h>
#include <Core/api/graphics/sprite.h>
#include <Core/api/messages/message_box.h>
#include <functional>

namespace randomizer {
    // TODO: Still WIP needs some graphics and message handling.
    class Trial {
    public:
        void add(app::Vector2 location, std::optional<float> time = std::nullopt);
        void start_callback(const std::function<void()>& callback);
        void time_callback(const std::function<void(float)>& callback);
        void failed_callback(const std::function<void(float)>& callback);
        void finish_callback(const std::function<void(float)>& callback);

        int total_checkpoints() const;
        int current_checkpoint() const;
        app::Vector2 next_checkpoint_location() const;

        bool enabled() const;
        void enabled(bool value);

        app::Vector2 location() const;
        void location(app::Vector2 location);
    private:
        void update();
        void update_not_in_trial();
        void update_in_trial();

        struct Checkpoint {
            app::Vector2 location = {};
            std::optional<float> time;
        };

        constexpr static float interact_radius = 5.0f;

        float m_timer = 0;
        int m_checkpoint_index = -1;
        app::Vector2 m_location = {};
        std::vector<Checkpoint> m_checkpoints;

        std::function<void()> m_start_callback;
        std::function<void(float)> m_time_callback;
        std::function<void(float)> m_failed_callback;
        std::function<void(float)> m_finish_callback;

        common::registration_handle_t m_update_handle;
        common::registration_handle_t m_input_handle;
        std::shared_ptr<core::api::messages::MessageBox> m_message_box;

        core::api::graphics::Sprite m_start_sprite;
        core::api::graphics::Sprite m_checkpoint_sprite;
        core::api::graphics::Sprite m_finish_sprite;
    };
}

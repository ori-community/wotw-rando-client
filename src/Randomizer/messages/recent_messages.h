#pragma once

#include <Common/droppable.h>
#include <Core/api/graphics/sprite.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <optional>
#include <queue>
#include <string>
#include <Core/api/messages/message_box.h>


namespace randomizer::messages {
    class RecentMessagesView {
    public:
        RecentMessagesView();

        void push_message(const std::string& message);
        void show(float timeout = 6.f);
        void clear_messages();
        bool is_visible() const;

    private:
        std::deque<std::string> m_messages;
        std::vector<std::unique_ptr<core::api::messages::MessageBox>> m_message_boxes;
        common::Droppable::ptr_t m_on_game_ready_droppable = nullptr;
        common::Droppable::ptr_t m_on_update_droppable = nullptr;
        std::unique_ptr<core::api::graphics::Sprite> m_background_sprite = nullptr;
        std::optional<il2cpp::GCRef<app::LegacyTransparencyAnimator>> m_background_sprite_animator = std::nullopt;

        /** Timeout in seconds until the recent messages view should be hidden again */
        float m_timeout = 0.f;

        void initialize_game_objects();
        void set_background_sprite_visible(bool visible);
        void on_update();
    };
} // namespace randomizer::messages

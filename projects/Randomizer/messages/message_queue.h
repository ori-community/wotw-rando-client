#pragma once

#include <string>
#include <utility>
#include <Core/property.h>
#include <Core/api/messages/message_box.h>

namespace core::messages {
    struct QueuedMessageProperties {
        /** The text that should be displayed */
        Property<std::string> text{""};

        /** Whether the message box background should be enabled */
        Property<bool> background_enabled{true};

        /** Callback executed when the message becomes visible */
        std::function<void()> on_shown = nullptr;

        /** Callback executed when the message gets hidden */
        std::function<void()> on_hidden = nullptr;

        /** Remaining time this message is supposed to be displayed, in seconds */
        float time_left = 3.0f;
    };

    class QueuedMessage : std::enable_shared_from_this<QueuedMessage> {
        friend class MessageQueue;

    public:
        using ptr_t = std::shared_ptr<QueuedMessage>;
        using weak_ptr_t = std::weak_ptr<QueuedMessage>;

        QueuedMessageProperties& properties() { return m_properties; }

        QueuedMessage(QueuedMessageProperties  properties, bool prioritized, std::optional<app::Vector2> origin_world_position) :
            m_properties(std::move(properties)),
            m_prioritized(prioritized),
            m_origin_world_position(origin_world_position) {}

    private:
        struct MessageBoxWithEffects {
            /** The message box */
            std::unique_ptr<api::messages::MessageBox> message_box;

            /** Reactive effects to update the message box whenever any properties of this instance change */
            std::vector<reactivity::ReactiveEffect::ptr_t> effects;

            MessageBoxWithEffects() :
                message_box(std::make_unique<api::messages::MessageBox>()),
                effects({}) {}
        };

        QueuedMessageProperties m_properties;

        /** Whether this message was prioritized */
        bool m_prioritized = false;

        /** Whether the message box is visible or not */
        bool m_visible = false;

        /** A world position at which the message initially spawns */
        std::optional<app::Vector2> m_origin_world_position = std::nullopt;

        std::optional<MessageBoxWithEffects> m_box_and_effects;
    };

    class MessageQueue {
    public:
        /**
         * Enqueues a new message with the given text.
         * If the message is prioritized, any existing prioritized message is immediately
         * removed from the queue and the new message is pushed to the front of the message
         * queue, displaying it as the first/top message.
         */
        QueuedMessage::weak_ptr_t enqueue(QueuedMessageProperties properties, bool prioritized = false, std::optional<app::Vector2> origin_world_position = std::nullopt);

        /** Clears the entire queue, hiding any visible messages */
        void clear();

        explicit MessageQueue(const app::Vector2& m_top_anchor);

    private:
        std::vector<QueuedMessage::ptr_t> m_queue;

        common::Droppable::ptr_t m_on_update_droppable;
        void on_update();
        void set_message_box_fade_out_based_on_queue_size(api::messages::MessageBox& message_box) const;

        /** The top center anchor of this message queue in UI coordinates */
        app::Vector2 m_top_anchor{};

        /**
         * The maximum height of all visible messages.
         * Note that this limit will always be met or exceeded by the last message.
         */
        float m_max_height = 4.0f;
    };
}

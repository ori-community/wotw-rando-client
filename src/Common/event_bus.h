#pragma once

#include <array>
#include <ranges>
#include <unordered_map>
#include <variant>
#include "droppable.h"
#include "variant_index.h"

namespace common {
    template<typename... EVENTS_T>
    class EventBus {
    public:
        using events_variant_t = std::variant<EVENTS_T...>;
        using generic_callback_t = std::function<void(const events_variant_t&)>;

        template<typename EVENT_T>
        using callback_t = std::function<void(const EVENT_T&)>;

        template<typename EVENT_T>
        [[nodiscard]]
        Droppable::ptr_t on(callback_t<EVENT_T> callback) {
            constexpr auto event_index = variant_index<events_variant_t, EVENT_T>();
            const auto id = m_next_id++;
            m_event_handlers[event_index][id] = [callback](const events_variant_t& event) { callback(std::get<EVENT_T>(event)); };
            return std::make_unique<Droppable>([this, event_index, id] { remove_event_handler_safe(event_index, id); });
        }

        template<typename EVENT_T>
        void emit(EVENT_T event) {
            constexpr auto event_index = variant_index<events_variant_t, EVENT_T>();

            m_is_running_event_handler = true;
            events_variant_t event_variant = event;
            for (auto& entry: m_event_handlers[event_index]) {
                entry.second(event_variant);
            }
            m_is_running_event_handler = false;

            for (auto& identifier: m_queued_deletions) {
                remove_event_handler(identifier.event_index, identifier.id);
            }
        }

    private:
        using id_t = std::size_t;

        struct EventHandlerIdentifier {
            std::size_t event_index;
            id_t id;
        };

        void remove_event_handler_safe(std::size_t event_index, id_t id) {
            if (m_is_running_event_handler) {
                m_queued_deletions.emplace_back(event_index, id);
            } else {
                remove_event_handler(event_index, id);
            }
        }

        void remove_event_handler(std::size_t event_index, id_t id) { m_event_handlers[event_index].erase(id); }

        id_t m_next_id = 0;
        bool m_is_running_event_handler = false;
        std::vector<EventHandlerIdentifier> m_queued_deletions;
        std::array<std::unordered_map<id_t, generic_callback_t>, sizeof...(EVENTS_T)> m_event_handlers{};
    };

    template<typename DISCRIMINATOR_T, typename... EVENTS_T>
    class DiscriminatingEventBus {
    public:
        using events_variant_t = std::variant<EVENTS_T...>;
        using generic_callback_t = std::function<void(const events_variant_t&)>;

        template<typename EVENT_T>
        using callback_t = std::function<void(const EVENT_T&)>;

        template<typename EVENT_T>
        [[nodiscard]]
        Droppable::ptr_t on(DISCRIMINATOR_T discriminator, callback_t<EVENT_T> callback) {
            constexpr auto event_index = variant_index<events_variant_t, EVENT_T>();
            const auto id = m_next_id++;
            m_event_handlers[event_index][discriminator][id] = [callback](const events_variant_t& event) { callback(std::get<EVENT_T>(event)); };
            return std::make_unique<Droppable>([this, event_index, discriminator, id] { remove_event_handler_safe(event_index, discriminator, id); });
        }

        template<typename EVENT_T>
        void emit(DISCRIMINATOR_T discriminator, EVENT_T event) {
            constexpr auto event_index = variant_index<events_variant_t, EVENT_T>();

            m_is_running_event_handler = true;
            events_variant_t event_variant = event;
            for (auto& entry: m_event_handlers[event_index][discriminator]) {
                entry.second(event_variant);
            }
            m_is_running_event_handler = false;

            for (auto& identifier: m_queued_deletions) {
                remove_event_handler(identifier.event_index, identifier.discriminator, identifier.id);
            }
        }

    private:
        using id_t = std::size_t;

        struct EventHandlerIdentifier {
            std::size_t event_index;
            DISCRIMINATOR_T discriminator;
            id_t id;
        };

        void remove_event_handler_safe(std::size_t event_index, const DISCRIMINATOR_T& discriminator, id_t id) {
            if (m_is_running_event_handler) {
                m_queued_deletions.emplace_back(event_index, discriminator, id);
            } else {
                remove_event_handler(event_index, discriminator, id);
            }
        }

        void remove_event_handler(std::size_t event_index, const DISCRIMINATOR_T& discriminator, id_t id) {
            m_event_handlers[event_index][discriminator].erase(id);
        }

        id_t m_next_id = 0;
        bool m_is_running_event_handler = false;
        std::vector<EventHandlerIdentifier> m_queued_deletions;
        std::array<std::unordered_map<DISCRIMINATOR_T, std::unordered_map<id_t, generic_callback_t>>, sizeof...(EVENTS_T)> m_event_handlers{};
    };
} // namespace common

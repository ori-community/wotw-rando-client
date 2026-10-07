#pragma once

#include <Common/droppable.h>
#include <Common/scope_utils.h>
#include <Common/variant_index.h>
#include <array>
#include <optional>
#include <ranges>
#include <unordered_map>
#include <unordered_set>
#include <variant>


namespace common {
    template<typename... EVENTS_T>
    class EventBus {
    public:
        using events_variant_t = std::variant<EVENTS_T...>;
        using variant_callback_t = std::function<void(const events_variant_t&)>;

        template<typename EVENT_T>
        using callback_t = std::function<void(const EVENT_T&)>;

        /**
         * Register an event handler that is called when an event with type EVENT_T is emitted.
         * The event handler is called with a reference to that event as its first parameter.
         */
        template<typename EVENT_T>
        [[nodiscard]]
        Droppable::ptr_t on(callback_t<EVENT_T> callback) {
            constexpr auto event_index = variant_index<events_variant_t, EVENT_T>();
            auto& collection = m_event_handler_collections[event_index];

            const auto id = m_next_id++;
            collection.handlers[id] = {
                [callback](const events_variant_t& event) { callback(std::get<EVENT_T>(event)); }
            };
            return std::make_unique<Droppable>([this, event_index, id] { remove_event_handler_safe(event_index, id); });
        }

        /**
         * Emit an event of type EVENT_T
         */
        template<typename EVENT_T>
        void emit(EVENT_T event) {
            constexpr auto event_index = variant_index<events_variant_t, EVENT_T>();
            events_variant_t event_variant = event;
            auto& collection = m_event_handler_collections[event_index];

            {
                common::ScopedSetter _(collection.is_executing_handler, true);

                auto handlers = collection.handlers;
                for (auto& [id, handler]: handlers) {
                    if (handler.is_deletion_pending) {
                        continue;
                    }

                    handler.callback(event_variant);
                }
            }

            if (!collection.is_executing_handler) {
                for (auto& id : collection.pending_deletions) {
                    collection.handlers.erase(id);
                }
                collection.pending_deletions.clear();
            }
        }

    private:
        using id_t = std::size_t;

        template <typename CALLBACK_T>
        struct EventHandler {
            CALLBACK_T callback;
            bool is_deletion_pending = false;
        };

        struct EventHandlerCollection {
            std::unordered_map<id_t, EventHandler<variant_callback_t>> handlers;
            std::unordered_set<id_t> pending_deletions;
            bool is_executing_handler = false;
        };

        void remove_event_handler_safe(std::size_t event_index, id_t id) {
            auto& collection = m_event_handler_collections[event_index];
            if (collection.is_executing_handler) {
                collection.pending_deletions.insert(id);
                collection.handlers[id].is_deletion_pending = true;
            } else {
                collection.handlers.erase(id);
            }
        }

        id_t m_next_id = 0;
        std::array<EventHandlerCollection, sizeof...(EVENTS_T)> m_event_handler_collections{};
    };

    template<typename DISCRIMINATOR_T, typename... EVENTS_T>
    class DiscriminatingEventBus {
    public:
        using events_variant_t = std::variant<EVENTS_T...>;
        using discriminated_variant_callback_t = std::function<void(const events_variant_t&)>;
        using variant_callback_t = std::function<void(const DISCRIMINATOR_T&, const events_variant_t&)>;

        template<typename EVENT_T>
        using discriminated_callback_t = std::function<void(const EVENT_T&)>;
        template<typename EVENT_T>
        using callback_t = std::function<void(const DISCRIMINATOR_T&, const EVENT_T&)>;

        /**
         * Register an event handler that is called when an event with type EVENT_T is emitted with the specified discriminator.
         * The event handler is called with a reference to that event as its first parameter.
         */
        template<typename EVENT_T>
        [[nodiscard]]
        Droppable::ptr_t on(DISCRIMINATOR_T discriminator, discriminated_callback_t<EVENT_T> callback) {
            constexpr auto event_index = variant_index<events_variant_t, EVENT_T>();
            const auto id = m_next_id++;

            auto& discriminated_collection = m_discriminated_event_handler_collections[event_index][discriminator];

            discriminated_collection.handlers[id] = {
                [callback](const events_variant_t& event) { callback(std::get<EVENT_T>(event)); }
            };

            return std::make_unique<Droppable>([this, event_index, discriminator, id] { remove_discriminated_event_handler_safe(event_index, discriminator, id); });
        }

        /**
         * Register an event handler that is called when an event with type EVENT_T is emitted with any of the specified discriminators.
         * The event handler is called with a reference to that event as its first parameter.
         */
        template<typename EVENT_T>
        [[nodiscard]]
        Droppable::ptr_t on(std::initializer_list<DISCRIMINATOR_T> discriminators, callback_t<EVENT_T> callback) {
            constexpr auto event_index = variant_index<events_variant_t, EVENT_T>();
            const auto id = m_next_id++;

            for (const auto& discriminator: discriminators) {
                auto& discriminated_collection = m_discriminated_event_handler_collections[event_index][discriminator];

                discriminated_collection.handlers[id] = {
                    [callback, discriminator](const events_variant_t& event) { callback(discriminator, std::get<EVENT_T>(event)); }
                };
            }

            return std::make_unique<Droppable>([this, event_index, discriminators, id] {
                for (const auto& discriminator: discriminators) {
                    remove_discriminated_event_handler_safe(event_index, discriminator, id);
                }
            });
        }

        /**
         * Register an event handler that is called when an event with type EVENT_T, regardless of the event's discriminator.
         * The event handler is called with a reference to the discriminator as first and a reference to the event as second parameter.
         */
        template<typename EVENT_T>
        [[nodiscard]]
        Droppable::ptr_t on(callback_t<EVENT_T> callback) {
            constexpr auto event_index = variant_index<events_variant_t, EVENT_T>();
            auto& collection = m_event_handler_collections[event_index];

            const auto id = m_next_id++;
            collection.handlers[id] = {
                [callback](const DISCRIMINATOR_T& discriminator, const events_variant_t& event) { callback(discriminator, std::get<EVENT_T>(event)); }
            };
            return std::make_unique<Droppable>([this, event_index, id] { remove_event_handler_safe(event_index, id); });
        }

        /**
         * Emit an event of type EVENT_T with a specified discriminator.
         */
        template<typename EVENT_T>
        void emit(DISCRIMINATOR_T discriminator, EVENT_T event) {
            constexpr auto event_index = variant_index<events_variant_t, EVENT_T>();
            events_variant_t event_variant = event;

            auto& discriminated_collection = m_discriminated_event_handler_collections[event_index][discriminator];

            {
                common::ScopedSetter _(discriminated_collection.is_executing_handler, true);

                auto handlers = discriminated_collection.handlers;
                for (auto& [id, handler]: handlers) {
                    if (handler.is_deletion_pending) {
                        continue;
                    }

                    handler.callback(event_variant);
                }
            }

            if (!discriminated_collection.is_executing_handler) {
                for (auto& id : discriminated_collection.pending_deletions) {
                    discriminated_collection.handlers.erase(id);
                }
                discriminated_collection.pending_deletions.clear();
            }

            auto& collection = m_event_handler_collections[event_index];

            {
                common::ScopedSetter _(collection.is_executing_handler, true);

                auto handlers = collection.handlers;
                for (auto& [id, handler]: handlers) {
                    if (handler.is_deletion_pending) {
                        continue;
                    }

                    handler.callback(discriminator, event_variant);
                }
            }

            if (!collection.is_executing_handler) {
                for (auto& id : collection.pending_deletions) {
                    collection.handlers.erase(id);
                }
                collection.pending_deletions.clear();
            }
        }

    private:
        using id_t = std::size_t;

        template <typename CALLBACK_T>
        struct EventHandler {
            CALLBACK_T callback;
            bool is_deletion_pending = false;
        };

        template <typename CALLBACK_T>
        struct EventHandlerCollection {
            std::unordered_map<id_t, EventHandler<CALLBACK_T>> handlers;
            std::unordered_set<id_t> pending_deletions;
            bool is_executing_handler = false;
        };

        void remove_discriminated_event_handler_safe(std::size_t event_index, const DISCRIMINATOR_T& discriminator, id_t id) {
            auto& discriminated_collection = m_discriminated_event_handler_collections[event_index][discriminator];
            if (discriminated_collection.is_executing_handler) {
                discriminated_collection.pending_deletions.insert(id);
                discriminated_collection.handlers[id].is_deletion_pending = true;
            } else {
                discriminated_collection.handlers.erase(id);
            }
        }

        void remove_event_handler_safe(std::size_t event_index, id_t id) {
            auto& collection = m_event_handler_collections[event_index];
            if (collection.is_executing_handler) {
                collection.pending_deletions.insert(id);
                collection.handlers[id].is_deletion_pending = true;
            } else {
                collection.handlers.erase(id);
            }
        }

        id_t m_next_id = 0;
        std::array<std::unordered_map<DISCRIMINATOR_T, EventHandlerCollection<discriminated_variant_callback_t>>, sizeof...(EVENTS_T)> m_discriminated_event_handler_collections{};
        std::array<EventHandlerCollection<variant_callback_t>, sizeof...(EVENTS_T)> m_event_handler_collections{};
    };
} // namespace common

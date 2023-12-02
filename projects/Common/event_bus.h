#pragma once

#include <Common/event_bus_data.h>
#include <Common/event_timing.h>

#include <type_traits>
#include <vector>

namespace common {

    template <typename Return, typename T, typename... Identifiers>
    class EventBusImplementation {
    public:
        template <typename Alias>
        struct event_handler_alias {
            using handler = std::function<Return(Alias, Identifiers...)>;
        };

        template <>
        struct event_handler_alias<void> {
            using handler = std::function<Return(Identifiers...)>;
        };

        using event_handler = typename event_handler_alias<T>::handler;
        using event_bus_data = EventBusData<event_handler>;
        using identifier = std::tuple<Identifiers...>;

        EventBusImplementation() = default;

        EventBusImplementation(EventBusImplementation const& other) = delete;

        void clear() {
            m_data.clear();
        }

        [[nodiscard]] registration_handle_t register_handler(Identifiers... ids, event_handler handler) {
            return m_data.get_bus_data(ids...)->register_handler(handler);
        }

        [[nodiscard]] std::vector<registration_handle_t> register_handlers(std::vector<identifier> ids, event_handler handler) {
            std::vector<registration_handle_t> handles;
            for (auto id : ids) {
                handles.push_back(m_data.get_bus_data(id)->register_handler(handler));
            }

            return handles;
        }

        void trigger_event(Identifiers... ids)
            requires(std::same_as<Return, void> && std::same_as<T, void>)
        {
            auto data = m_data.get_bus_data(ids...);
            data->start_trigger();
            for (auto const& [id, handler] : data->event_handlers) {
                if (data->should_trigger(id)) {
                    handler(ids...);
                }
            }

            data->end_trigger();
        }

        std::vector<Return> trigger_event(Identifiers... ids)
            requires(!std::same_as<Return, void> && std::same_as<T, void>)
        {
            auto data = m_data.get_bus_data(ids...);
            data->start_trigger();
            std::vector<Return> output;
            for (auto const& [id, handler] : data->event_handlers) {
                if (data->should_trigger(id)) {
                    output.push_back(handler(ids...));
                }
            }

            data->end_trigger();
            return output;
        }

        void trigger_event(Identifiers... ids, auto value)
            requires(std::same_as<Return, void> && !std::same_as<T, void>)
        {
            auto data = m_data.get_bus_data(ids...);
            data->start_trigger();
            for (auto const& [id, handler] : data->event_handlers) {
                if (data->should_trigger(id)) {
                    handler(value, ids...);
                }
            }

            data->end_trigger();
        }

        std::vector<Return> trigger_event(Identifiers... ids, auto value)
            requires(!std::same_as<Return, void> && !std::same_as<T, void>)
        {
            auto data = m_data.get_bus_data(ids...);
            data->start_trigger();
            std::vector<Return> output;
            for (auto const& [id, handler] : data->event_handlers) {
                if (data->should_trigger(id)) {
                    output.push_back(handler(value, ids...));
                }
            }

            data->end_trigger();
            return output;
        }

    private:
        EventBusContainer<event_handler, Identifiers...> m_data;
    };

    template <typename T, typename... Identifiers>
    using EventBus = EventBusImplementation<void, T, Identifiers...>;

    template <typename Return, typename T, typename... Identifiers>
    using CollectingEventBus = EventBusImplementation<Return, T, Identifiers...>;

    template <typename T, typename... Identifiers>
    using TimedEventBus = EventBusImplementation<void, T, Identifiers..., EventTiming>;

    template <typename... Identifiers>
    using TimedMultiEventBus = EventBusImplementation<void, void, Identifiers..., EventTiming>;
} // namespace core::events

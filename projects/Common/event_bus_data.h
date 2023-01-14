#pragma once

#include <Common/ext.h>
#include <Common/registration_handle.h>

#include <memory>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace common {
    template <typename EventHandler>
    struct EventBusData {
    public:
        using data_type = std::shared_ptr<EventBusData>;
        using weak_data_type = std::weak_ptr<EventBusData>;

        weak_data_type self;
        std::unordered_map<int, EventHandler> event_handlers;
        std::unordered_set<int> queued_deletions;
        bool currently_triggering = false;
        int next = 0;

        [[nodiscard]] registration_handle register_handler(EventHandler handler) {
            int id = next++;
            event_handlers[id] = handler;
            auto ptr = self;
            return std::make_unique<RegistrationHandle>([id, ptr]() { handle_delete(ptr, id); });
        }

        void start_trigger() {
            currently_triggering = true;
        }

        bool should_trigger(int id) {
            return !queued_deletions.contains(id);
        }

        void end_trigger() {
            currently_triggering = false;
            for (auto id : queued_deletions) {
                event_handlers.erase(id);
            }

            queued_deletions.clear();
        }

        void clear() {
            event_handlers.clear();
            queued_deletions.clear();
            currently_triggering = false;
            next = 0;
        }

    private:
        static void handle_delete(weak_data_type weak_data, int id) {
            if (weak_data.expired()) {
                return;
            }

            auto strong_data = weak_data.lock();
            if (strong_data->currently_triggering) {
                strong_data->queued_deletions.emplace(id);
            } else {
                strong_data->event_handlers.erase(id);
            }
        }
    };

    template <typename EventHandler, typename... Identifiers>
    struct EventBusContainer {
        using event_bus_data = EventBusData<EventHandler>;
        using identifier = std::tuple<Identifiers...>;

        void clear() {
            for (auto& [id, data] : m_data) {
                data->clear();
            }
        }

        std::shared_ptr<event_bus_data> get_bus_data(Identifiers... id) {
            auto key = std::make_tuple(id...);
            if (!m_data.contains(key)) {
                auto event_bus = std::make_shared<event_bus_data>();
                event_bus->self = event_bus;
                m_data.emplace(key, event_bus);
            }

            auto event_bus = m_data[key];
            return event_bus;
        }

    private:
        std::unordered_map<identifier, std::shared_ptr<event_bus_data>, std::hash<identifier>> m_data;
    };

    template <typename EventHandler>
    struct EventBusContainer<EventHandler> {
        EventBusContainer() {
            m_data = std::make_shared<event_bus_data>();
            m_data->self = m_data;
        }

        void clear() {
            m_data->clear();
        }

        using event_bus_data = EventBusData<EventHandler>;
        std::shared_ptr<event_bus_data> get_bus_data() {
            return m_data;
        }

    private:
        std::shared_ptr<event_bus_data> m_data;
    };
} // namespace common

#include <online/network_monitor.h>

namespace randomizer::online {
    void NetworkMonitor::report(StatusCondition const& condition) {
        std::lock_guard guard(m_condition_mutex);
        m_conditions.push_back(condition);
    }

    void NetworkMonitor::network_client(NetworkClient* client) {
        m_client = client;
        m_client->set_status_listener([this](NetworkClient::Status const& status) {
            core::dev::StatusType type;
            switch (status.type) {
                case NetworkClient::StatusType::WebsocketClosedUnexpected:
                case NetworkClient::StatusType::WebsocketError:
                case NetworkClient::StatusType::UdpError:
                    type = core::dev::StatusType::Error;
                    break;
                case NetworkClient::StatusType::WebsocketSendError:
                    type = core::dev::StatusType::Warning;
                    break;
                default:
                    type = core::dev::StatusType::Info;
                    break;
            }

            report({
                .type = type,
                .message = status.info,
            });
        });
    }

    void NetworkMonitor::display(core::dev::StatusDisplay* display) {
        m_display = display;
    }

    void NetworkMonitor::update(float delta_time) {
        std::lock_guard guard(m_condition_mutex);
        for (auto const& condition : m_conditions) {
            m_display->report(condition.type, condition.message, condition.duration);
        }

        m_conditions.clear();
    }
} // namespace randomizer::online

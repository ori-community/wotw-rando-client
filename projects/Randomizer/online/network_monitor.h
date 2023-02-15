#pragma once

#include <Core/api/messages/message_box.h>
#include <Core/dev/status_display.h>

#include <Randomizer/online/network.h>

namespace randomizer::online {
    class NetworkMonitor {
    public:
        struct StatusCondition {
            core::dev::StatusType type;
            float duration = 4.f;
            std::string message;
        };

        void report(StatusCondition const& condition);
        void network_client(NetworkClient* client);
        void display(core::dev::StatusDisplay* display);
        void update(float delta_time);

    private:
        std::vector<StatusCondition> m_conditions;
        std::mutex m_condition_mutex;
        core::dev::StatusDisplay* m_display = nullptr;
        NetworkClient* m_client = nullptr;
    };
} // namespace randomizer::online

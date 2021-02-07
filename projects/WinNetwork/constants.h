#pragma once

#include <chrono>

namespace network {
    enum class PackageType : unsigned char
    {
        Ping = 0x01u,
        Message = 0x02u,
        Identifier = 0x0Au,
        TraceMessage = 0x10u,
        ConfigPing = 0xF0u,
    };

    enum class NetworkEventType
    {
        Package,
        Connected,
        Disconnected
    };

    extern const std::chrono::milliseconds PING_INTERVAL;
    extern const std::chrono::milliseconds PING_WAIT_TIME;
}

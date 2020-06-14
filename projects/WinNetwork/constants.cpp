#include <constants.h>

namespace network {
    const std::chrono::milliseconds PING_INTERVAL = std::chrono::milliseconds{ 45 };
    const std::chrono::milliseconds PING_WAIT_TIME = std::chrono::milliseconds{ 3000 };
}

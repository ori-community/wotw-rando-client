#include <Core/dev/timing.h>

namespace dev {
    void print_time(std::chrono::time_point<std::chrono::steady_clock> start, std::string_view tag) {
        auto now = std::chrono::high_resolution_clock::now();
        auto time_span = duration_cast<std::chrono::microseconds>(now - start);
        modloader::win::console::console_send(std::format("{:.2f} ms  {}", time_span.count() / 1000.f, tag));
        modloader::win::console::console_flush();
    }
}
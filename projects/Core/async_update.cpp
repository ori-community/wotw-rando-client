#include <Modloader/common.h>
#include <Modloader/windows_api/sleep.h>
#include <Core/async_update.h>

#include <thread>
#include <chrono>

namespace core::async_update {
    TimedEventBus<float> bus;

    namespace {
        constexpr long INTERVAL_US = 1000000L / 60L; // 60 Hz

        void initialize() {
            std::thread([]() {
                auto last_iteration_time = std::chrono::steady_clock::now();

                while (!modloader::shutdown_requested) {
                    modloader::win::sleep(INTERVAL_US);
                    auto now = std::chrono::steady_clock::now();
                    auto delta = std::chrono::duration_cast<std::chrono::duration<float>>(now - last_iteration_time);
                    last_iteration_time = now;

                    bus.trigger_event(delta.count());
                }
            }).detach();
        }

        CALL_ON_INIT(initialize);
    }

    TimedEventBus<float>& event_bus() {
        return bus;
    }
}
#include <Core/events/async_update.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/sleep.h>
#include <chrono>
#include <thread>


namespace core::events {
    namespace {
        constexpr long INTERVAL_US = 1000000L / 60L; // 60 Hz

        [[maybe_unused]]
        auto on_game_ready = modloader::event_bus().on<modloader::events::GameReady>([](auto) {
            std::thread([]() {
                auto last_iteration_time = std::chrono::steady_clock::now();

                while (!modloader::shutdown_requested) {
                    modloader::win::sleep(INTERVAL_US);
                    auto now = std::chrono::steady_clock::now();
                    auto delta = std::chrono::duration_cast<std::chrono::duration<float>>(now - last_iteration_time);
                    last_iteration_time = now;

                    async_update_bus().emit(AsyncUpdate(delta.count()));
                }
            }).detach();
        });
    } // namespace

    bus_t& async_update_bus() {
        static bus_t bus;
        return bus;
    }
} // namespace core::events

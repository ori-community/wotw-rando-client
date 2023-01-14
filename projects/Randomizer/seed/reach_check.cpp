#include <seed/reach_check.h>

#include <Common/blocking_queue.h>

#include <Core/api/game/game.h>

#include <Modloader/modloader.h>
#include <Modloader/windows_api/bootstrap.h>

namespace randomizer::seed {
    namespace {
        struct ReachCheckRequest {
            reach_check_callback callback;
        };

        bool thread_is_running = false;
        common::BlockingQueue<ReachCheckRequest> requests;
        std::vector<std::tuple<reach_check_callback, ReachCheckResult>> results;
        std::mutex results_mutex;

        void handle_requests() {
            auto handle = modloader::win::bootstrap::load_library("rust");
            if (!handle) {
                return;
            }

            // TODO: Make this function signature correct.
            using seedgen_reach_check = ReachCheckResult (*)();
            seedgen_reach_check func = reinterpret_cast<seedgen_reach_check>(modloader::win::bootstrap::load_function(handle, "reach_check"));
            if (!func) {
                return;
            }

            thread_is_running = true;
            while (!modloader::shutdown_requested) {
                auto request = requests.dequeue();
                auto result = func();
                std::lock_guard<std::mutex> lock(results_mutex);
                results.push_back({ request.callback, result });
            }

            modloader::win::bootstrap::free_library(handle);
        }

        std::thread request_thread(handle_requests);
        auto on_before_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
            if (auto lock = std::unique_lock(results_mutex, std::try_to_lock)) {
                for (auto [callback, result] : results) {
                    callback(result);
                }

                results.clear();
            }
        });
    } // namespace

    bool ReachCheckResult::reachable(core::api::uber_states::UberStateCondition location) const {
        return false;
    }

    void reach_check(reach_check_callback callback) {
        if (thread_is_running) {
            requests.enqueue({ callback });
        }
    }
} // namespace randomizer::seed

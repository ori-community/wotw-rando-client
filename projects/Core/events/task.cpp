#include <Core/api/game/game.h>
#include <Core/events/task.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <mutex>
#include <utility>

using namespace modloader;
using namespace app::classes;

namespace core::events {
    struct Task {
        float seconds;
        std::function<void()> callback;
    };

    float timer = 0.f;
    std::mutex tasks_mutex;
    std::vector<Task> tasks;

    void schedule_task(float seconds, std::function<void()> task) {
        std::lock_guard _(tasks_mutex);

        seconds += timer;
        auto it = tasks.rbegin();

        // We use a reverse iterator as we assume later tasks take a longer time then earlier ones.
        while (it != tasks.rend() && it->seconds <= seconds) {
            ++it;
        }

        tasks.insert(it.base(), Task{ seconds, std::move(task) });
    }

    void schedule_task_for_next_update(std::function<void()> task) {
        schedule_task(-timer, std::move(task));
    }

    auto before_unity_update = core::api::game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::After, [](auto, auto) {
        if (!tasks.empty()) {
            timer += api::game::fixed_delta_time();

            std::vector<Task> tasks_to_run;

            {
                std::lock_guard _(tasks_mutex);
                while (!tasks.empty() && tasks.back().seconds <= timer) {
                    tasks_to_run.push_back(tasks.back());
                    tasks.pop_back();
                }
            }

            for (auto& task_to_run: tasks_to_run) {
                task_to_run.callback();
            }
        } else {
            timer = 0.f;
        }
    });
} // namespace core::events

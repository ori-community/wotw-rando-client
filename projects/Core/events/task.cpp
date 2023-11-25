#include <api/game/game.h>
#include <events/task.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

namespace core::events {
    struct Task {
        float seconds;
        std::function<void()> callback;
    };

    bool is_updating_tasks = false;
    float timer = 0.f;
    std::vector<Task> task_buffer;
    std::vector<Task> tasks;

    void schedule_task(float seconds, std::function<void()> task) {
        if (is_updating_tasks) {
            task_buffer.push_back(Task{ seconds, task });
        } else {
            seconds += timer;
            auto it = tasks.rbegin();
            // We use a reverse iterator as we assume later tasks take a longer time then earlier ones.
            while (it != tasks.rend() && it->seconds < seconds) {
                ++it;
            }

            tasks.insert(it.base(), Task{ seconds, task });
        }
    }

    void schedule_task_for_next_update(std::function<void()> task) {
        schedule_task(-timer, task);
    }

    IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
        if (!tasks.empty()) {
            modloader::ScopedSetter updater(is_updating_tasks, true);
            is_updating_tasks = true;
            timer += api::game::fixed_delta_time();
            while (!tasks.empty() && tasks.back().seconds <= timer) {
                tasks.back().callback();
                tasks.pop_back();
            }
        } else {
            timer = 0.f;
        }

        for (auto const& task : task_buffer) {
            schedule_task(task.seconds, task.callback);
        }

        task_buffer.clear();
        next::GameController::FixedUpdate(this_ptr);
    }
} // namespace core::events

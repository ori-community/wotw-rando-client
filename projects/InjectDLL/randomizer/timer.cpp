#include <randomizer/timer.h>

#include <game/game.h>

#include <Il2CppModLoader/app/methods/GameController.h>
#include <Il2CppModLoader/app/methods/TimeUtility.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

using namespace app::methods;

namespace timer {
    struct TimerInfo {
        timer_callback callback;
        float duration;
        float time_started;
        bool repeat;
        void* params;
    };

    std::unordered_map<int, TimerInfo> timers;
    int next_timer_id = 1;
    float current_time = 0.0f;

    int register_timer(timer_callback callback, float duration, bool repeat, void* params) {
        if (callback == nullptr)
            modloader::warn("timer", "Registered a timer with a nullptr callback");

        auto id = next_timer_id++;
        auto& info = timers[id];
        info = {
            callback,
            duration,
            current_time,
            repeat,
            params
        };

        return id;
    }

    bool deregister_timer(int id) {
        auto it = timers.find(id);
        if (it == timers.end())
            return false;

        timers.erase(it);
        return true;
    }

    std::vector<int> dead_timers;
    IL2CPP_INTERCEPT(GameController, void, Update, (app::GameController * this_ptr)) {
        next::GameController::Update(this_ptr);

        if (game::is_paused())
            return;

        if (timers.empty()) {
            current_time = 0.0f;
            return;
        }

        current_time += TimeUtility::get_deltaTime();
        for (auto& timer : timers) {
            auto trigger_time = timer.second.time_started + timer.second.duration;
            if (current_time >= trigger_time) {
                timer.second.callback(current_time - trigger_time, timer.second.params);
                if (timer.second.repeat)
                    timer.second.time_started = trigger_time;
                else
                    dead_timers.push_back(timer.first);
            }
        }

        for (auto timer : dead_timers)
            timers.erase(timer);

        dead_timers.clear();
    }
} // namespace timer

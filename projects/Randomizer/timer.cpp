#include <Randomizer/timer.h>

#include <Core/api/game/game.h>

#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/modloader.h>

#include <unordered_map>
#include <unordered_set>

using namespace app::classes;

namespace randomizer::timer {
    namespace {
        struct TimerInfo {
            timer_callback callback;
            float duration;
            float time_started;
            bool repeat;
            void* params;
        };

        std::unordered_set<core::api::uber_states::UberState> uber_state_timers;
        std::unordered_map<int, TimerInfo> timers;
        int next_timer_id = 1;
        float current_time = 0.0f;

        std::vector<int> dead_timers;
        auto on_update = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [](auto, auto) {
            if (core::api::game::is_paused())
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
        });

        auto on_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
            for (auto& state : uber_state_timers) {
                state.set(state.get() + 1);
            }
        });
    } // namespace

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

    void uber_state_timer(core::api::uber_states::UberState value, bool start) {
        if (start) {
            uber_state_timers.emplace(value);
        } else {
            uber_state_timers.erase(value);
        }
    }

    void clear_uber_state_timers() {
        uber_state_timers.clear();
    }
} // namespace randomizer::timer

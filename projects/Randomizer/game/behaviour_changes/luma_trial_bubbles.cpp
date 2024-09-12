#include <Modloader/modloader.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/Bubble.h>
#include <Modloader/app/methods/Bubblemaker.h>

namespace {
    IL2CPP_INTERCEPT(Bubble, void, OnPoolSpawned, (app::Bubble* this_ptr)) {
        next::Bubble::OnPoolSpawned(this_ptr);

        // Reset to default values so recycled bubbles don't have random values
        this_ptr->fields.AccelerationY = this_ptr->fields.BaseAccelerationY;
        il2cpp::unity::set_local_scale(this_ptr, this_ptr->fields.BaseLocalScale);
    }

    IL2CPP_INTERCEPT(Bubblemaker, void, SpawnBubble, (app::Bubblemaker* this_ptr)) {
        // Prevent fake bubbles to spawn due to lazily resetting MoonTimelines
        if (this_ptr->fields.RaceOverride && this_ptr->fields.m_raceTimeLastUpdate == 0.0) {
            return;
        }

        next::Bubblemaker::SpawnBubble(this_ptr);
    }

    IL2CPP_INTERCEPT(Bubblemaker, void, OnSyncRaceTimer, (app::Bubblemaker* this_ptr, float time)) {
        // Reset all timers on race restart, they forgot that...
        // This isn't too important since it doesn't actually spawn bubbles,
        // but it displays weird animations
        if (time == 0.0) {
            this_ptr->fields.m_raceTimeLastUpdate = 0.0;
            this_ptr->fields.m_spawnOffsetTimer = 0.0;
            this_ptr->fields.m_spawnTimer = 0.0;
            return;
        }

        next::Bubblemaker::OnSyncRaceTimer(this_ptr, time);
    }
} // namespace

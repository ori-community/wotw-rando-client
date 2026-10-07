#pragma once

#include <Common/event_bus.h>
#include <Core/macros.h>
#include <Modloader/app/structs/MoonAnimation.h>

namespace core::api::moon_animator {
    namespace events {
        struct AnimationFinished {
            app::MoonAnimation* animation;
        };

        using bus_t = common::EventBus<AnimationFinished>;
    }

    CORE_DLLEXPORT events::bus_t& event_bus();
}

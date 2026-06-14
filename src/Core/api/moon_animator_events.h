#pragma once

#include <Common/event_bus.h>
#include <Core/macros.h>
#include <Modloader/app/structs/MoonAnimation.h>

namespace core::api::moon_animator {
    struct MoonAnimationEvent {
        enum class Type {
            Finished,
        };

        Type type;
        app::MoonAnimation* animation;
    };

    CORE_DLLEXPORT common::EventBus<const MoonAnimationEvent&>& animation_event_bus();
}

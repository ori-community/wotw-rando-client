#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WorldEventsRuntime.h>
#include <Modloader/app/structs/WorldEvents.h>

namespace app::classes::Game::World_Events {
    IL2CPP_REGISTER_METHOD(0x00687570, app::WorldEventsRuntime*, Find, (app::WorldEvents * world_events))
}

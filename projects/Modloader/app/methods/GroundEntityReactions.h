#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroundEntityReactions.h>
#include <Modloader/app/structs/EntityEvent.h>

namespace app::classes::GroundEntityReactions {
    IL2CPP_REGISTER_METHOD(0x010941D0, void, ProcessEntityEvent, (app::GroundEntityReactions * this_ptr, app::EntityEvent* event_info))
    IL2CPP_REGISTER_METHOD(0x00420B10, void, ctor, (app::GroundEntityReactions * this_ptr))
} // namespace app::classes::GroundEntityReactions

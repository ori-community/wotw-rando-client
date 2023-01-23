#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiderBatEntityReactions.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour.h>

namespace app::classes::SpiderBatEntityReactions {
    IL2CPP_REGISTER_METHOD(0x0095B870, void, ProcessEntityEvent, (app::SpiderBatEntityReactions * this_ptr, app::EntityEvent* event_info))
    IL2CPP_REGISTER_METHOD(0x0095BBB0, void, ExecuteReactionBehaviour, (app::SpiderBatEntityReactions * this_ptr, app::EntityReactionBehaviour* behaviour, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x00420B10, void, ctor, (app::SpiderBatEntityReactions * this_ptr))
} // namespace app::classes::SpiderBatEntityReactions

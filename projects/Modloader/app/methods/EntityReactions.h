#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityOwnedInitOrder__Enum.h>
#include <Modloader/app/structs/EntityReactions.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Array.h>

namespace app::classes::EntityReactions {
    IL2CPP_REGISTER_METHOD(0x00420230, app::EntityOwnedInitOrder__Enum, get_InitOrder, (app::EntityReactions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA0440, void, OnCacheSerializedComponents, (app::EntityReactions * this_ptr, app::Entity* owner))
    IL2CPP_REGISTER_METHOD(0x00CA0640, void, OnEntityInitialization, (app::EntityReactions * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAwake, (app::EntityReactions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA0840, void, Awake, (app::EntityReactions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA09A0, void, Update, (app::EntityReactions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA0A40, void, ProcessEntityEvent, (app::EntityReactions * this_ptr, app::EntityEvent* event_info))
    IL2CPP_REGISTER_METHOD(0x00CA0CF0, void, InterruptRunningReactions, (app::EntityReactions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA0E80, void, ExecuteReactionBehaviour, (app::EntityReactions * this_ptr, app::EntityReactionBehaviour* behaviour, app::EntityEvent* reaction_event))
    IL2CPP_REGISTER_METHOD(0x00CA10D0, bool, IsExecutingReactionBehaviour, (app::EntityReactions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA1210, app::EntityReactionBehaviour*, GetExecutingReactionBehaviour, (app::EntityReactions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA1350, bool, IsReactionInterruptionSupended, (app::EntityReactions * this_ptr, app::EntityReactionBehaviour* reaction))
    IL2CPP_REGISTER_METHOD(0x00CA1480, void, HandleReactionInterruptionSuspension, (app::EntityReactions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA16F0, void, RegisterReactionInterruptionSuspension, (app::EntityReactions * this_ptr, float duration, app::EntityReactionBehaviour__Array* reactions))
    IL2CPP_REGISTER_METHOD(0x00CA18C0, void, ctor, (app::EntityReactions * this_ptr))
} // namespace app::classes::EntityReactions

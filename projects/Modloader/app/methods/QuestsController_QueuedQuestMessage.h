#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/QuestsController_QueuedQuestMessage__Boxed.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/QuestsController_QuestMessageType__Enum.h>

namespace app::classes::QuestsController_QueuedQuestMessage {
    IL2CPP_REGISTER_METHOD(0x0011D2D0, void, ctor, (app::QuestsController_QueuedQuestMessage__Boxed * this_ptr, app::Quest* quest, app::QuestsController_QuestMessageType__Enum message_type))
}

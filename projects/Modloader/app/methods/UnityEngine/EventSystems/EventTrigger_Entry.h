#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventTrigger_Entry.h>

namespace app::classes::UnityEngine::EventSystems::EventTrigger_Entry {
    IL2CPP_REGISTER_METHOD(0x01F1E330, void, ctor, (app::EventTrigger_Entry * this_ptr))
}

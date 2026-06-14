#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/EventHandlerList_ListEntry.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::EventHandlerList_ListEntry {
    IL2CPP_REGISTER_METHOD(
        0x01FECA50,
        void,
        ctor,
        app::EventHandlerList_ListEntry* this_ptr,
        app::Object* key,
        app::Delegate* handler,
        app::EventHandlerList_ListEntry* next
    )
}

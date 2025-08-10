#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs_.h>
#include <Modloader/app/structs/EventSourceCreatedEventArgs.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs_ {
    IL2CPP_REGISTER_METHOD(
        0x015FE410,
        void,
        Invoke,
        app::EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs_* this_ptr,
        app::Object* sender,
        app::EventSourceCreatedEventArgs* e
    )
}

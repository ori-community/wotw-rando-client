#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnobservedTaskExceptionEventArgs.h>

namespace app::classes::System::EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs_ {
    IL2CPP_REGISTER_METHOD(
        0x015FE410,
        void,
        Invoke,
        app::EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs_* this_ptr,
        app::Object* sender,
        app::UnobservedTaskExceptionEventArgs* e
    )
}

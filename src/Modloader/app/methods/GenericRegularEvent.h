#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DatadogEvent.h>
#include <Modloader/app/structs/GenericRegularEvent.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::GenericRegularEvent {
    IL2CPP_REGISTER_METHOD(
        0x02E91620,
        void,
        ctor,
        app::GenericRegularEvent* this_ptr,
        app::String* message,
        app::String* stacktrace,
        app::String* group,
        app::LogType__Enum log_type
    )
    IL2CPP_REGISTER_METHOD(0x02E91640, app::DatadogEvent*, GetCompatibleEvent, app::GenericRegularEvent* this_ptr)
} // namespace app::classes::GenericRegularEvent

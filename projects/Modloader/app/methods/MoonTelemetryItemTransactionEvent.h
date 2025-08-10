#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/MoonTelemetryItemTransactionEvent.h>
#include <Modloader/app/structs/MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryItemTransactionEvent {
    IL2CPP_REGISTER_METHOD(
        0x0146F430,
        void,
        ctor,
        app::MoonTelemetryItemTransactionEvent* this_ptr,
        app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum item_i_d
    )
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String*, get_Name, app::MoonTelemetryItemTransactionEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0146F510, void, SerializeToObject, app::MoonTelemetryItemTransactionEvent* this_ptr, app::JsonBuilder_Object obj)
} // namespace app::classes::MoonTelemetryItemTransactionEvent

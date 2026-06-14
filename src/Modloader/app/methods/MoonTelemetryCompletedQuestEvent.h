#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/MoonTelemetryCompletedQuestEvent.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryCompletedQuestEvent {
    IL2CPP_REGISTER_METHOD(0x0146D940, void, ctor, app::MoonTelemetryCompletedQuestEvent* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String*, get_Name, app::MoonTelemetryCompletedQuestEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0146DA60, void, SerializeToObject, app::MoonTelemetryCompletedQuestEvent* this_ptr, app::JsonBuilder_Object obj)
} // namespace app::classes::MoonTelemetryCompletedQuestEvent

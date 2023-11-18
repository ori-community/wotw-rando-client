#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetryAssignQuestEvent.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryAssignQuestEvent {
    IL2CPP_REGISTER_METHOD(0x01466940, void, ctor, (app::MoonTelemetryAssignQuestEvent * this_ptr, app::Quest* quest))
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String*, get_Name, (app::MoonTelemetryAssignQuestEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01466A50, void, SerializeToObject, (app::MoonTelemetryAssignQuestEvent * this_ptr, app::JsonBuilder_Object obj))
} // namespace app::classes::MoonTelemetryAssignQuestEvent

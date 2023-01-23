#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventDataAttribute.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventTags__Enum.h>

namespace app::classes::System::Diagnostics::Tracing::EventDataAttribute {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, (app::EventDataAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::EventLevel__Enum, get_Level, (app::EventDataAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::EventOpcode__Enum, get_Opcode, (app::EventDataAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::EventKeywords__Enum, get_Keywords, (app::EventDataAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB970, app::EventTags__Enum, get_Tags, (app::EventDataAttribute * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EventDataAttribute

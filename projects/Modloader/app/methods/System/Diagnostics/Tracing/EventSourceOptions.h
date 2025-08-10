#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventSourceOptions__Boxed.h>

namespace app::classes::System::Diagnostics::Tracing::EventSourceOptions {
    IL2CPP_REGISTER_METHOD(0x00154C80, void, set_Level, app::EventSourceOptions__Boxed* this_ptr, app::EventLevel__Enum value)
    IL2CPP_REGISTER_METHOD(0x00154C90, void, set_Opcode, app::EventSourceOptions__Boxed* this_ptr, app::EventOpcode__Enum value)
    IL2CPP_REGISTER_METHOD(0x00154CA0, void, set_Keywords, app::EventSourceOptions__Boxed* this_ptr, app::EventKeywords__Enum value)
} // namespace app::classes::System::Diagnostics::Tracing::EventSourceOptions

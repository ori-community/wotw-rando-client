#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::EventCommandEventArgs {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::EventCommand__Enum, get_Command, (app::EventCommandEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Command, (app::EventCommandEventArgs * this_ptr, app::EventCommand__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IDictionary_2_System_String_System_String_*, get_Arguments, (app::EventCommandEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Arguments, (app::EventCommandEventArgs * this_ptr, app::IDictionary_2_System_String_System_String_* value))
    IL2CPP_REGISTER_METHOD(0x0174A9F0, void, ctor, (app::EventCommandEventArgs * this_ptr, app::EventCommand__Enum command, app::IDictionary_2_System_String_System_String_* arguments, app::EventSource* event_source, app::EventListener* listener, int32_t per_event_source_session_id, int32_t etw_session_id, bool enable, app::EventLevel__Enum level, app::EventKeywords__Enum match_any_keyword))
} // namespace app::classes::System::Diagnostics::Tracing::EventCommandEventArgs

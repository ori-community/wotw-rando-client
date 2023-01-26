#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___Boxed.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags_ {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::String*, get_Key, (app::KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A860, app::EventTags__Enum, get_Value, (app::KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011D2D0, void, ctor, (app::KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___Boxed * this_ptr, app::String* key, app::EventTags__Enum value))
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags_

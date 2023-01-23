#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NameInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags_.h>

namespace app::classes::System::Diagnostics::Tracing::NameInfo {
    IL2CPP_REGISTER_METHOD(0x01A06D30, void, ReserveEventIDsBelow, (int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x01A06E30, void, ctor, (app::NameInfo_1 * this_ptr, app::String* name, app::EventTags__Enum tags, int32_t type_metadata_size))
    IL2CPP_REGISTER_METHOD(0x01A06FF0, int32_t, Compare_1, (app::NameInfo_1 * this_ptr, app::NameInfo_1* other))
    IL2CPP_REGISTER_METHOD(0x01A07020, int32_t, Compare_2, (app::NameInfo_1 * this_ptr, app::KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags_ key))
    IL2CPP_REGISTER_METHOD(0x01A070C0, int32_t, Compare_3, (app::NameInfo_1 * this_ptr, app::String* other_name, app::EventTags__Enum other_tags))
    IL2CPP_REGISTER_METHOD(0x01A071B0, void, cctor, ())
} // namespace app::classes::System::Diagnostics::Tracing::NameInfo

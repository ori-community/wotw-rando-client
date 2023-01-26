#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TraceLoggingEventTypes.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#include <Modloader/app/structs/NameInfo_1.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo__Array.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingEventTypes {
    IL2CPP_REGISTER_METHOD(0x01A0B7B0, void, ctor_1, (app::TraceLoggingEventTypes * this_ptr, app::String* name, app::EventTags__Enum tags, app::Type__Array* types))
    IL2CPP_REGISTER_METHOD(0x01A0B800, void, ctor_2, (app::TraceLoggingEventTypes * this_ptr, app::String* name, app::EventTags__Enum tags, app::ParameterInfo_1__Array* param_infos))
    IL2CPP_REGISTER_METHOD(0x01A0BBA0, void, ctor_3, (app::TraceLoggingEventTypes * this_ptr, app::EventTags__Enum tags, app::String* default_name, app::TraceLoggingTypeInfo__Array* type_infos))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, (app::TraceLoggingEventTypes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::EventTags__Enum, get_Tags, (app::TraceLoggingEventTypes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0BE80, app::NameInfo_1*, GetNameInfo, (app::TraceLoggingEventTypes * this_ptr, app::String* name, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x01A0C050, app::TraceLoggingTypeInfo__Array*, MakeArray_1, (app::TraceLoggingEventTypes * this_ptr, app::ParameterInfo_1__Array* param_infos))
    IL2CPP_REGISTER_METHOD(0x01A0C2C0, app::TraceLoggingTypeInfo__Array*, MakeArray_2, (app::Type__Array * types))
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingEventTypes

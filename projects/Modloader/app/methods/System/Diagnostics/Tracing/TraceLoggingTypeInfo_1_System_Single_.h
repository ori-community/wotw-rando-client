#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Single_.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x028771B0, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02877280, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_Single_ * this_ptr, app::String* name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_Single_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x028773A0, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_Single_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02877450, app::TraceLoggingTypeInfo_1_System_Single_*, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x02877640, app::TraceLoggingTypeInfo_1_System_Single_*, InitInstance, ())
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Single_

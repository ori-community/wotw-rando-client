#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Double_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/List_1_System_Type_.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x02874420, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_Double_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471FD10, TraceLoggingTypeInfo_1_System_Double___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028744F0, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_Double_ * this_ptr, app::String* name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_Double_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02874610, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_Double_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x028746C0, app::TraceLoggingTypeInfo_1_System_Double_*, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x028748B0, app::TraceLoggingTypeInfo_1_System_Double_*, InitInstance, ())
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Double_

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Int16_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/List_1_System_Type_.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Int16_ {
    IL2CPP_REGISTER_METHOD(0x02874FB0, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_Int16_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B018, TraceLoggingTypeInfo_1_System_Int16___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02875080, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_Int16_ * this_ptr, app::String* name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_Int16_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02872350, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_Int16_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x028751A0, app::TraceLoggingTypeInfo_1_System_Int16_*, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x02875390, app::TraceLoggingTypeInfo_1_System_Int16_*, InitInstance, ())
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Int16_

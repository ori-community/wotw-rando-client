#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_Object__1*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02876620, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_Object__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028766F0, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_Object__1 * this_ptr, app::String* name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02876810, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_Object__1 * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x028768C0, app::TraceLoggingTypeInfo_1_System_Object__1*, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x02876AB0, app::TraceLoggingTypeInfo_1_System_Object__1*, InitInstance, ())
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Object_

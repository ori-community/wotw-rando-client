#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(0x02872780, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02872850, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::String* name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_Collections_Generic_KeyValuePair_2_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02872970, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02872A30, app::TraceLoggingTypeInfo_1_System_Collections_Generic_KeyValuePair_2_*, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x02872C20, app::TraceLoggingTypeInfo_1_System_Collections_Generic_KeyValuePair_2_*, InitInstance, ())
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Collections_Generic_KeyValuePair_2_

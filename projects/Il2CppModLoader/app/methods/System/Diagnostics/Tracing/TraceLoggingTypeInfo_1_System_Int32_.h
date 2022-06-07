#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02875520, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776B80, TraceLoggingTypeInfo_1_System_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_Int32_ *, get_Instance, ())
    IL2CPP_REGISTER_METHODINFO(0x04761F60, TraceLoggingTypeInfo_1_System_Int32__get_Instance__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028755F0, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_Int32_ * this_ptr, app::String * name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02875710, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_Int32_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x028757C0, app::TraceLoggingTypeInfo_1_System_Int32_ *, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x028759B0, app::TraceLoggingTypeInfo_1_System_Int32_ *, InitInstance, ())
}

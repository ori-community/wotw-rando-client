#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A0DB40, void, ctor_1, (app::TraceLoggingTypeInfo * this_ptr, app::Type * data_type))
    IL2CPP_REGISTER_METHODINFO(0x04748D78, TraceLoggingTypeInfo__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A0DC40, void, ctor_2, (app::TraceLoggingTypeInfo * this_ptr, app::Type * data_type, app::String * name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHODINFO(0x047521C8, TraceLoggingTypeInfo__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Name, (app::TraceLoggingTypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::EventLevel__Enum, get_Level, (app::TraceLoggingTypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E80, app::EventOpcode__Enum, get_Opcode, (app::TraceLoggingTypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::EventKeywords__Enum, get_Keywords, (app::TraceLoggingTypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB970, app::EventTags__Enum, get_Tags, (app::TraceLoggingTypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Type *, get_DataType, (app::TraceLoggingTypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::TraceLoggingTypeInfo * this_ptr, app::Object * value))
}

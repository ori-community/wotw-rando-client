#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::EnumInt16TypeInfo_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02F49FC0, void, WriteMetadata, (app::EnumInt16TypeInfo_1_System_Int32_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02F4A090, void, WriteData, (app::EnumInt16TypeInfo_1_System_Int32_ * this_ptr, app::TraceLoggingDataCollector* collector, int32_t* value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumInt16TypeInfo_1_System_Int32_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumInt16TypeInfo_1_System_Int32_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumInt16TypeInfo_1_System_Int32_

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::EnumInt32TypeInfo_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x02F4B410, void, WriteMetadata, (app::EnumInt32TypeInfo_1_System_Byte_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02F4B4E0, void, WriteData, (app::EnumInt32TypeInfo_1_System_Byte_ * this_ptr, app::TraceLoggingDataCollector* collector, uint8_t* value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumInt32TypeInfo_1_System_Byte_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumInt32TypeInfo_1_System_Byte_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumInt32TypeInfo_1_System_Byte_

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::EnumByteTypeInfo_1_EmptyStruct_ {
    IL2CPP_REGISTER_METHOD(0x02B3F960, void, WriteMetadata, (app::EnumByteTypeInfo_1_EmptyStruct_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B3FA30, void, WriteData, (app::EnumByteTypeInfo_1_EmptyStruct_ * this_ptr, app::TraceLoggingDataCollector* collector, app::EmptyStruct* value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumByteTypeInfo_1_EmptyStruct_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumByteTypeInfo_1_EmptyStruct_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumByteTypeInfo_1_EmptyStruct_

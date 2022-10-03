#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::EnumInt16TypeInfo_1_EmptyStruct_ {
    IL2CPP_REGISTER_METHOD(0x02F498E0, void, WriteMetadata, (app::EnumInt16TypeInfo_1_EmptyStruct_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02F499B0, void, WriteData, (app::EnumInt16TypeInfo_1_EmptyStruct_ * this_ptr, app::TraceLoggingDataCollector* collector, app::EmptyStruct* value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumInt16TypeInfo_1_EmptyStruct_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumInt16TypeInfo_1_EmptyStruct_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumInt16TypeInfo_1_EmptyStruct_

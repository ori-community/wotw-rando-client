#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumUInt16TypeInfo_1_System_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x02B937B0, void, WriteMetadata, (app::EnumUInt16TypeInfo_1_System_UInt64_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B93880, void, WriteData, (app::EnumUInt16TypeInfo_1_System_UInt64_ * this_ptr, app::TraceLoggingDataCollector * collector, uint64_t * value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumUInt16TypeInfo_1_System_UInt64_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumUInt16TypeInfo_1_System_UInt64_ * this_ptr))
}

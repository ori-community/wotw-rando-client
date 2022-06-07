#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumUInt16TypeInfo_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B92870, void, WriteMetadata, (app::EnumUInt16TypeInfo_1_System_Int32_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B92940, void, WriteData, (app::EnumUInt16TypeInfo_1_System_Int32_ * this_ptr, app::TraceLoggingDataCollector * collector, int32_t * value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumUInt16TypeInfo_1_System_Int32_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumUInt16TypeInfo_1_System_Int32_ * this_ptr))
}

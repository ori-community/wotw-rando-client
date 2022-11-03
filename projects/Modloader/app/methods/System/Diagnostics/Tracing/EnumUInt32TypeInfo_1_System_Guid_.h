#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::EnumUInt32TypeInfo_1_System_Guid_ {
    IL2CPP_REGISTER_METHOD(0x02B94A70, void, WriteMetadata, (app::EnumUInt32TypeInfo_1_System_Guid_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B94B40, void, WriteData, (app::EnumUInt32TypeInfo_1_System_Guid_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Guid* value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumUInt32TypeInfo_1_System_Guid_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumUInt32TypeInfo_1_System_Guid_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumUInt32TypeInfo_1_System_Guid_

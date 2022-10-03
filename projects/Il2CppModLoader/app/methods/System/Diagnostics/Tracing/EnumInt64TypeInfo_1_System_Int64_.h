#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::EnumInt64TypeInfo_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x02F4EC50, void, WriteMetadata, (app::EnumInt64TypeInfo_1_System_Int64_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02F4ED20, void, WriteData, (app::EnumInt64TypeInfo_1_System_Int64_ * this_ptr, app::TraceLoggingDataCollector* collector, int64_t* value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumInt64TypeInfo_1_System_Int64_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumInt64TypeInfo_1_System_Int64_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumInt64TypeInfo_1_System_Int64_

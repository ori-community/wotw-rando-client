#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::EnumByteTypeInfo_1_System_IntPtr_ {
    IL2CPP_REGISTER_METHOD(0x02B403A0, void, WriteMetadata, (app::EnumByteTypeInfo_1_System_IntPtr_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B40470, void, WriteData, (app::EnumByteTypeInfo_1_System_IntPtr_ * this_ptr, app::TraceLoggingDataCollector* collector, app::void** value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumByteTypeInfo_1_System_IntPtr_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumByteTypeInfo_1_System_IntPtr_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumByteTypeInfo_1_System_IntPtr_

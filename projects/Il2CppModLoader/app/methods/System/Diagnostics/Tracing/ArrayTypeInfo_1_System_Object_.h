#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ArrayTypeInfo_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B985F0, void, WriteMetadata, (app::ArrayTypeInfo_1_System_Object_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02FBAE20, void, WriteData, (app::ArrayTypeInfo_1_System_Object_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object__Array * * value))
    IL2CPP_REGISTER_METHOD(0x02FBAF10, app::Object *, GetData, (app::ArrayTypeInfo_1_System_Object_ * this_ptr, app::Object * value))
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumerableTypeInfo_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B985F0, void, WriteMetadata, (app::EnumerableTypeInfo_2_System_Object_System_Object_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B98680, void, WriteData, (app::EnumerableTypeInfo_2_System_Object_System_Object_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object * * value))
    IL2CPP_REGISTER_METHOD(0x02B98920, app::Object *, GetData, (app::EnumerableTypeInfo_2_System_Object_System_Object_ * this_ptr, app::Object * value))
}

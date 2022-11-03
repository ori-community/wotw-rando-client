#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::InvokeTypeInfo_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02B98CC0, void, ctor, (app::InvokeTypeInfo_1_System_Single_ * this_ptr, app::TypeAnalysis* type_analysis))
    IL2CPP_REGISTER_METHOD(0x02B98E80, void, WriteMetadata, (app::InvokeTypeInfo_1_System_Single_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B98F50, void, WriteData, (app::InvokeTypeInfo_1_System_Single_ * this_ptr, app::TraceLoggingDataCollector* collector, float* value))
    IL2CPP_REGISTER_METHOD(0x02B9E7E0, app::Object*, GetData, (app::InvokeTypeInfo_1_System_Single_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02B9ED10, void, WriteObjectData, (app::InvokeTypeInfo_1_System_Single_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value_obj))
} // namespace app::classes::System::Diagnostics::Tracing::InvokeTypeInfo_1_System_Single_

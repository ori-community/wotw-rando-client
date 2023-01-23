#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NullTypeInfo_1_System_Object_.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::NullTypeInfo_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02BA16B0, void, WriteMetadata, (app::NullTypeInfo_1_System_Object_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteData, (app::NullTypeInfo_1_System_Object_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object** value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, GetData, (app::NullTypeInfo_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01CFFD20, void, ctor, (app::NullTypeInfo_1_System_Object_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::NullTypeInfo_1_System_Object_

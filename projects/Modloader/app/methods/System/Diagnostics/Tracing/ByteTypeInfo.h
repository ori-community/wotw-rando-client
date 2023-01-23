#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ByteTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::ByteTypeInfo {
    IL2CPP_REGISTER_METHOD(0x017479F0, void, WriteMetadata, (app::ByteTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01747AC0, void, WriteData, (app::ByteTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, uint8_t* value))
    IL2CPP_REGISTER_METHOD(0x01747AF0, void, ctor, (app::ByteTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::ByteTypeInfo

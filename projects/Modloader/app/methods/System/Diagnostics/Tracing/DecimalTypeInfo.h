#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DecimalTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Decimal.h>

namespace app::classes::System::Diagnostics::Tracing::DecimalTypeInfo {
    IL2CPP_REGISTER_METHOD(0x017491A0, void, WriteMetadata, (app::DecimalTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01749270, void, WriteData, (app::DecimalTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::Decimal* value))
    IL2CPP_REGISTER_METHOD(0x01749350, void, ctor, (app::DecimalTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::DecimalTypeInfo

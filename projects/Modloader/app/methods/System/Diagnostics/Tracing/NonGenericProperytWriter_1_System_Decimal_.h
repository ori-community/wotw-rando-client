#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NonGenericProperytWriter_1_System_Decimal_.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Decimal_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_Decimal_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02BA0EF0, void, Write, (app::NonGenericProperytWriter_1_System_Decimal_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Decimal* container))
    IL2CPP_REGISTER_METHOD(0x02BA0FC0, app::Object*, GetData, (app::NonGenericProperytWriter_1_System_Decimal_ * this_ptr, app::Decimal container))
} // namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Decimal_

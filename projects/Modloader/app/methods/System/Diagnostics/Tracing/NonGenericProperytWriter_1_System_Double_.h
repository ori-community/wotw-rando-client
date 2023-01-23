#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NonGenericProperytWriter_1_System_Double_.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_Double_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02BA11B0, void, Write, (app::NonGenericProperytWriter_1_System_Double_ * this_ptr, app::TraceLoggingDataCollector* collector, double* container))
    IL2CPP_REGISTER_METHOD(0x02BA1280, app::Object*, GetData, (app::NonGenericProperytWriter_1_System_Double_ * this_ptr, double container))
} // namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Double_

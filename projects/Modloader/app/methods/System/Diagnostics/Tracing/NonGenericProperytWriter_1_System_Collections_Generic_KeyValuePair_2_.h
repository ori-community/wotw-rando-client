#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NonGenericProperytWriter_1_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02BA0EF0, void, Write, (app::NonGenericProperytWriter_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::TraceLoggingDataCollector* collector, app::KeyValuePair_2_System_Object_System_Object_* container))
    IL2CPP_REGISTER_METHOD(0x02BA0FC0, app::Object*, GetData, (app::NonGenericProperytWriter_1_System_Collections_Generic_KeyValuePair_2_ * this_ptr, app::KeyValuePair_2_System_Object_System_Object_ container))
} // namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Collections_Generic_KeyValuePair_2_

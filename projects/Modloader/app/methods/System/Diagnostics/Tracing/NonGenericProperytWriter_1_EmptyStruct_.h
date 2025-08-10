#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EmptyStruct.h>
#include <Modloader/app/structs/NonGenericProperytWriter_1_EmptyStruct_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_EmptyStruct_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, app::NonGenericProperytWriter_1_EmptyStruct_* this_ptr, app::PropertyAnalysis* property)
    IL2CPP_REGISTER_METHOD(
        0x02BA0C30,
        void,
        Write,
        app::NonGenericProperytWriter_1_EmptyStruct_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        app::EmptyStruct* container
    )
    IL2CPP_REGISTER_METHOD(0x02BA0D00, app::Object*, GetData, app::NonGenericProperytWriter_1_EmptyStruct_* this_ptr, app::EmptyStruct container)
} // namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_EmptyStruct_

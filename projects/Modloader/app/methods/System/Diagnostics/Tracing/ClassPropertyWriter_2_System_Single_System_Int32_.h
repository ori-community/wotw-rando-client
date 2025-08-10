#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClassPropertyWriter_2_System_Single_System_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Single_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B3C650, void, ctor, app::ClassPropertyWriter_2_System_Single_System_Int32_* this_ptr, app::PropertyAnalysis* property)
    IL2CPP_REGISTER_METHOD(
        0x02B3C840,
        void,
        Write,
        app::ClassPropertyWriter_2_System_Single_System_Int32_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        float* container
    )
    IL2CPP_REGISTER_METHOD(0x02B3C8C0, app::Object*, GetData, app::ClassPropertyWriter_2_System_Single_System_Int32_* this_ptr, float container)
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Single_System_Int32_

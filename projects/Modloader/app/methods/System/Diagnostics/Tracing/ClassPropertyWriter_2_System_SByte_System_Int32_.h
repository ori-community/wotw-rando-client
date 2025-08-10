#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClassPropertyWriter_2_System_SByte_System_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_SByte_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B3C080, void, ctor, app::ClassPropertyWriter_2_System_SByte_System_Int32_* this_ptr, app::PropertyAnalysis* property)
    IL2CPP_REGISTER_METHOD(
        0x02B35D60,
        void,
        Write,
        app::ClassPropertyWriter_2_System_SByte_System_Int32_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        int8_t* container
    )
    IL2CPP_REGISTER_METHOD(0x02B35DE0, app::Object*, GetData, app::ClassPropertyWriter_2_System_SByte_System_Int32_* this_ptr, int8_t container)
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_SByte_System_Int32_

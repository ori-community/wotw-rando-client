#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClassPropertyWriter_2_System_Byte_System_Int64_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Byte_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x02B36510, void, ctor, app::ClassPropertyWriter_2_System_Byte_System_Int64_* this_ptr, app::PropertyAnalysis* property)
    IL2CPP_REGISTER_METHOD(
        0x02B36040,
        void,
        Write,
        app::ClassPropertyWriter_2_System_Byte_System_Int64_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        uint8_t* container
    )
    IL2CPP_REGISTER_METHOD(0x02B360C0, app::Object*, GetData, app::ClassPropertyWriter_2_System_Byte_System_Int64_* this_ptr, uint8_t container)
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Byte_System_Int64_

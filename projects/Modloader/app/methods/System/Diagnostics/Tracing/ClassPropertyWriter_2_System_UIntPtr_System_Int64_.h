#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClassPropertyWriter_2_System_UIntPtr_System_Int64_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_UIntPtr_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x02B3E6C0, void, ctor, (app::ClassPropertyWriter_2_System_UIntPtr_System_Int64_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02B3B030, void, Write, (app::ClassPropertyWriter_2_System_UIntPtr_System_Int64_ * this_ptr, app::TraceLoggingDataCollector* collector, void** container))
    IL2CPP_REGISTER_METHOD(0x02B360C0, app::Object*, GetData, (app::ClassPropertyWriter_2_System_UIntPtr_System_Int64_ * this_ptr, void* container))
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_UIntPtr_System_Int64_

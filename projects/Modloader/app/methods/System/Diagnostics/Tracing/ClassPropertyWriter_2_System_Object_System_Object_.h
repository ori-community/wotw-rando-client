#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClassPropertyWriter_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B3BE50, void, ctor, (app::ClassPropertyWriter_2_System_Object_System_Object_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02B3BD50, void, Write, (app::ClassPropertyWriter_2_System_Object_System_Object_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object** container))
    IL2CPP_REGISTER_METHOD(0x02B3C040, app::Object*, GetData, (app::ClassPropertyWriter_2_System_Object_System_Object_ * this_ptr, app::Object* container))
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Object_System_Object_

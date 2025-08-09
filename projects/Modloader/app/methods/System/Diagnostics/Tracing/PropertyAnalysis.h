#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventFieldAttribute.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo.h>

namespace app::classes::System::Diagnostics::Tracing::PropertyAnalysis {
    IL2CPP_REGISTER_METHOD(
        0x0058D710,
        void,
        ctor,
        app::PropertyAnalysis* this_ptr,
        app::String* name,
        app::MethodInfo_1* getter_info,
        app::TraceLoggingTypeInfo* type_info,
        app::EventFieldAttribute* field_attribute
    )
}

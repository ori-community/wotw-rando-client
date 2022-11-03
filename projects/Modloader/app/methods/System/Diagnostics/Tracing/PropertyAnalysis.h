#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::PropertyAnalysis {
    IL2CPP_REGISTER_METHOD(0x0058D710, void, ctor, (app::PropertyAnalysis * this_ptr, app::String* name, app::MethodInfo_1* getter_info, app::TraceLoggingTypeInfo* type_info, app::EventFieldAttribute* field_attribute))
}

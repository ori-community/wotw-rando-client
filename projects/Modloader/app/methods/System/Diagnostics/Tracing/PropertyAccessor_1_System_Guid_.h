#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PropertyAccessor_1_System_Guid_.h>
#include <Modloader/app/structs/PropertyAnalysis.h>

namespace app::classes::System::Diagnostics::Tracing::PropertyAccessor_1_System_Guid_ {
    IL2CPP_REGISTER_METHOD(0x0286BD60, app::PropertyAccessor_1_System_Guid_*, Create, (app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::PropertyAccessor_1_System_Guid_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::PropertyAccessor_1_System_Guid_

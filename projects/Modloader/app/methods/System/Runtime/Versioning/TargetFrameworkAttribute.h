#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Versioning::TargetFrameworkAttribute {
    IL2CPP_REGISTER_METHOD(0x01EE21A0, void, ctor, (app::TargetFrameworkAttribute * this_ptr, app::String* framework_name))
    IL2CPP_REGISTER_METHODINFO(0x04761F48, TargetFrameworkAttribute__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_FrameworkDisplayName, (app::TargetFrameworkAttribute * this_ptr, app::String* value))
} // namespace app::classes::System::Runtime::Versioning::TargetFrameworkAttribute

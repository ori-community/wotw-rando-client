#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::TypeForwardedFromAttribute {
    IL2CPP_REGISTER_METHOD(0x01A93160, void, ctor, (app::TypeForwardedFromAttribute * this_ptr, app::String* assembly_full_name))
    IL2CPP_REGISTER_METHODINFO(0x0475B2C8, TypeForwardedFromAttribute__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_AssemblyFullName, (app::TypeForwardedFromAttribute * this_ptr))
} // namespace app::classes::System::Runtime::CompilerServices::TypeForwardedFromAttribute

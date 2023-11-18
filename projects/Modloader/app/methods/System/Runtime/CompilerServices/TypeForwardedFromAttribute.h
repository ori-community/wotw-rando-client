#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TypeForwardedFromAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::CompilerServices::TypeForwardedFromAttribute {
    IL2CPP_REGISTER_METHOD(0x01A93160, void, ctor, (app::TypeForwardedFromAttribute * this_ptr, app::String* assembly_full_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_AssemblyFullName, (app::TypeForwardedFromAttribute * this_ptr))
} // namespace app::classes::System::Runtime::CompilerServices::TypeForwardedFromAttribute

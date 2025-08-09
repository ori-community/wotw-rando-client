#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssemblyConfigurationAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::AssemblyConfigurationAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::AssemblyConfigurationAttribute* this_ptr, app::String* configuration)
}

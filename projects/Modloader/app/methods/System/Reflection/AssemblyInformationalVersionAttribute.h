#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AssemblyInformationalVersionAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::AssemblyInformationalVersionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::AssemblyInformationalVersionAttribute * this_ptr, app::String* informational_version))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssemblyFileVersionAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::AssemblyFileVersionAttribute {
    IL2CPP_REGISTER_METHOD(0x022839E0, void, ctor, app::AssemblyFileVersionAttribute* this_ptr, app::String* version)
}

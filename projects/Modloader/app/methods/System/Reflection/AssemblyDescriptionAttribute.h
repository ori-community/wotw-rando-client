#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AssemblyDescriptionAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::AssemblyDescriptionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::AssemblyDescriptionAttribute * this_ptr, app::String* description))
}

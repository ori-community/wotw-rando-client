#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssemblyTitleAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::AssemblyTitleAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::AssemblyTitleAttribute* this_ptr, app::String* title)
}

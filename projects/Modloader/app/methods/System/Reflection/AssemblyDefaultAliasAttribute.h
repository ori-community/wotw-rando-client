#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssemblyDefaultAliasAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::AssemblyDefaultAliasAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::AssemblyDefaultAliasAttribute* this_ptr, app::String* default_alias)
}

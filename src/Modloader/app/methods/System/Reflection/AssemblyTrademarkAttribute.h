#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssemblyTrademarkAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::AssemblyTrademarkAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::AssemblyTrademarkAttribute* this_ptr, app::String* trademark)
}

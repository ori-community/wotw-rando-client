#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ComDefaultInterfaceAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::InteropServices::ComDefaultInterfaceAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ComDefaultInterfaceAttribute * this_ptr, app::Type* default_interface))
}

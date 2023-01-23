#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InterfaceTypeAttribute.h>
#include <Modloader/app/structs/ComInterfaceType__Enum.h>

namespace app::classes::System::Runtime::InteropServices::InterfaceTypeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::InterfaceTypeAttribute * this_ptr, app::ComInterfaceType__Enum interface_type))
}

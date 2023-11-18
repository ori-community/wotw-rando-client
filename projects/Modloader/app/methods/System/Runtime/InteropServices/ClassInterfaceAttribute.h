#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClassInterfaceAttribute.h>
#include <Modloader/app/structs/ClassInterfaceType__Enum.h>

namespace app::classes::System::Runtime::InteropServices::ClassInterfaceAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::ClassInterfaceAttribute * this_ptr, app::ClassInterfaceType__Enum class_interface_type))
}

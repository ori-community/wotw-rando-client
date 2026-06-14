#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallingConvention__Enum.h>
#include <Modloader/app/structs/UnmanagedFunctionPointerAttribute.h>

namespace app::classes::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::UnmanagedFunctionPointerAttribute* this_ptr, app::CallingConvention__Enum calling_convention)
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandString.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Microsoft::Win32::ExpandString {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::ExpandString* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, ToString, app::ExpandString* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AE610, app::String*, Expand, app::ExpandString* this_ptr)
} // namespace app::classes::Microsoft::Win32::ExpandString

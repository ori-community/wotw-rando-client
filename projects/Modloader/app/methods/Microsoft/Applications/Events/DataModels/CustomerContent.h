#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CustomerContentKind__Enum.h>
#include <Modloader/app/structs/CustomerContent.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::CustomerContent {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::CustomerContentKind__Enum, get_Kind, (app::CustomerContent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Kind, (app::CustomerContent * this_ptr, app::CustomerContentKind__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FC6F0, void, ctor_1, (app::CustomerContent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC780, void, ctor_2, (app::CustomerContent * this_ptr, app::String* full_name, app::String* name))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::CustomerContent

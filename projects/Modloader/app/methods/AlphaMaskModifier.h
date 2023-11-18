#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AlphaMaskModifier.h>

namespace app::classes::AlphaMaskModifier {
    IL2CPP_REGISTER_METHOD(0x004F5F70, void, SetProperties, (app::AlphaMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F6110, void, ctor, (app::AlphaMaskModifier * this_ptr))
} // namespace app::classes::AlphaMaskModifier

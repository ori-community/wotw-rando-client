#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TextGlowModifier {
    IL2CPP_REGISTER_METHOD(0x010E7EE0, void, SetProperties, (app::TextGlowModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E7FD0, void, ctor, (app::TextGlowModifier * this_ptr))
} // namespace app::classes::TextGlowModifier

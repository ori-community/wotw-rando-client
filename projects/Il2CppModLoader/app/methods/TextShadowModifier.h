#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TextShadowModifier {
    IL2CPP_REGISTER_METHOD(0x010E8820, void, SetProperties, (app::TextShadowModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8930, void, ctor, (app::TextShadowModifier * this_ptr))
}

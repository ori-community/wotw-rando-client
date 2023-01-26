#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextShadowModifier.h>

namespace app::classes::TextShadowModifier {
    IL2CPP_REGISTER_METHOD(0x010E8820, void, SetProperties, (app::TextShadowModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8930, void, ctor, (app::TextShadowModifier * this_ptr))
} // namespace app::classes::TextShadowModifier

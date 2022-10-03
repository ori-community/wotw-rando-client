#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TextureOffsetModifier {
    IL2CPP_REGISTER_METHOD(0x010EBBC0, void, Awake, (app::TextureOffsetModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EBE90, void, Update, (app::TextureOffsetModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010EC550, void, ctor, (app::TextureOffsetModifier * this_ptr))
} // namespace app::classes::TextureOffsetModifier

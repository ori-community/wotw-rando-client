#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextureAnimationGUIText.h>

namespace app::classes::TextureAnimationGUIText {
    IL2CPP_REGISTER_METHOD(0x010E9DC0, void, Update, (app::TextureAnimationGUIText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TextureAnimationGUIText * this_ptr))
} // namespace app::classes::TextureAnimationGUIText

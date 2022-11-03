#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NPCMessageBoxModifier {
    IL2CPP_REGISTER_METHOD(0x00881C70, void, HideHideables, (app::NPCMessageBoxModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00881D30, void, ShowHideables, (app::NPCMessageBoxModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NPCMessageBoxModifier * this_ptr))
} // namespace app::classes::NPCMessageBoxModifier

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityHighlightLogic.h>

namespace app::classes::EntityHighlightLogic {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, app::EntityHighlightLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, app::EntityHighlightLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C92950, void, SetToBashHighlight, app::EntityHighlightLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C92B90, void, SetToSpiritFlame, app::EntityHighlightLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetToChargeDash, app::EntityHighlightLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C92DD0, void, SetToSpiritSlash, app::EntityHighlightLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::EntityHighlightLogic* this_ptr)
} // namespace app::classes::EntityHighlightLogic

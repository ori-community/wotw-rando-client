#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityHighlightColor.h>

namespace app::classes::EntityHighlightColor {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C91ED0, void, OnEnable, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C92070, void, OnDisable, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C92290, void, Reset, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C922F0, void, SetToBashHighlight, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C92350, void, SetToSpiritFlame, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C923B0, void, SetToChargeDash, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C92410, void, SetToSpiritSlash, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsInScene, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsInScene, (app::EntityHighlightColor * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00C92470, void, Start, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C92290, void, OnRestoreCheckpoint, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047925F0, EntityHighlightColor_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C92630, void, Update, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C92750, void, OnAfterDeserialize, (app::EntityHighlightColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C928A0, void, ctor, (app::EntityHighlightColor * this_ptr))
} // namespace app::classes::EntityHighlightColor

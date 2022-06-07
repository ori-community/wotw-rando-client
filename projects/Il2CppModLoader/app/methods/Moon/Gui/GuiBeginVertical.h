#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Gui::GuiBeginVertical {
    IL2CPP_REGISTER_METHOD(0x019894C0, void, ctor_1, (app::GuiBeginVertical * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01989540, void, ctor_2, (app::GuiBeginVertical * this_ptr, app::GUILayoutOption__Array * layout_options))
    IL2CPP_REGISTER_METHOD(0x01989550, void, ctor_3, (app::GuiBeginVertical * this_ptr, app::GUIStyle * gui_style, app::GUILayoutOption__Array * layout_options))
    IL2CPP_REGISTER_METHOD(0x01989610, void, Dispose, (app::GuiBeginVertical * this_ptr))
}

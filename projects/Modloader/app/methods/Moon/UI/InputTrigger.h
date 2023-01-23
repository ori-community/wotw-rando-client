#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_UI_InputInfo_.h>
#include <Modloader/app/structs/InputTrigger.h>

namespace app::classes::Moon::UI::InputTrigger {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_Moon_UI_InputInfo_*, get_Triggers, (app::InputTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D25060, void, ctor, (app::InputTrigger * this_ptr))
} // namespace app::classes::Moon::UI::InputTrigger

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InputInfo.h>
#include <Modloader/app/structs/Input_Button__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::UI::InputInfo {
    IL2CPP_REGISTER_METHOD(0x00D24FB0, void, ctor, app::InputInfo* this_ptr, app::String* action_name, app::Input_Button__Enum button)
}

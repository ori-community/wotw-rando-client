#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CutsceneButtonPressedTransition_c.h>
#include <Modloader/app/structs/Input_Button__Enum.h>

namespace app::classes::CutsceneButtonPressedTransition___c {
    IL2CPP_REGISTER_METHOD(0x00DBDFB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CutsceneButtonPressedTransition_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBE0F0, bool, _ShouldTransition_b__4_0, (app::CutsceneButtonPressedTransition_c * this_ptr, app::Input_Button__Enum b))
    IL2CPP_REGISTER_METHOD(0x00DBE120, bool, _ShouldTransition_b__4_1, (app::CutsceneButtonPressedTransition_c * this_ptr, app::Input_Button__Enum b))
    IL2CPP_REGISTER_METHOD(0x00DBE150, bool, _ShouldTransition_b__4_2, (app::CutsceneButtonPressedTransition_c * this_ptr, app::Input_Button__Enum b))
    IL2CPP_REGISTER_METHOD(0x00DBE190, bool, _ShouldTransition_b__4_3, (app::CutsceneButtonPressedTransition_c * this_ptr, app::Input_Button__Enum b))
} // namespace app::classes::CutsceneButtonPressedTransition___c

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuOptionsList.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Language__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::CleverMenuOptionsList {
    IL2CPP_REGISTER_METHOD(0x012BFF60, void, ClearItems, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C0110, void, SetSelection, (app::CleverMenuOptionsList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x012C0140, void, Awake, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C0310, void, OnDestroy, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C04F0, void, OnOptionPressed, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C0590, void, OnEnable, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C05A0, void, FixedUpdate, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C0C60, void, AddItem_1, (app::CleverMenuOptionsList * this_ptr, app::String* label, app::Action* on_pressed))
    IL2CPP_REGISTER_METHOD(0x012C1220, void, AddItem_2, (app::CleverMenuOptionsList * this_ptr, app::Language__Enum language, app::String* label, app::Action* on_pressed))
    IL2CPP_REGISTER_METHOD(0x012C17B0, void, ctor, (app::CleverMenuOptionsList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C1920, void, _FixedUpdate_b__17_0, (app::CleverMenuOptionsList * this_ptr))
} // namespace app::classes::CleverMenuOptionsList

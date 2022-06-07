#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ControlItem {
    IL2CPP_REGISTER_METHOD(0x011E8210, void, ctor, (app::ControlItem * this_ptr, app::CommandBinding * binding))
    IL2CPP_REGISTER_METHOD(0x011E83E0, app::KeyCode__Enum__Array *, GetModifiedKeys, (app::ControlItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E84C0, void, AssignFromCommandInputButton, (app::ControlItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E8860, app::KeyCode__Enum, GetProposedKey, (app::ControlItem * this_ptr, int32_t sub_index))
    IL2CPP_REGISTER_METHOD(0x011E8990, bool, SetProposedKey, (app::ControlItem * this_ptr, int32_t sub_index, app::KeyCode__Enum code))
    IL2CPP_REGISTER_METHOD(0x011E8B80, bool, AddProposedKey, (app::ControlItem * this_ptr, app::KeyCode__Enum code))
    IL2CPP_REGISTER_METHOD(0x011E8E50, bool, RemoveKey, (app::ControlItem * this_ptr, app::KeyCode__Enum code))
    IL2CPP_REGISTER_METHOD(0x011E8F00, bool, UnbindIndex, (app::ControlItem * this_ptr, int32_t sub_index))
    IL2CPP_REGISTER_METHOD(0x011E8F10, void, UndoChanges, (app::ControlItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E9020, bool, IsChanged, (app::ControlItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E90A0, bool, ResetToDefault, (app::ControlItem * this_ptr))
}

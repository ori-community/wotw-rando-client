#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/JumpGridEntry.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::JumpGridEntry {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_EntryName, app::JumpGridEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsValid, app::JumpGridEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4C680, app::Vector2, get_CellLocalCenter, app::JumpGridEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4C6B0, void, set_CellLocalCenter, app::JumpGridEntry* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00E4C6F0, app::Color, get_CellColor, app::JumpGridEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4C7D0, app::Rect, GridCell, app::JumpGridEntry* this_ptr, bool facing_left)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::JumpGridEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4C830, void, cctor, )
} // namespace app::classes::JumpGridEntry

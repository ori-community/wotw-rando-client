#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GridObject.h>
#include <Modloader/app/structs/Shelf.h>

namespace app::classes::Shelf {
    IL2CPP_REGISTER_METHOD(0x005B20A0, app::GridObject*, get_CurrentGridObject, app::Shelf* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B2160, void, set_CurrentGridObject, app::Shelf* this_ptr, app::GridObject* value)
    IL2CPP_REGISTER_METHOD(0x005B2220, void, ctor, app::Shelf* this_ptr)
} // namespace app::classes::Shelf

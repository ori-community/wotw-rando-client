#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateObjectsOnGridTool.h>
#include <Modloader/app/structs/Shelf.h>

namespace app::classes::CreateObjectsOnGridTool {
    IL2CPP_REGISTER_METHOD(0x00DB7310, app::Shelf*, get_CurrentShelf, app::CreateObjectsOnGridTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB73D0, void, set_CurrentShelf, app::CreateObjectsOnGridTool* this_ptr, app::Shelf* value)
    IL2CPP_REGISTER_METHOD(0x00DB7490, void, ctor, app::CreateObjectsOnGridTool* this_ptr)
} // namespace app::classes::CreateObjectsOnGridTool

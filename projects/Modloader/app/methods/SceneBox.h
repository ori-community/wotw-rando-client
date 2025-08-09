#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneBox.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>

namespace app::classes::SceneBox {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, app::SceneBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009374D0, void, ctor, app::SceneBox* this_ptr)
} // namespace app::classes::SceneBox

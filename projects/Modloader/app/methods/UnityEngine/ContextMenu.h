#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContextMenu.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::ContextMenu {
    IL2CPP_REGISTER_METHOD(0x0242AD30, void, ctor_1, (app::ContextMenu * this_ptr, app::String* item_name))
    IL2CPP_REGISTER_METHOD(0x0242AD40, void, ctor_2, (app::ContextMenu * this_ptr, app::String* item_name, bool is_validate_function))
    IL2CPP_REGISTER_METHOD(0x0242AD50, void, ctor_3, (app::ContextMenu * this_ptr, app::String* item_name, bool is_validate_function, int32_t priority))
} // namespace app::classes::UnityEngine::ContextMenu

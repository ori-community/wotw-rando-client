#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::AddComponentMenu {
    IL2CPP_REGISTER_METHOD(0x00E464D0, void, ctor_1, (app::AddComponentMenu * this_ptr, app::String* menu_name))
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor_2, (app::AddComponentMenu * this_ptr, app::String* menu_name, int32_t order))
} // namespace app::classes::UnityEngine::AddComponentMenu

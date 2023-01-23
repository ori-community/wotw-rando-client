#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GUILayoutOption.h>
#include <Modloader/app/structs/GUILayoutOption_Type__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::GUILayoutOption {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, (app::GUILayoutOption * this_ptr, app::GUILayoutOption_Type__Enum type, app::Object* value))
}

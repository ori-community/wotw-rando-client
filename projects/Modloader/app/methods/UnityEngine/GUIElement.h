#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GUIElement.h>

namespace app::classes::UnityEngine::GUIElement {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GUIElement * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XboxControllerRenderer_ButtonContainer.h>

namespace app::classes::XboxControllerRenderer_ButtonContainer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XboxControllerRenderer_ButtonContainer* this_ptr)
}

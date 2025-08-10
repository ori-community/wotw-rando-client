#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XboxControllerRenderer.h>
#include <Modloader/app/structs/XboxControllerRenderer_ButtonContainer.h>

namespace app::classes::XboxControllerRenderer {
    IL2CPP_REGISTER_METHOD(0x00593980, void, Start, app::XboxControllerRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00593A90, void, OnValidate, app::XboxControllerRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00593BD0, void, Update, app::XboxControllerRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00593E20, void, HandleButton, app::XboxControllerRenderer* this_ptr, app::XboxControllerRenderer_ButtonContainer* button_container)
    IL2CPP_REGISTER_METHOD(
        0x00594340,
        void,
        HighLightButton,
        app::XboxControllerRenderer* this_ptr,
        app::XboxControllerRenderer_ButtonContainer* button,
        bool active
    )
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::XboxControllerRenderer* this_ptr)
} // namespace app::classes::XboxControllerRenderer

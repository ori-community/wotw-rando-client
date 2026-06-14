#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonIconRenderer_IconObject__Boxed.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::CatlikeCoding::TextBox::MoonIconRenderer_IconObject {
    IL2CPP_REGISTER_METHOD(
        0x00123EE0,
        void,
        ctor,
        app::MoonIconRenderer_IconObject__Boxed* this_ptr,
        app::GameObject* instance,
        app::Vector2 position,
        int32_t index
    )
}

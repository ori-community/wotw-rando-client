#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Image_1.h>

namespace app::classes::Moon::UI::Image {
    IL2CPP_REGISTER_METHOD(0x00D24C40, void, RefreshSprite, app::Image_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::Image_1* this_ptr)
} // namespace app::classes::Moon::UI::Image

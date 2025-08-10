#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneScreenshot.h>

namespace app::classes::SceneScreenshot {
    IL2CPP_REGISTER_METHOD(0x00BBA560, void, ctor, app::SceneScreenshot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BBA580, void, cctor, )
} // namespace app::classes::SceneScreenshot

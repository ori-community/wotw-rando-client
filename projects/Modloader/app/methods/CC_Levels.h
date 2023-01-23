#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CC_Levels.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_Levels {
    IL2CPP_REGISTER_METHOD(0x03194160, void, OnRenderImage, (app::CC_Levels * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x031949B0, void, ctor, (app::CC_Levels * this_ptr))
} // namespace app::classes::CC_Levels

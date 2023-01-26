#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CC_Posterize.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_Posterize {
    IL2CPP_REGISTER_METHOD(0x03194DB0, void, OnRenderImage, (app::CC_Posterize * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03194F30, void, ctor, (app::CC_Posterize * this_ptr))
} // namespace app::classes::CC_Posterize

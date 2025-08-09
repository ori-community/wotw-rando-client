#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CC_Frost.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_Frost {
    IL2CPP_REGISTER_METHOD(0x03193660, void, OnRenderImage, app::CC_Frost* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x03043B60, void, ctor, app::CC_Frost* this_ptr)
} // namespace app::classes::CC_Frost

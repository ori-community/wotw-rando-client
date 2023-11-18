#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CC_BleachBypass.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_BleachBypass {
    IL2CPP_REGISTER_METHOD(0x03192750, void, OnRenderImage, (app::CC_BleachBypass * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x00B5D320, void, ctor, (app::CC_BleachBypass * this_ptr))
} // namespace app::classes::CC_BleachBypass

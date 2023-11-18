#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CC_Vibrance.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_Vibrance {
    IL2CPP_REGISTER_METHOD(0x03195930, void, OnRenderImage, (app::CC_Vibrance * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CC_Vibrance * this_ptr))
} // namespace app::classes::CC_Vibrance

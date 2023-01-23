#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LowerResBlitTexture.h>

namespace app::classes::UnityEngine::LowerResBlitTexture {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LowerResBlitTextureDontStripMe, (app::LowerResBlitTexture * this_ptr))
}

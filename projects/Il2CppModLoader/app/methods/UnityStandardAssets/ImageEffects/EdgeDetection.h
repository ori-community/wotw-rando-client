#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::EdgeDetection {
    IL2CPP_REGISTER_METHOD(0x02D581A0, bool, CheckResources, (app::EdgeDetection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D58200, void, Start, (app::EdgeDetection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D58210, void, SetCameraFlag, (app::EdgeDetection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D58390, void, OnEnable, (app::EdgeDetection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D583A0, void, OnRenderImage, (app::EdgeDetection * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02D586F0, void, ctor, (app::EdgeDetection * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::EdgeDetection

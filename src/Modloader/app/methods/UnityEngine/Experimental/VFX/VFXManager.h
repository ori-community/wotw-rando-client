#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>

namespace app::classes::UnityEngine::Experimental::VFX::VFXManager {
    IL2CPP_REGISTER_METHOD(0x031C0ED0, void, ProcessCamera, app::Camera* cam)
    IL2CPP_REGISTER_METHOD(0x031C0F20, void, RegisterPerCameraCallback, )
    IL2CPP_REGISTER_METHOD(0x031C1170, void, UnregisterPerCameraCallback, )
} // namespace app::classes::UnityEngine::Experimental::VFX::VFXManager

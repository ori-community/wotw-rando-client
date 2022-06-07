#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::VFX::VFXManager {
    IL2CPP_REGISTER_METHOD(0x031C0ED0, void, ProcessCamera, (app::Camera * cam))
    IL2CPP_REGISTER_METHODINFO(0x0470AEF0, VFXManager_ProcessCamera__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031C0F20, void, RegisterPerCameraCallback, ())
    IL2CPP_REGISTER_METHOD(0x031C1170, void, UnregisterPerCameraCallback, ())
}

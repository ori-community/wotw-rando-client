#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::BeforeRenderHelper {
    IL2CPP_REGISTER_METHOD(0x0241F130, void, Invoke, ())
    IL2CPP_REGISTER_METHOD(0x0241F360, void, cctor, ())
} // namespace app::classes::UnityEngine::BeforeRenderHelper

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimatorOverrideController.h>

namespace app::classes::UnityEngine::AnimatorOverrideController {
    IL2CPP_REGISTER_METHOD(0x03086360, void, OnInvalidateOverrideController, (app::AnimatorOverrideController * controller))
}

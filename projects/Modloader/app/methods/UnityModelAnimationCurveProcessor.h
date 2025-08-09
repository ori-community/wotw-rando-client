#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/UnityModelAnimationCurveProcessor.h>

namespace app::classes::UnityModelAnimationCurveProcessor {
    IL2CPP_REGISTER_METHOD(
        0x012ABB10,
        void,
        ProcessCurves,
        app::UnityModelAnimationCurveProcessor* this_ptr,
        app::GameObject* model,
        float step,
        float start,
        float end
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UnityModelAnimationCurveProcessor* this_ptr)
} // namespace app::classes::UnityModelAnimationCurveProcessor

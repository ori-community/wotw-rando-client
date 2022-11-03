#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::DrivenRectTransformTracker {
    IL2CPP_REGISTER_METHOD(0x00002890, void, Add, (app::DrivenRectTransformTracker__Boxed * this_ptr, app::Object_1* driver, app::RectTransform* rect_transform, app::DrivenTransformProperties__Enum driven_properties))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Clear, (app::DrivenRectTransformTracker__Boxed * this_ptr))
} // namespace app::classes::UnityEngine::DrivenRectTransformTracker

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::CanvasGroup {
    IL2CPP_REGISTER_METHOD(0x031A5E40, float, get_alpha, (app::CanvasGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031A5E90, void, set_alpha, (app::CanvasGroup * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x031A5EF0, bool, get_interactable, (app::CanvasGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031A5F40, bool, get_blocksRaycasts, (app::CanvasGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031A5F90, bool, get_ignoreParentGroups, (app::CanvasGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031A5F40, bool, IsRaycastLocationValid, (app::CanvasGroup * this_ptr, app::Vector2 sp, app::Camera* event_camera))
} // namespace app::classes::UnityEngine::CanvasGroup

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RaycastResult__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::EventSystems::RaycastResult {
    IL2CPP_REGISTER_METHOD(0x001D9820, app::GameObject*, get_gameObject, app::RaycastResult__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_gameObject, app::RaycastResult__Boxed* this_ptr, app::GameObject* value)
    IL2CPP_REGISTER_METHOD(0x001D9830, bool, get_isValid, app::RaycastResult__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D9840, void, Clear, app::RaycastResult__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001D9970, app::String*, ToString, app::RaycastResult__Boxed* this_ptr)
} // namespace app::classes::UnityEngine::EventSystems::RaycastResult

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::EventSystems::Physics2DRaycaster {
    IL2CPP_REGISTER_METHOD(0x01F215C0, void, ctor, (app::Physics2DRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F215E0, void, Raycast, (app::Physics2DRaycaster * this_ptr, app::PointerEventData* event_data, app::List_1_UnityEngine_EventSystems_RaycastResult_* result_append_list))
} // namespace app::classes::UnityEngine::EventSystems::Physics2DRaycaster

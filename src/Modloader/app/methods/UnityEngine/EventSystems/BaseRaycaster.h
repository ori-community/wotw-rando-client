#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseRaycaster.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::EventSystems::BaseRaycaster {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::BaseRaycaster* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F1B660, int32_t, get_priority, app::BaseRaycaster* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F1B670, int32_t, get_sortOrderPriority, app::BaseRaycaster* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F1B670, int32_t, get_renderOrderPriority, app::BaseRaycaster* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F1B680, app::String*, ToString, app::BaseRaycaster* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F1BA90, void, OnEnable, app::BaseRaycaster* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F1BC30, void, OnDisable, app::BaseRaycaster* this_ptr)
} // namespace app::classes::UnityEngine::EventSystems::BaseRaycaster

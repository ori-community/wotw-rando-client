#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventSystem.h>
#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/BaseInputModule.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_EventSystems_RaycastResult_.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/RaycastResult.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::EventSystems::EventSystem {
    IL2CPP_REGISTER_METHOD(0x01F1BDD0, void, ctor, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1BF40, app::EventSystem*, get_current, ())
    IL2CPP_REGISTER_METHOD(0x01F1C040, void, set_current, (app::EventSystem * value))
    IL2CPP_REGISTER_METHOD(0x01F1C1B0, bool, get_sendNavigationEvents, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_sendNavigationEvents, (app::EventSystem * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F1C1C0, int32_t, get_pixelDragThreshold, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00843E80, void, set_pixelDragThreshold, (app::EventSystem * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01F1C1D0, app::BaseInputModule*, get_currentInputModule, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1A590, app::GameObject*, get_firstSelectedGameObject, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_firstSelectedGameObject, (app::EventSystem * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x01F1A580, app::GameObject*, get_currentSelectedGameObject, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::GameObject*, get_lastSelectedGameObject, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1C1E0, bool, get_isFocused, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1C1F0, void, UpdateModules, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1C380, bool, get_alreadySelecting, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1C390, void, SetSelectedGameObject_1, (app::EventSystem * this_ptr, app::GameObject* selected, app::BaseEventData* pointer))
    IL2CPP_REGISTER_METHOD(0x01F1C630, app::BaseEventData*, get_baseEventDataCache, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1C780, void, SetSelectedGameObject_2, (app::EventSystem * this_ptr, app::GameObject* selected))
    IL2CPP_REGISTER_METHOD(0x01F1C8E0, int32_t, RaycastComparer, (app::RaycastResult lhs, app::RaycastResult rhs))
    IL2CPP_REGISTER_METHOD(0x01F1CD40, void, RaycastAll, (app::EventSystem * this_ptr, app::PointerEventData* event_data, app::List_1_UnityEngine_EventSystems_RaycastResult_* raycast_results))
    IL2CPP_REGISTER_METHOD(0x01F1CFE0, bool, IsPointerOverGameObject_1, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1D0C0, bool, IsPointerOverGameObject_2, (app::EventSystem * this_ptr, int32_t pointer_id))
    IL2CPP_REGISTER_METHOD(0x01F1D1B0, void, OnEnable, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1D270, void, OnDisable, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1D390, void, TickModules, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585320, void, OnApplicationFocus, (app::EventSystem * this_ptr, bool has_focus))
    IL2CPP_REGISTER_METHOD(0x01F1D500, void, Update, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1D960, void, ChangeEventModule, (app::EventSystem * this_ptr, app::BaseInputModule* module))
    IL2CPP_REGISTER_METHOD(0x01F1DAC0, app::String*, ToString, (app::EventSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1DD10, void, cctor, ())
} // namespace app::classes::UnityEngine::EventSystems::EventSystem

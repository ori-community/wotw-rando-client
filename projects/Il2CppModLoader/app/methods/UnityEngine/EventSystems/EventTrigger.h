#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::EventSystems::EventTrigger {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1DF80, app::List_1_UnityEngine_EventSystems_EventTrigger_Entry_*, get_triggers, (app::EventTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_triggers, (app::EventTrigger * this_ptr, app::List_1_UnityEngine_EventSystems_EventTrigger_Entry_* value))
    IL2CPP_REGISTER_METHOD(0x01F1E0E0, void, Execute, (app::EventTrigger * this_ptr, app::EventTriggerType__Enum id, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E220, void, OnPointerEnter, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E230, void, OnPointerExit, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E240, void, OnDrag, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E250, void, OnDrop, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E260, void, OnPointerDown, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E270, void, OnPointerUp, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E280, void, OnPointerClick, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E290, void, OnSelect, (app::EventTrigger * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E2A0, void, OnDeselect, (app::EventTrigger * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E2B0, void, OnScroll, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E2C0, void, OnMove, (app::EventTrigger * this_ptr, app::AxisEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E2D0, void, OnUpdateSelected, (app::EventTrigger * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E2E0, void, OnInitializePotentialDrag, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E2F0, void, OnBeginDrag, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E300, void, OnEndDrag, (app::EventTrigger * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E310, void, OnSubmit, (app::EventTrigger * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E320, void, OnCancel, (app::EventTrigger * this_ptr, app::BaseEventData* event_data))
} // namespace app::classes::UnityEngine::EventSystems::EventTrigger

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::EventSystems::PointerInputModule {
    IL2CPP_REGISTER_METHOD(0x01F23A50, void, ctor, (app::PointerInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F23DC0, bool, GetPointerData, (app::PointerInputModule * this_ptr, int32_t id, app::PointerEventData** data, bool create))
    IL2CPP_REGISTER_METHOD(0x01F23FB0, void, RemovePointerData, (app::PointerInputModule * this_ptr, app::PointerEventData* data))
    IL2CPP_REGISTER_METHOD(0x01F24060, app::PointerEventData*, GetTouchPointerEventData, (app::PointerInputModule * this_ptr, app::Touch input, bool* pressed, bool* released))
    IL2CPP_REGISTER_METHOD(0x01F24370, void, CopyFromTo, (app::PointerInputModule * this_ptr, app::PointerEventData* from, app::PointerEventData* to))
    IL2CPP_REGISTER_METHOD(0x01F24440, app::PointerEventData_FramePressState__Enum, StateForMouseButton, (app::PointerInputModule * this_ptr, int32_t button_id))
    IL2CPP_REGISTER_METHOD(0x01F24500, app::PointerInputModule_MouseState*, GetMousePointerEventData_1, (app::PointerInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F24520, app::PointerInputModule_MouseState*, GetMousePointerEventData_2, (app::PointerInputModule * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x01F24A70, app::PointerEventData*, GetLastPointerEventData, (app::PointerInputModule * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x01F24B20, bool, ShouldStartDrag, (app::Vector2 press_pos, app::Vector2 current_pos, float threshold, bool use_drag_threshold))
    IL2CPP_REGISTER_METHOD(0x01F24C10, void, ProcessMove, (app::PointerInputModule * this_ptr, app::PointerEventData* pointer_event))
    IL2CPP_REGISTER_METHOD(0x01F24CA0, void, ProcessDrag, (app::PointerInputModule * this_ptr, app::PointerEventData* pointer_event))
    IL2CPP_REGISTER_METHOD(0x01F25150, bool, IsPointerOverGameObject, (app::PointerInputModule * this_ptr, int32_t pointer_id))
    IL2CPP_REGISTER_METHOD(0x01F25220, void, ClearSelection, (app::PointerInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25400, app::String*, ToString, (app::PointerInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25760, void, DeselectIfSelectionChanged, (app::PointerInputModule * this_ptr, app::GameObject* current_over_go, app::BaseEventData* pointer_event))
} // namespace app::classes::UnityEngine::EventSystems::PointerInputModule

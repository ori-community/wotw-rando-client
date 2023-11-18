#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseInputModule.h>
#include <Modloader/app/structs/AxisEventData.h>
#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/BaseInput.h>
#include <Modloader/app/structs/EventSystem.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_EventSystems_RaycastResult_.h>
#include <Modloader/app/structs/MoveDirection__Enum.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/RaycastResult.h>

namespace app::classes::UnityEngine::EventSystems::BaseInputModule {
    IL2CPP_REGISTER_METHOD(0x01F1A120, void, ctor, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1A330, app::BaseInput*, get_input, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1A580, app::BaseInput*, get_inputOverride, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_inputOverride, (app::BaseInputModule * this_ptr, app::BaseInput* value))
    IL2CPP_REGISTER_METHOD(0x01F1A590, app::EventSystem*, get_eventSystem, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1A5A0, void, OnEnable, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1A640, void, OnDisable, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1A660, app::RaycastResult, FindFirstRaycast, (app::List_1_UnityEngine_EventSystems_RaycastResult_ * candidates))
    IL2CPP_REGISTER_METHOD(0x01F1A830, app::MoveDirection__Enum, DetermineMoveDirection_1, (float x, float y))
    IL2CPP_REGISTER_METHOD(0x01F1A850, app::MoveDirection__Enum, DetermineMoveDirection_2, (float x, float y, float dead_zone))
    IL2CPP_REGISTER_METHOD(0x01F1A980, app::GameObject*, FindCommonRoot, (app::GameObject * g1, app::GameObject* g2))
    IL2CPP_REGISTER_METHOD(0x01F1ABE0, void, HandlePointerExitAndEnter, (app::BaseInputModule * this_ptr, app::PointerEventData* current_pointer_data, app::GameObject* new_enter_target))
    IL2CPP_REGISTER_METHOD(0x01F1B170, app::AxisEventData*, GetAxisEventData, (app::BaseInputModule * this_ptr, float x, float y, float move_dead_zone))
    IL2CPP_REGISTER_METHOD(0x01F1B400, app::BaseEventData*, GetBaseEventData, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, IsPointerOverGameObject, (app::BaseInputModule * this_ptr, int32_t pointer_id))
    IL2CPP_REGISTER_METHOD(0x01F1B580, bool, ShouldActivateModule, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DeactivateModule, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ActivateModule, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateModule, (app::BaseInputModule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B650, bool, IsModuleSupported, (app::BaseInputModule * this_ptr))
} // namespace app::classes::UnityEngine::EventSystems::BaseInputModule

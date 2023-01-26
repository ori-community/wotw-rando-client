#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPointerEnterHandler.h>
#include <Modloader/app/structs/AxisEventData.h>
#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IBeginDragHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_ICancelHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IDeselectHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IDragHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IDropHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IEndDragHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IInitializePotentialDragHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IMoveHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IPointerClickHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IPointerDownHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IPointerEnterHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IPointerExitHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IPointerUpHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IScrollHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_ISelectHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_ISubmitHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_IUpdateSelectedHandler_.h>
#include <Modloader/app/structs/ExecuteEvents_EventFunction_1_System_Object_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IBeginDragHandler.h>
#include <Modloader/app/structs/ICancelHandler.h>
#include <Modloader/app/structs/IDeselectHandler.h>
#include <Modloader/app/structs/IDragHandler.h>
#include <Modloader/app/structs/IDropHandler.h>
#include <Modloader/app/structs/IEndDragHandler.h>
#include <Modloader/app/structs/IInitializePotentialDragHandler.h>
#include <Modloader/app/structs/IList_1_UnityEngine_EventSystems_IEventSystemHandler_.h>
#include <Modloader/app/structs/IList_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/IMoveHandler.h>
#include <Modloader/app/structs/IPointerClickHandler.h>
#include <Modloader/app/structs/IPointerDownHandler.h>
#include <Modloader/app/structs/IPointerExitHandler.h>
#include <Modloader/app/structs/IPointerUpHandler.h>
#include <Modloader/app/structs/IScrollHandler.h>
#include <Modloader/app/structs/ISelectHandler.h>
#include <Modloader/app/structs/ISubmitHandler.h>
#include <Modloader/app/structs/IUpdateSelectedHandler.h>
#include <Modloader/app/structs/List_1_UnityEngine_EventSystems_IEventSystemHandler_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PointerEventData.h>

namespace app::classes::UnityEngine::EventSystems::ExecuteEvents {
    IL2CPP_REGISTER_METHOD(0x01F1E570, void, Execute_1, (app::IPointerEnterHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E640, void, Execute_2, (app::IPointerExitHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E710, void, Execute_3, (app::IPointerDownHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E7E0, void, Execute_4, (app::IPointerUpHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E8B0, void, Execute_5, (app::IPointerClickHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1E980, void, Execute_6, (app::IInitializePotentialDragHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1EA50, void, Execute_7, (app::IBeginDragHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1EB20, void, Execute_8, (app::IDragHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1EBF0, void, Execute_9, (app::IEndDragHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1ECC0, void, Execute_10, (app::IDropHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1ED90, void, Execute_11, (app::IScrollHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1EE60, void, Execute_12, (app::IUpdateSelectedHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1EF00, void, Execute_13, (app::ISelectHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1EFA0, void, Execute_14, (app::IDeselectHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1F040, void, Execute_15, (app::IMoveHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1F170, void, Execute_16, (app::ISubmitHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1F210, void, Execute_17, (app::ICancelHandler * handler, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x01F1F2B0, app::ExecuteEvents_EventFunction_1_IPointerEnterHandler_*, get_pointerEnterHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F350, app::ExecuteEvents_EventFunction_1_IPointerExitHandler_*, get_pointerExitHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F3F0, app::ExecuteEvents_EventFunction_1_IPointerDownHandler_*, get_pointerDownHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F490, app::ExecuteEvents_EventFunction_1_IPointerUpHandler_*, get_pointerUpHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F530, app::ExecuteEvents_EventFunction_1_IPointerClickHandler_*, get_pointerClickHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F5D0, app::ExecuteEvents_EventFunction_1_IInitializePotentialDragHandler_*, get_initializePotentialDrag, ())
    IL2CPP_REGISTER_METHOD(0x01F1F670, app::ExecuteEvents_EventFunction_1_IBeginDragHandler_*, get_beginDragHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F710, app::ExecuteEvents_EventFunction_1_IDragHandler_*, get_dragHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F7B0, app::ExecuteEvents_EventFunction_1_IEndDragHandler_*, get_endDragHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F850, app::ExecuteEvents_EventFunction_1_IDropHandler_*, get_dropHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F8F0, app::ExecuteEvents_EventFunction_1_IScrollHandler_*, get_scrollHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1F990, app::ExecuteEvents_EventFunction_1_IUpdateSelectedHandler_*, get_updateSelectedHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FA30, app::ExecuteEvents_EventFunction_1_ISelectHandler_*, get_selectHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FAD0, app::ExecuteEvents_EventFunction_1_IDeselectHandler_*, get_deselectHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FB70, app::ExecuteEvents_EventFunction_1_IMoveHandler_*, get_moveHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FC10, app::ExecuteEvents_EventFunction_1_ISubmitHandler_*, get_submitHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FCB0, app::ExecuteEvents_EventFunction_1_ICancelHandler_*, get_cancelHandler, ())
    IL2CPP_REGISTER_METHOD(0x01F1FD50, void, GetEventChain, (app::GameObject * root, app::IList_1_UnityEngine_Transform_* event_chain))
    IL2CPP_REGISTER_METHOD(0x01F1FF90, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01F21510, void, _s_HandlerListPool_m__0, (app::List_1_UnityEngine_EventSystems_IEventSystemHandler_ * l))
    IL2CPP_REGISTER_METHOD(0x0157C770, app::Object*, ValidateEventData_1, (app::BaseEventData * data))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_18, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_System_Object_* functor))
    IL2CPP_REGISTER_METHOD(0x02FF7CB0, app::GameObject*, ExecuteHierarchy_1, (app::GameObject * root, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_System_Object_* callback_function))
    IL2CPP_REGISTER_METHOD(0x0156A9B0, bool, ShouldSendToComponent, (app::Component_1 * component))
    IL2CPP_REGISTER_METHOD(0x015E45C0, void, GetEventList, (app::GameObject * go, app::IList_1_UnityEngine_EventSystems_IEventSystemHandler_* results))
    IL2CPP_REGISTER_METHOD(0x0156A460, bool, CanHandleEvent, (app::GameObject * go))
    IL2CPP_REGISTER_METHOD(0x02FF7E90, app::GameObject*, GetEventHandler_1, (app::GameObject * root))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_19, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerExitHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_20, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerEnterHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_21, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IDeselectHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_22, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_ISelectHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x0157C770, app::PointerEventData*, ValidateEventData_2, (app::BaseEventData * data))
    IL2CPP_REGISTER_METHOD(0x0157C770, app::AxisEventData*, ValidateEventData_3, (app::BaseEventData * data))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_23, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IBeginDragHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_24, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerUpHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_25, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IDragHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x02FF7E90, app::GameObject*, GetEventHandler_2, (app::GameObject * root))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_26, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IEndDragHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x02FF7CB0, app::GameObject*, ExecuteHierarchy_2, (app::GameObject * root, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerDownHandler_* callback_function))
    IL2CPP_REGISTER_METHOD(0x02FF7E90, app::GameObject*, GetEventHandler_3, (app::GameObject * root))
    IL2CPP_REGISTER_METHOD(0x02FF7E90, app::GameObject*, GetEventHandler_4, (app::GameObject * root))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_27, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IInitializePotentialDragHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_28, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerClickHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x02FF7CB0, app::GameObject*, ExecuteHierarchy_3, (app::GameObject * root, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IDropHandler_* callback_function))
    IL2CPP_REGISTER_METHOD(0x02FF7CB0, app::GameObject*, ExecuteHierarchy_4, (app::GameObject * root, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IPointerExitHandler_* callback_function))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_29, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_ISubmitHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_30, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_ICancelHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_31, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IMoveHandler_* functor))
    IL2CPP_REGISTER_METHOD(0x02FF7E90, app::GameObject*, GetEventHandler_5, (app::GameObject * root))
    IL2CPP_REGISTER_METHOD(0x02FF7CB0, app::GameObject*, ExecuteHierarchy_5, (app::GameObject * root, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IScrollHandler_* callback_function))
    IL2CPP_REGISTER_METHOD(0x0156A590, bool, Execute_32, (app::GameObject * target, app::BaseEventData* event_data, app::ExecuteEvents_EventFunction_1_IUpdateSelectedHandler_* functor))
} // namespace app::classes::UnityEngine::EventSystems::ExecuteEvents

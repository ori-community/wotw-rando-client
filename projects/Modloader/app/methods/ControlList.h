#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ControlList.h>
#include <Modloader/app/structs/ControlItem.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/List_1_ControlItem_.h>
#include <Modloader/app/structs/ControlUIItem.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::ControlList {
    IL2CPP_REGISTER_METHOD(0x011E94F0, void, Awake, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E9500, void, Initialize, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E9940, void, OnNavigate, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F0A8, ControlList_OnNavigate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011E99F0, void, Populate, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C198, ControlList_Populate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011EA640, void, SetKeyBinding, (app::ControlList * this_ptr, app::ControlItem* control, int32_t sub_index, app::KeyCode__Enum code))
    IL2CPP_REGISTER_METHOD(0x011EA680, void, RemoveBinding, (app::ControlList * this_ptr, app::ControlItem* control, app::KeyCode__Enum code))
    IL2CPP_REGISTER_METHOD(0x011EA750, void, ClearBinding, (app::ControlList * this_ptr, app::ControlItem* control, int32_t sub_index))
    IL2CPP_REGISTER_METHOD(0x011EA780, app::List_1_ControlItem_*, CurrentKeyBindingsForCode, (app::ControlList * this_ptr, app::KeyCode__Enum incoming_key))
    IL2CPP_REGISTER_METHOD(0x011EAAC0, void, OnItemPressed, (app::ControlList * this_ptr, app::ControlUIItem* item))
    IL2CPP_REGISTER_METHOD(0x011EAF90, void, ResetToDefault, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047083E8, ControlList_ResetToDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011EB160, void, ResetControlToDefault, (app::ControlList * this_ptr, app::ControlItem* control))
    IL2CPP_REGISTER_METHOD(0x011EB190, void, RevertControlToLast, (app::ControlList * this_ptr, app::ControlItem* control))
    IL2CPP_REGISTER_METHOD(0x011EB2E0, void, UpdateAllBindingText, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EB420, void, HandleInput, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EB620, void, OnEnable, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EBA10, void, OnDisable, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EBD40, void, FixedUpdate, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EBD70, void, AssignKey, (app::ControlList * this_ptr, app::ControlItem* control, int32_t index, app::KeyCode__Enum pressed_key))
    IL2CPP_REGISTER_METHOD(0x011EC100, void, ReadNextKey, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EC6F0, void, SetPressedItem, (app::ControlList * this_ptr, app::ControlUIItem* control, int32_t index))
    IL2CPP_REGISTER_METHOD(0x011EC960, void, ctor, (app::ControlList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011EDB50, void, _Initialize_b__12_0, (app::ControlList * this_ptr, app::GameObject* x))
    IL2CPP_REGISTER_METHODINFO(0x0476EB18, ControlList__Initialize_b__12_0__MethodInfo)
} // namespace app::classes::ControlList

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/CanvasGroup.h>
#include <Modloader/app/structs/Dropdown.h>
#include <Modloader/app/structs/Dropdown_DropdownEvent.h>
#include <Modloader/app/structs/Dropdown_DropdownItem.h>
#include <Modloader/app/structs/Dropdown_OptionData.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GraphicRaycaster.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Sprite_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_Dropdown_DropdownItem_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_Dropdown_OptionData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Text.h>
#include <Modloader/app/structs/Toggle.h>

namespace app::classes::UnityEngine::UI::Dropdown {
    IL2CPP_REGISTER_METHOD(0x01F36670, void, ctor, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2BCB0, app::RectTransform*, get_template, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F36B10, void, set_template, app::Dropdown* this_ptr, app::RectTransform* value)
    IL2CPP_REGISTER_METHOD(0x01F36B20, app::Text*, get_captionText, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F36B30, void, set_captionText, app::Dropdown* this_ptr, app::Text* value)
    IL2CPP_REGISTER_METHOD(0x01F36B40, app::Image*, get_captionImage, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F36B50, void, set_captionImage, app::Dropdown* this_ptr, app::Image* value)
    IL2CPP_REGISTER_METHOD(0x01F36B60, app::Text*, get_itemText, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F36B70, void, set_itemText, app::Dropdown* this_ptr, app::Text* value)
    IL2CPP_REGISTER_METHOD(0x01F36B80, app::Image*, get_itemImage, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F36B90, void, set_itemImage, app::Dropdown* this_ptr, app::Image* value)
    IL2CPP_REGISTER_METHOD(0x01F36BA0, app::List_1_UnityEngine_UI_Dropdown_OptionData_*, get_options, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F36BC0, void, set_options, app::Dropdown* this_ptr, app::List_1_UnityEngine_UI_Dropdown_OptionData_* value)
    IL2CPP_REGISTER_METHOD(0x01F36BF0, app::Dropdown_DropdownEvent*, get_onValueChanged, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005FDE10, void, set_onValueChanged, app::Dropdown* this_ptr, app::Dropdown_DropdownEvent* value)
    IL2CPP_REGISTER_METHOD(0x01F36C00, int32_t, get_value, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F36C10, void, set_value, app::Dropdown* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01F36DB0, void, Awake, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F37040, void, Start, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F37050, void, RefreshShownValue, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F37320, void, AddOptions_1, app::Dropdown* this_ptr, app::List_1_UnityEngine_UI_Dropdown_OptionData_* options)
    IL2CPP_REGISTER_METHOD(0x01F373F0, void, AddOptions_2, app::Dropdown* this_ptr, app::List_1_System_String_* options)
    IL2CPP_REGISTER_METHOD(0x01F37630, void, AddOptions_3, app::Dropdown* this_ptr, app::List_1_UnityEngine_Sprite_* options)
    IL2CPP_REGISTER_METHOD(0x01F37870, void, ClearOptions, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F37940, void, SetupTemplate, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F37EE0, void, OnPointerClick, app::Dropdown* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x01F37EE0, void, OnSubmit, app::Dropdown* this_ptr, app::BaseEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x01F37EF0, void, OnCancel, app::Dropdown* this_ptr, app::BaseEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x01F37F00, void, Show, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F39070, app::GameObject*, CreateBlocker, app::Dropdown* this_ptr, app::Canvas* root_canvas)
    IL2CPP_REGISTER_METHOD(0x01F39860, void, DestroyBlocker, app::Dropdown* this_ptr, app::GameObject* blocker)
    IL2CPP_REGISTER_METHOD(0x01F39900, app::GameObject*, CreateDropdownList, app::Dropdown* this_ptr, app::GameObject* template_1)
    IL2CPP_REGISTER_METHOD(0x01F399A0, void, DestroyDropdownList, app::Dropdown* this_ptr, app::GameObject* dropdown_list)
    IL2CPP_REGISTER_METHOD(0x01F39A40, app::Dropdown_DropdownItem*, CreateItem, app::Dropdown* this_ptr, app::Dropdown_DropdownItem* item_template)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyItem, app::Dropdown* this_ptr, app::Dropdown_DropdownItem* item)
    IL2CPP_REGISTER_METHOD(
        0x01F39AE0,
        app::Dropdown_DropdownItem*,
        AddItem,
        app::Dropdown* this_ptr,
        app::Dropdown_OptionData* data,
        bool selected,
        app::Dropdown_DropdownItem* item_template,
        app::List_1_UnityEngine_UI_Dropdown_DropdownItem_* items
    )
    IL2CPP_REGISTER_METHOD(0x01F39F80, void, AlphaFadeList_1, app::Dropdown* this_ptr, float duration, float alpha)
    IL2CPP_REGISTER_METHOD(0x01F3A0A0, void, AlphaFadeList_2, app::Dropdown* this_ptr, float duration, float start, float end)
    IL2CPP_REGISTER_METHOD(0x01F3A300, void, SetAlpha, app::Dropdown* this_ptr, float alpha)
    IL2CPP_REGISTER_METHOD(0x01F3A430, void, Hide, app::Dropdown* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F3A790, app::IEnumerator*, DelayedDestroyDropdownList, app::Dropdown* this_ptr, float delay)
    IL2CPP_REGISTER_METHOD(0x01F3A900, void, OnSelectItem, app::Dropdown* this_ptr, app::Toggle* toggle)
    IL2CPP_REGISTER_METHOD(0x01F3AB70, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0157DAE0, app::Object*, GetOrAddComponent_1, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x0157DAE0, app::Canvas*, GetOrAddComponent_2, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x0157DAE0, app::GraphicRaycaster*, GetOrAddComponent_3, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x0157DAE0, app::CanvasGroup*, GetOrAddComponent_4, app::GameObject* go)
} // namespace app::classes::UnityEngine::UI::Dropdown

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dropdown__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dropdown__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown__Fields_DEFINED)
#include <Modloader/app/structs/Selectable__Fields.h>
#if defined(IL2CPP_STRUCT_Selectable__Fields_DEFINED)
#define IL2CPP_STRUCT_Dropdown__Fields_DEFINED
struct RectTransform;
struct Text;
struct Image;
struct Dropdown_OptionDataList;
struct Dropdown_DropdownEvent;
struct GameObject;
struct List_1_UnityEngine_UI_Dropdown_DropdownItem_;
struct TweenRunner_1_FloatTween_;
struct Dropdown__Fields {
    struct Selectable__Fields _;
    struct RectTransform* m_Template;
    struct Text* m_CaptionText;
    struct Image* m_CaptionImage;
    struct Text* m_ItemText;
    struct Image* m_ItemImage;
    int32_t m_Value;
    struct Dropdown_OptionDataList* m_Options;
    struct Dropdown_DropdownEvent* m_OnValueChanged;
    struct GameObject* m_Dropdown;
    struct GameObject* m_Blocker;
    struct List_1_UnityEngine_UI_Dropdown_DropdownItem_* m_Items;
    struct TweenRunner_1_FloatTween_* m_AlphaTweenRunner;
    bool validTemplate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dropdown__Fields_FWDDECL)
#define IL2CPP_STRUCT_Dropdown__Fields_FWDDECL
#include <Modloader/app/structs/Dropdown_DropdownEvent.h>
#include <Modloader/app/structs/Dropdown_OptionDataList.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_Dropdown_DropdownItem_.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Text.h>
#include <Modloader/app/structs/TweenRunner_1_FloatTween_.h>
#endif
#undef IL2CPP_STRUCT_Dropdown__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Dropdown__Fields_FWDDECL)
#include <Modloader/app/structs/Dropdown__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dropdown__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayoutGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayoutGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutGroup__Fields_DEFINED)
#include <Modloader/app/structs/DrivenRectTransformTracker.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_TextAnchor__Enum_DEFINED) && defined(IL2CPP_STRUCT_DrivenRectTransformTracker_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_LayoutGroup__Fields_DEFINED
struct RectOffset;
struct RectTransform;
struct List_1_UnityEngine_RectTransform_;
struct LayoutGroup__Fields {
    struct UIBehaviour__Fields _;
    struct RectOffset* m_Padding;
    TextAnchor__Enum m_ChildAlignment;

    struct RectTransform* m_Rect;
    struct DrivenRectTransformTracker m_Tracker;
    struct Vector2 m_TotalMinSize;
    struct Vector2 m_TotalPreferredSize;
    struct Vector2 m_TotalFlexibleSize;
    struct List_1_UnityEngine_RectTransform_* m_RectChildren;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayoutGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_LayoutGroup__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_RectTransform_.h>
#include <Modloader/app/structs/RectOffset.h>
#include <Modloader/app/structs/RectTransform.h>
#endif
#undef IL2CPP_STRUCT_LayoutGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LayoutGroup__Fields_FWDDECL)
#include <Modloader/app/structs/LayoutGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayoutGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

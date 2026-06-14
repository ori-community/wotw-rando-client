#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContentSizeFitter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContentSizeFitter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentSizeFitter__Fields_DEFINED)
#include <Modloader/app/structs/ContentSizeFitter_FitMode__Enum.h>
#include <Modloader/app/structs/DrivenRectTransformTracker.h>
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ContentSizeFitter_FitMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_DrivenRectTransformTracker_DEFINED)
#define IL2CPP_STRUCT_ContentSizeFitter__Fields_DEFINED
struct RectTransform;
struct ContentSizeFitter__Fields {
    struct UIBehaviour__Fields _;
    ContentSizeFitter_FitMode__Enum m_HorizontalFit;

    ContentSizeFitter_FitMode__Enum m_VerticalFit;

    struct RectTransform* m_Rect;
    struct DrivenRectTransformTracker m_Tracker;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContentSizeFitter__Fields_FWDDECL)
#define IL2CPP_STRUCT_ContentSizeFitter__Fields_FWDDECL
#include <Modloader/app/structs/RectTransform.h>
#endif
#undef IL2CPP_STRUCT_ContentSizeFitter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentSizeFitter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ContentSizeFitter__Fields_FWDDECL)
#include <Modloader/app/structs/ContentSizeFitter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContentSizeFitter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

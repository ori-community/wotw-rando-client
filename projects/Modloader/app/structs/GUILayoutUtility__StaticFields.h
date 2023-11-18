#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayoutUtility__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayoutUtility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutUtility__StaticFields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_GUILayoutUtility__StaticFields_DEFINED
struct Dictionary_2_System_Int32_UnityEngine_GUILayoutUtility_LayoutCache_;
struct GUILayoutUtility_LayoutCache;
struct GUIStyle;
struct GUILayoutUtility__StaticFields {
    struct Dictionary_2_System_Int32_UnityEngine_GUILayoutUtility_LayoutCache_* s_StoredLayouts;
    struct Dictionary_2_System_Int32_UnityEngine_GUILayoutUtility_LayoutCache_* s_StoredWindows;
    struct GUILayoutUtility_LayoutCache* current;
    struct Rect kDummyRect;
    struct GUIStyle* s_SpaceStyle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUILayoutUtility__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GUILayoutUtility__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_GUILayoutUtility_LayoutCache_.h>
#include <Modloader/app/structs/GUILayoutUtility_LayoutCache.h>
#include <Modloader/app/structs/GUIStyle.h>
#endif
#undef IL2CPP_STRUCT_GUILayoutUtility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutUtility__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GUILayoutUtility__StaticFields_FWDDECL)
#include <Modloader/app/structs/GUILayoutUtility__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayoutUtility__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

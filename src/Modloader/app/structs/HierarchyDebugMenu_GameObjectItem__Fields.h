#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyDebugMenu_GameObjectItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyDebugMenu_GameObjectItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu_GameObjectItem__Fields_DEFINED)
#include <Modloader/app/structs/HierarchyDebugMenu_CompareType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_HierarchyDebugMenu_CompareType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_HierarchyDebugMenu_GameObjectItem__Fields_DEFINED
struct GameObject;
struct String;
struct List_1_HierarchyDebugMenu_GameObjectItem_;
struct List_1_UnityEngine_Component_;
struct HierarchySuspensionTest_PerfTestResult;
struct __declspec(align(8)) HierarchyDebugMenu_GameObjectItem__Fields {
    HierarchyDebugMenu_CompareType__Enum m_currentSort;

    struct GameObject* Target;
    struct String* Label;
    bool MoonReady;
    struct String* MoonHidden;
    struct String* MoonHidden2;
    struct String* MoonHidden3;
    struct List_1_HierarchyDebugMenu_GameObjectItem_* Children;
    bool Expanded;
    struct List_1_UnityEngine_Component_* Components;
    struct Vector3 TargetPosition;
    struct Vector3 TargetLocalPosition;
    struct Vector3 TargetRotation;
    struct Vector3 TargetScale;
    struct HierarchySuspensionTest_PerfTestResult* PerfData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu_GameObjectItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyDebugMenu_GameObjectItem__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HierarchySuspensionTest_PerfTestResult.h>
#include <Modloader/app/structs/List_1_HierarchyDebugMenu_GameObjectItem_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HierarchyDebugMenu_GameObjectItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu_GameObjectItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyDebugMenu_GameObjectItem__Fields_FWDDECL)
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

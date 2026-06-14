#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSlicedHierarchyDisablingTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSlicedHierarchyDisablingTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedHierarchyDisablingTask__Fields_DEFINED)
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSlicedHierarchyDisablingTask__Fields_DEFINED
struct List_1_UnityEngine_GameObject_;
struct TimeSlicedHierarchyDisablingTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct List_1_UnityEngine_GameObject_* m_objectsToTimeSliceDisable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSlicedHierarchyDisablingTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeSlicedHierarchyDisablingTask__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_TimeSlicedHierarchyDisablingTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedHierarchyDisablingTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeSlicedHierarchyDisablingTask__Fields_FWDDECL)
#include <Modloader/app/structs/TimeSlicedHierarchyDisablingTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSlicedHierarchyDisablingTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

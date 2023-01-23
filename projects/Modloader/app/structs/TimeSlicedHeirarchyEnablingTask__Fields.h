#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSlicedHeirarchyEnablingTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSlicedHeirarchyEnablingTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedHeirarchyEnablingTask__Fields_DEFINED)
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSlicedHeirarchyEnablingTask__Fields_DEFINED
struct List_1_UnityEngine_GameObject_;
struct HashSet_1_Moon_ISuspendable_;
struct ITimeSlicedPostEnableObserver__Array;
struct Transform;
struct TimeSlicedHeirarchyEnablingTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct List_1_UnityEngine_GameObject_* m_objectsToTimeSliceEnable;
    struct HashSet_1_Moon_ISuspendable_* m_suspendables;
    struct ITimeSlicedPostEnableObserver__Array* m_postEnabledObservers;
    struct Transform* m_root;
    bool m_reenableRoot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSlicedHeirarchyEnablingTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeSlicedHeirarchyEnablingTask__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/ITimeSlicedPostEnableObserver__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TimeSlicedHeirarchyEnablingTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedHeirarchyEnablingTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeSlicedHeirarchyEnablingTask__Fields_FWDDECL)
#include <Modloader/app/structs/TimeSlicedHeirarchyEnablingTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSlicedHeirarchyEnablingTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

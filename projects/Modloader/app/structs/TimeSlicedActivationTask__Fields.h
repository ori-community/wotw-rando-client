#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSlicedActivationTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSlicedActivationTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedActivationTask__Fields_DEFINED)
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSlicedActivationTask__Fields_DEFINED
struct String;
struct TimeSlicedActivationTask_ObjectActivationInfo__Array;
struct List_1_UnityEngine_GameObject_;
struct List_1_UnityEngine_Component_;
struct TimeSlicedActivationTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct String* _SceneName_k__BackingField;
    struct TimeSlicedActivationTask_ObjectActivationInfo__Array* ObjectActivations;
    int32_t m_expensiveActivationsIndex;
    struct List_1_UnityEngine_GameObject_* m_targetObjects;
    bool m_activate;
    bool m_reversedOrder;
    struct List_1_UnityEngine_Component_* m_postEnabledObservers;
    struct List_1_UnityEngine_Component_* m_preDisableObservers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSlicedActivationTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeSlicedActivationTask__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSlicedActivationTask_ObjectActivationInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_TimeSlicedActivationTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedActivationTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeSlicedActivationTask__Fields_FWDDECL)
#include <Modloader/app/structs/TimeSlicedActivationTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSlicedActivationTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

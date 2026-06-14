#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED
struct IEnumerator;
struct Action_1_Boolean_;
struct Action;
struct String;
struct Func_1_String_;
struct __declspec(align(8)) TimeSlicedCoroutineJob__Fields {
    struct IEnumerator* m_routine;
    float _EnqueuedTime_k__BackingField;
    struct Action_1_Boolean_* OnJobCompleted;
    struct Action* OnJobCancelled;
    bool m_hasStarted;
    bool m_isRunning;
    bool m_canceled;
    struct String* m_jobName;
    struct String* m_ownerName;
    struct String* m_sceneNameData;
    struct String* m_contextualDebugData;
    struct Func_1_String_* m_getCustomName;
    struct Func_1_String_* m_contextualDebugDataFunc;
    float _CustomTimeBudget_k__BackingField;
    float _AvailableBudget_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_FWDDECL)
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

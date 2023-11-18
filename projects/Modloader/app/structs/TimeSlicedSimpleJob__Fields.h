#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSlicedSimpleJob__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSlicedSimpleJob__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedSimpleJob__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSlicedSimpleJob__Fields_DEFINED
struct TimeSlicedSimpleJob_TimeSlicedJobDelegate;
struct String;
struct Func_1_String_;
struct __declspec(align(8)) TimeSlicedSimpleJob__Fields {
    float _EnqueuedTime_k__BackingField;
    struct TimeSlicedSimpleJob_TimeSlicedJobDelegate* m_job;
    bool m_hasFinished;
    int32_t m_index;
    struct String* m_ownerName;
    struct Func_1_String_* m_contextualDebugData;
    float _CustomTimeBudget_k__BackingField;
    float _AvailableBudget_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeSlicedSimpleJob__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeSlicedSimpleJob__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSlicedSimpleJob_TimeSlicedJobDelegate.h>
#endif
#undef IL2CPP_STRUCT_TimeSlicedSimpleJob__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedSimpleJob__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeSlicedSimpleJob__Fields_FWDDECL)
#include <Modloader/app/structs/TimeSlicedSimpleJob__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSlicedSimpleJob__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

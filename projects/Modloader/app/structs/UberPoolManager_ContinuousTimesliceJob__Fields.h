#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolManager_ContinuousTimesliceJob__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolManager_ContinuousTimesliceJob__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolManager_ContinuousTimesliceJob__Fields_DEFINED)
#include <Modloader/app/structs/TimeSlicedJobPriority__Enum.h>
#if defined(IL2CPP_STRUCT_TimeSlicedJobPriority__Enum_DEFINED)
#define IL2CPP_STRUCT_UberPoolManager_ContinuousTimesliceJob__Fields_DEFINED
struct UberPoolManager;
struct String;
struct Func_2_UberPoolManager_Boolean_;
struct __declspec(align(8)) UberPoolManager_ContinuousTimesliceJob__Fields {
    struct UberPoolManager* m_manager;
    struct String* m_name;
    TimeSlicedJobPriority__Enum m_priority;

    struct Func_2_UberPoolManager_Boolean_* m_callback;
    bool m_isQueued;
    bool m_isStillProcessing;
    float _CustomTimeBudget_k__BackingField;
    float _EnqueuedTime_k__BackingField;
    float _AvailableBudget_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolManager_ContinuousTimesliceJob__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolManager_ContinuousTimesliceJob__Fields_FWDDECL
#include <Modloader/app/structs/Func_2_UberPoolManager_Boolean_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberPoolManager.h>
#endif
#undef IL2CPP_STRUCT_UberPoolManager_ContinuousTimesliceJob__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolManager_ContinuousTimesliceJob__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolManager_ContinuousTimesliceJob__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolManager_ContinuousTimesliceJob__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolManager_ContinuousTimesliceJob__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

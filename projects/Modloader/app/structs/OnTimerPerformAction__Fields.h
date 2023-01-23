#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnTimerPerformAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnTimerPerformAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnTimerPerformAction__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_OnTimerPerformAction__Fields_DEFINED
struct ActionMethod;
struct Condition_1;
struct OnTimerPerformAction__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod* Action;
    float Interval;
    struct Condition_1* Condition;
    float Offset;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnTimerPerformAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_OnTimerPerformAction__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_OnTimerPerformAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnTimerPerformAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OnTimerPerformAction__Fields_FWDDECL)
#include <Modloader/app/structs/OnTimerPerformAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnTimerPerformAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

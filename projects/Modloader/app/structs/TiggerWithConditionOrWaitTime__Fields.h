#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TiggerWithConditionOrWaitTime__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TiggerWithConditionOrWaitTime__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TiggerWithConditionOrWaitTime__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_TiggerWithConditionOrWaitTime__Fields_DEFINED
struct ActionMethod;
struct Condition_1;
struct TiggerWithConditionOrWaitTime__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod* Action;
    struct Condition_1* Condition;
    bool TriggerOnce;
    bool UseWaitTime;
    float WaitTime;
    float m_elapsedTime;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TiggerWithConditionOrWaitTime__Fields_FWDDECL)
#define IL2CPP_STRUCT_TiggerWithConditionOrWaitTime__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_TiggerWithConditionOrWaitTime__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TiggerWithConditionOrWaitTime__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TiggerWithConditionOrWaitTime__Fields_FWDDECL)
#include <Modloader/app/structs/TiggerWithConditionOrWaitTime__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TiggerWithConditionOrWaitTime__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

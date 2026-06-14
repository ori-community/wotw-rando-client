#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RunActionAndWait__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RunActionAndWait__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunActionAndWait__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RunActionAndWait__Fields_DEFINED
struct ActionMethod;
struct RunActionAndWait__Fields {
    struct ActionMethod__Fields _;
    float WaitingDuration;
    struct ActionMethod* Action;
    float m_remaingWaitTime;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RunActionAndWait__Fields_FWDDECL)
#define IL2CPP_STRUCT_RunActionAndWait__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#endif
#undef IL2CPP_STRUCT_RunActionAndWait__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunActionAndWait__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RunActionAndWait__Fields_FWDDECL)
#include <Modloader/app/structs/RunActionAndWait__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RunActionAndWait__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

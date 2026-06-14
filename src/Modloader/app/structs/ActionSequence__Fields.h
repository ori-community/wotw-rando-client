#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionSequence__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionSequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionSequence__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ActionSequence__Fields_DEFINED
struct IContext;
struct List_1_ActionMethod_;
struct ActionSequence__Fields {
    struct PerformingAction__Fields _;
    bool m_isRunning;
    int32_t m_index;
    struct IContext* m_context;
    bool m_isSuspended;
    bool HaltExecutionOnException;
    struct List_1_ActionMethod_* Actions;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionSequence__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActionSequence__Fields_FWDDECL
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/List_1_ActionMethod_.h>
#endif
#undef IL2CPP_STRUCT_ActionSequence__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionSequence__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActionSequence__Fields_FWDDECL)
#include <Modloader/app/structs/ActionSequence__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionSequence__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

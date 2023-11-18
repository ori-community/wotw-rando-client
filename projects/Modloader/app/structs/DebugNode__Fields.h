#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugNode__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourNode__Fields.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#if defined(IL2CPP_STRUCT_BehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_DebugNode__Fields_DEFINED
struct String;
struct DebugNode__Fields {
    struct BehaviourNode__Fields _;
    struct String* Message;
    BehaviourStatus__Enum ReturnStatus;

    bool IsTimed;
    float TimeValue;
    BehaviourStatus__Enum RunningReturnStatus;

    bool BreakOnEnter;
    float m_timeRemaining;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugNode__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DebugNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugNode__Fields_FWDDECL)
#include <Modloader/app/structs/DebugNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerAbilityStateMatcher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerAbilityStateMatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAbilityStateMatcher_DEFINED)
#include <Modloader/app/structs/PlayerAbilityStateMatcher__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerAbilityStateMatcher__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerAbilityStateMatcher_DEFINED
struct PlayerAbilityStateMatcher__Class;
struct PlayerAbilityStateMatcher {
    struct PlayerAbilityStateMatcher__Class* klass;
    MonitorData* monitor;
    struct PlayerAbilityStateMatcher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerAbilityStateMatcher_FWDDECL)
#define IL2CPP_STRUCT_PlayerAbilityStateMatcher_FWDDECL
#include <Modloader/app/structs/PlayerAbilityStateMatcher__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerAbilityStateMatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAbilityStateMatcher_DEFINED) && !defined(IL2CPP_STRUCT_PlayerAbilityStateMatcher_FWDDECL)
#include <Modloader/app/structs/PlayerAbilityStateMatcher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerAbilityStateMatcher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

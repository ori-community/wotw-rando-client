#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerAbilityStatePair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerAbilityStatePair_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAbilityStatePair_DEFINED)
#include <Modloader/app/structs/PlayerAbilityStatePair__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerAbilityStatePair__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerAbilityStatePair_DEFINED
struct PlayerAbilityStatePair__Class;
struct PlayerAbilityStatePair {
    struct PlayerAbilityStatePair__Class* klass;
    MonitorData* monitor;
    struct PlayerAbilityStatePair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerAbilityStatePair_FWDDECL)
#define IL2CPP_STRUCT_PlayerAbilityStatePair_FWDDECL
#include <Modloader/app/structs/PlayerAbilityStatePair__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerAbilityStatePair_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAbilityStatePair_DEFINED) && !defined(IL2CPP_STRUCT_PlayerAbilityStatePair_FWDDECL)
#include <Modloader/app/structs/PlayerAbilityStatePair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerAbilityStatePair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

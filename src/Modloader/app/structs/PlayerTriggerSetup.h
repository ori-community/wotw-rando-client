#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerTriggerSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerTriggerSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerTriggerSetup_DEFINED)
#include <Modloader/app/structs/PlayerTriggerSetup__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerTriggerSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerTriggerSetup_DEFINED
struct PlayerTriggerSetup__Class;
struct PlayerTriggerSetup {
    struct PlayerTriggerSetup__Class* klass;
    MonitorData* monitor;
    struct PlayerTriggerSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerTriggerSetup_FWDDECL)
#define IL2CPP_STRUCT_PlayerTriggerSetup_FWDDECL
#include <Modloader/app/structs/PlayerTriggerSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerTriggerSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerTriggerSetup_DEFINED) && !defined(IL2CPP_STRUCT_PlayerTriggerSetup_FWDDECL)
#include <Modloader/app/structs/PlayerTriggerSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerTriggerSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

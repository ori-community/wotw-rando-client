#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerCollisionTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerCollisionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCollisionTrigger_DEFINED)
#include <Modloader/app/structs/PlayerCollisionTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerCollisionTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerCollisionTrigger_DEFINED
struct PlayerCollisionTrigger__Class;
struct PlayerCollisionTrigger {
    struct PlayerCollisionTrigger__Class* klass;
    MonitorData* monitor;
    struct PlayerCollisionTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerCollisionTrigger_FWDDECL)
#define IL2CPP_STRUCT_PlayerCollisionTrigger_FWDDECL
#include <Modloader/app/structs/PlayerCollisionTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerCollisionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCollisionTrigger_DEFINED) && !defined(IL2CPP_STRUCT_PlayerCollisionTrigger_FWDDECL)
#include <Modloader/app/structs/PlayerCollisionTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerCollisionTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

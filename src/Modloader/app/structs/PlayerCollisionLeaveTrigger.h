#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerCollisionLeaveTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerCollisionLeaveTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCollisionLeaveTrigger_DEFINED)
#include <Modloader/app/structs/PlayerCollisionLeaveTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerCollisionLeaveTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerCollisionLeaveTrigger_DEFINED
struct PlayerCollisionLeaveTrigger__Class;
struct PlayerCollisionLeaveTrigger {
    struct PlayerCollisionLeaveTrigger__Class* klass;
    MonitorData* monitor;
    struct PlayerCollisionLeaveTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerCollisionLeaveTrigger_FWDDECL)
#define IL2CPP_STRUCT_PlayerCollisionLeaveTrigger_FWDDECL
#include <Modloader/app/structs/PlayerCollisionLeaveTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerCollisionLeaveTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCollisionLeaveTrigger_DEFINED) && !defined(IL2CPP_STRUCT_PlayerCollisionLeaveTrigger_FWDDECL)
#include <Modloader/app/structs/PlayerCollisionLeaveTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerCollisionLeaveTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

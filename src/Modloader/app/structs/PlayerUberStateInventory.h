#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateInventory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateInventory_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_DEFINED)
#include <Modloader/app/structs/PlayerUberStateInventory__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberStateInventory__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateInventory_DEFINED
struct PlayerUberStateInventory__Class;
struct PlayerUberStateInventory {
    struct PlayerUberStateInventory__Class* klass;
    MonitorData* monitor;
    struct PlayerUberStateInventory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateInventory_FWDDECL
#include <Modloader/app/structs/PlayerUberStateInventory__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateInventory_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateInventory_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateInventory_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateInventory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateInventory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

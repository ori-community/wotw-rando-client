#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInventory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInventory_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInventory_DEFINED)
#include <Modloader/app/structs/PlayerInventory__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerInventory__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInventory_DEFINED
struct PlayerInventory__Class;
struct PlayerInventory {
    struct PlayerInventory__Class* klass;
    MonitorData* monitor;
    struct PlayerInventory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInventory_FWDDECL)
#define IL2CPP_STRUCT_PlayerInventory_FWDDECL
#include <Modloader/app/structs/PlayerInventory__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerInventory_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInventory_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInventory_FWDDECL)
#include <Modloader/app/structs/PlayerInventory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInventory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

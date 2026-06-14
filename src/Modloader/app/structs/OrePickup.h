#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrePickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrePickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrePickup_DEFINED)
#include <Modloader/app/structs/OrePickup__Fields.h>
#if defined(IL2CPP_STRUCT_OrePickup__Fields_DEFINED)
#define IL2CPP_STRUCT_OrePickup_DEFINED
struct OrePickup__Class;
struct OrePickup {
    struct OrePickup__Class* klass;
    MonitorData* monitor;
    struct OrePickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OrePickup_FWDDECL)
#define IL2CPP_STRUCT_OrePickup_FWDDECL
#include <Modloader/app/structs/OrePickup__Class.h>
#endif
#undef IL2CPP_STRUCT_OrePickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrePickup_DEFINED) && !defined(IL2CPP_STRUCT_OrePickup_FWDDECL)
#include <Modloader/app/structs/OrePickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrePickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

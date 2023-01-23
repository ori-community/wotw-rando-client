#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpOrbPickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpOrbPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpOrbPickup_DEFINED)
#include <Modloader/app/structs/ExpOrbPickup__Fields.h>
#if defined(IL2CPP_STRUCT_ExpOrbPickup__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpOrbPickup_DEFINED
struct ExpOrbPickup__Class;
struct ExpOrbPickup {
    struct ExpOrbPickup__Class* klass;
    MonitorData* monitor;
    struct ExpOrbPickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpOrbPickup_FWDDECL)
#define IL2CPP_STRUCT_ExpOrbPickup_FWDDECL
#include <Modloader/app/structs/ExpOrbPickup__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpOrbPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpOrbPickup_DEFINED) && !defined(IL2CPP_STRUCT_ExpOrbPickup_FWDDECL)
#include <Modloader/app/structs/ExpOrbPickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpOrbPickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

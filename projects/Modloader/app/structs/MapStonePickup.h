#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapStonePickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapStonePickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapStonePickup_DEFINED)
#include <Modloader/app/structs/MapStonePickup__Fields.h>
#if defined(IL2CPP_STRUCT_MapStonePickup__Fields_DEFINED)
#define IL2CPP_STRUCT_MapStonePickup_DEFINED
struct MapStonePickup__Class;
struct MapStonePickup {
    struct MapStonePickup__Class* klass;
    MonitorData* monitor;
    struct MapStonePickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapStonePickup_FWDDECL)
#define IL2CPP_STRUCT_MapStonePickup_FWDDECL
#include <Modloader/app/structs/MapStonePickup__Class.h>
#endif
#undef IL2CPP_STRUCT_MapStonePickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapStonePickup_DEFINED) && !defined(IL2CPP_STRUCT_MapStonePickup_FWDDECL)
#include <Modloader/app/structs/MapStonePickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapStonePickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

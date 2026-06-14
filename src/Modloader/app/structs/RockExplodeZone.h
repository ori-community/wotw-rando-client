#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockExplodeZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockExplodeZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockExplodeZone_DEFINED)
#include <Modloader/app/structs/RockExplodeZone__Fields.h>
#if defined(IL2CPP_STRUCT_RockExplodeZone__Fields_DEFINED)
#define IL2CPP_STRUCT_RockExplodeZone_DEFINED
struct RockExplodeZone__Class;
struct RockExplodeZone {
    struct RockExplodeZone__Class* klass;
    MonitorData* monitor;
    struct RockExplodeZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockExplodeZone_FWDDECL)
#define IL2CPP_STRUCT_RockExplodeZone_FWDDECL
#include <Modloader/app/structs/RockExplodeZone__Class.h>
#endif
#undef IL2CPP_STRUCT_RockExplodeZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockExplodeZone_DEFINED) && !defined(IL2CPP_STRUCT_RockExplodeZone_FWDDECL)
#include <Modloader/app/structs/RockExplodeZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockExplodeZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

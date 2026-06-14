#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSystem_DEFINED)
#include <Modloader/app/structs/RaceSystem__Fields.h>
#if defined(IL2CPP_STRUCT_RaceSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceSystem_DEFINED
struct RaceSystem__Class;
struct RaceSystem {
    struct RaceSystem__Class* klass;
    MonitorData* monitor;
    struct RaceSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceSystem_FWDDECL)
#define IL2CPP_STRUCT_RaceSystem_FWDDECL
#include <Modloader/app/structs/RaceSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSystem_DEFINED) && !defined(IL2CPP_STRUCT_RaceSystem_FWDDECL)
#include <Modloader/app/structs/RaceSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

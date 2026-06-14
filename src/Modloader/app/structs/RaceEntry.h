#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceEntry_DEFINED)
#include <Modloader/app/structs/RaceEntry__Fields.h>
#if defined(IL2CPP_STRUCT_RaceEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceEntry_DEFINED
struct RaceEntry__Class;
struct RaceEntry {
    struct RaceEntry__Class* klass;
    MonitorData* monitor;
    struct RaceEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceEntry_FWDDECL)
#define IL2CPP_STRUCT_RaceEntry_FWDDECL
#include <Modloader/app/structs/RaceEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceEntry_DEFINED) && !defined(IL2CPP_STRUCT_RaceEntry_FWDDECL)
#include <Modloader/app/structs/RaceEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

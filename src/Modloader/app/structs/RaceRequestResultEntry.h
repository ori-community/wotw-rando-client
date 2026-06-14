#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceRequestResultEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceRequestResultEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRequestResultEntry_DEFINED)
#include <Modloader/app/structs/RaceRequestResultEntry__Fields.h>
#if defined(IL2CPP_STRUCT_RaceRequestResultEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceRequestResultEntry_DEFINED
struct RaceRequestResultEntry__Class;
struct RaceRequestResultEntry {
    struct RaceRequestResultEntry__Class* klass;
    MonitorData* monitor;
    struct RaceRequestResultEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceRequestResultEntry_FWDDECL)
#define IL2CPP_STRUCT_RaceRequestResultEntry_FWDDECL
#include <Modloader/app/structs/RaceRequestResultEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceRequestResultEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRequestResultEntry_DEFINED) && !defined(IL2CPP_STRUCT_RaceRequestResultEntry_FWDDECL)
#include <Modloader/app/structs/RaceRequestResultEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceRequestResultEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

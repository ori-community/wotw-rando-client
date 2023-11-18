#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StormZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StormZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_StormZone_DEFINED)
#include <Modloader/app/structs/StormZone__Fields.h>
#if defined(IL2CPP_STRUCT_StormZone__Fields_DEFINED)
#define IL2CPP_STRUCT_StormZone_DEFINED
struct StormZone__Class;
struct StormZone {
    struct StormZone__Class* klass;
    MonitorData* monitor;
    struct StormZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StormZone_FWDDECL)
#define IL2CPP_STRUCT_StormZone_FWDDECL
#include <Modloader/app/structs/StormZone__Class.h>
#endif
#undef IL2CPP_STRUCT_StormZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_StormZone_DEFINED) && !defined(IL2CPP_STRUCT_StormZone_FWDDECL)
#include <Modloader/app/structs/StormZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StormZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

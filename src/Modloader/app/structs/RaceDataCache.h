#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceDataCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceDataCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceDataCache_DEFINED)
#include <Modloader/app/structs/RaceDataCache__Fields.h>
#if defined(IL2CPP_STRUCT_RaceDataCache__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceDataCache_DEFINED
struct RaceDataCache__Class;
struct RaceDataCache {
    struct RaceDataCache__Class* klass;
    MonitorData* monitor;
    struct RaceDataCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceDataCache_FWDDECL)
#define IL2CPP_STRUCT_RaceDataCache_FWDDECL
#include <Modloader/app/structs/RaceDataCache__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceDataCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceDataCache_DEFINED) && !defined(IL2CPP_STRUCT_RaceDataCache_FWDDECL)
#include <Modloader/app/structs/RaceDataCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceDataCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

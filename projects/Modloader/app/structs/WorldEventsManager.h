#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldEventsManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldEventsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEventsManager_DEFINED)
#include <Modloader/app/structs/WorldEventsManager__Fields.h>
#if defined(IL2CPP_STRUCT_WorldEventsManager__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldEventsManager_DEFINED
struct WorldEventsManager__Class;
struct WorldEventsManager {
    struct WorldEventsManager__Class* klass;
    MonitorData* monitor;
    struct WorldEventsManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldEventsManager_FWDDECL)
#define IL2CPP_STRUCT_WorldEventsManager_FWDDECL
#include <Modloader/app/structs/WorldEventsManager__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldEventsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEventsManager_DEFINED) && !defined(IL2CPP_STRUCT_WorldEventsManager_FWDDECL)
#include <Modloader/app/structs/WorldEventsManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldEventsManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

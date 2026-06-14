#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldEventsSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldEventsSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEventsSelector_DEFINED)
#define IL2CPP_STRUCT_WorldEventsSelector_DEFINED
struct WorldEventsSelector__Class;
struct WorldEventsSelector {
    struct WorldEventsSelector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WorldEventsSelector_FWDDECL)
#define IL2CPP_STRUCT_WorldEventsSelector_FWDDECL
#include <Modloader/app/structs/WorldEventsSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldEventsSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEventsSelector_DEFINED) && !defined(IL2CPP_STRUCT_WorldEventsSelector_FWDDECL)
#include <Modloader/app/structs/WorldEventsSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldEventsSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

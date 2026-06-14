#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldAnchor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldAnchor_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldAnchor_DEFINED)
#include <Modloader/app/structs/WorldAnchor__Fields.h>
#if defined(IL2CPP_STRUCT_WorldAnchor__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldAnchor_DEFINED
struct WorldAnchor__Class;
struct WorldAnchor {
    struct WorldAnchor__Class* klass;
    MonitorData* monitor;
    struct WorldAnchor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldAnchor_FWDDECL)
#define IL2CPP_STRUCT_WorldAnchor_FWDDECL
#include <Modloader/app/structs/WorldAnchor__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldAnchor_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldAnchor_DEFINED) && !defined(IL2CPP_STRUCT_WorldAnchor_FWDDECL)
#include <Modloader/app/structs/WorldAnchor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldAnchor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

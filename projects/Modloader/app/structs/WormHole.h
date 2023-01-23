#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormHole_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormHole_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormHole_DEFINED)
#include <Modloader/app/structs/WormHole__Fields.h>
#if defined(IL2CPP_STRUCT_WormHole__Fields_DEFINED)
#define IL2CPP_STRUCT_WormHole_DEFINED
struct WormHole__Class;
struct WormHole {
    struct WormHole__Class* klass;
    MonitorData* monitor;
    struct WormHole__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormHole_FWDDECL)
#define IL2CPP_STRUCT_WormHole_FWDDECL
#include <Modloader/app/structs/WormHole__Class.h>
#endif
#undef IL2CPP_STRUCT_WormHole_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormHole_DEFINED) && !defined(IL2CPP_STRUCT_WormHole_FWDDECL)
#include <Modloader/app/structs/WormHole.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormHole.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

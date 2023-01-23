#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_World_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_World_INITIALIZING
#if !defined(IL2CPP_STRUCT_World_DEFINED)
#define IL2CPP_STRUCT_World_DEFINED
struct World__Class;
struct World {
    struct World__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_World_FWDDECL)
#define IL2CPP_STRUCT_World_FWDDECL
#include <Modloader/app/structs/World__Class.h>
#endif
#undef IL2CPP_STRUCT_World_INITIALIZING
#if !defined(IL2CPP_STRUCT_World_DEFINED) && !defined(IL2CPP_STRUCT_World_FWDDECL)
#include <Modloader/app/structs/World.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/World.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

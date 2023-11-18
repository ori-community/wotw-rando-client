#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatchedSpherecast_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatchedSpherecast_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatchedSpherecast_DEFINED)
#include <Modloader/app/structs/BatchedSpherecast__Fields.h>
#if defined(IL2CPP_STRUCT_BatchedSpherecast__Fields_DEFINED)
#define IL2CPP_STRUCT_BatchedSpherecast_DEFINED
struct BatchedSpherecast__Class;
struct BatchedSpherecast {
    struct BatchedSpherecast__Class* klass;
    MonitorData* monitor;
    struct BatchedSpherecast__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatchedSpherecast_FWDDECL)
#define IL2CPP_STRUCT_BatchedSpherecast_FWDDECL
#include <Modloader/app/structs/BatchedSpherecast__Class.h>
#endif
#undef IL2CPP_STRUCT_BatchedSpherecast_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatchedSpherecast_DEFINED) && !defined(IL2CPP_STRUCT_BatchedSpherecast_FWDDECL)
#include <Modloader/app/structs/BatchedSpherecast.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatchedSpherecast.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

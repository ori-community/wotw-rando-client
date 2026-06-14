#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatchedRaycast_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatchedRaycast_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatchedRaycast_DEFINED)
#include <Modloader/app/structs/BatchedRaycast__Fields.h>
#if defined(IL2CPP_STRUCT_BatchedRaycast__Fields_DEFINED)
#define IL2CPP_STRUCT_BatchedRaycast_DEFINED
struct BatchedRaycast__Class;
struct BatchedRaycast {
    struct BatchedRaycast__Class* klass;
    MonitorData* monitor;
    struct BatchedRaycast__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatchedRaycast_FWDDECL)
#define IL2CPP_STRUCT_BatchedRaycast_FWDDECL
#include <Modloader/app/structs/BatchedRaycast__Class.h>
#endif
#undef IL2CPP_STRUCT_BatchedRaycast_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatchedRaycast_DEFINED) && !defined(IL2CPP_STRUCT_BatchedRaycast_FWDDECL)
#include <Modloader/app/structs/BatchedRaycast.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatchedRaycast.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

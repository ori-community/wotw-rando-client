#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncRaycast_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncRaycast_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRaycast_DEFINED)
#include <Modloader/app/structs/AsyncRaycast__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncRaycast__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncRaycast_DEFINED
struct AsyncRaycast__Class;
struct AsyncRaycast {
    struct AsyncRaycast__Class* klass;
    MonitorData* monitor;
    struct AsyncRaycast__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncRaycast_FWDDECL)
#define IL2CPP_STRUCT_AsyncRaycast_FWDDECL
#include <Modloader/app/structs/AsyncRaycast__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncRaycast_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRaycast_DEFINED) && !defined(IL2CPP_STRUCT_AsyncRaycast_FWDDECL)
#include <Modloader/app/structs/AsyncRaycast.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncRaycast.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

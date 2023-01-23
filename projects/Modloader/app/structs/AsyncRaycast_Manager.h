#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncRaycast_Manager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncRaycast_Manager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRaycast_Manager_DEFINED)
#include <Modloader/app/structs/AsyncRaycast_Manager__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncRaycast_Manager__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncRaycast_Manager_DEFINED
struct AsyncRaycast_Manager__Class;
struct AsyncRaycast_Manager {
    struct AsyncRaycast_Manager__Class* klass;
    MonitorData* monitor;
    struct AsyncRaycast_Manager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncRaycast_Manager_FWDDECL)
#define IL2CPP_STRUCT_AsyncRaycast_Manager_FWDDECL
#include <Modloader/app/structs/AsyncRaycast_Manager__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncRaycast_Manager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRaycast_Manager_DEFINED) && !defined(IL2CPP_STRUCT_AsyncRaycast_Manager_FWDDECL)
#include <Modloader/app/structs/AsyncRaycast_Manager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncRaycast_Manager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaycastCommand__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaycastCommand__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastCommand__Boxed_DEFINED)
#include <Modloader/app/structs/RaycastCommand.h>
#if defined(IL2CPP_STRUCT_RaycastCommand_DEFINED)
#define IL2CPP_STRUCT_RaycastCommand__Boxed_DEFINED
struct RaycastCommand__Class;
struct RaycastCommand__Boxed {
    struct RaycastCommand__Class* klass;
    MonitorData* monitor;
    struct RaycastCommand fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaycastCommand__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RaycastCommand__Boxed_FWDDECL
#include <Modloader/app/structs/RaycastCommand__Class.h>
#endif
#undef IL2CPP_STRUCT_RaycastCommand__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastCommand__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RaycastCommand__Boxed_FWDDECL)
#include <Modloader/app/structs/RaycastCommand__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaycastCommand__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

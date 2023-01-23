#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaycastHit__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaycastHit__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastHit__Boxed_DEFINED)
#include <Modloader/app/structs/RaycastHit.h>
#if defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_RaycastHit__Boxed_DEFINED
struct RaycastHit__Class;
struct RaycastHit__Boxed {
    struct RaycastHit__Class* klass;
    MonitorData* monitor;
    struct RaycastHit fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaycastHit__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RaycastHit__Boxed_FWDDECL
#include <Modloader/app/structs/RaycastHit__Class.h>
#endif
#undef IL2CPP_STRUCT_RaycastHit__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastHit__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RaycastHit__Boxed_FWDDECL)
#include <Modloader/app/structs/RaycastHit__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaycastHit__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

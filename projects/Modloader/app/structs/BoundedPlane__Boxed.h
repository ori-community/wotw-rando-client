#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoundedPlane__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoundedPlane__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoundedPlane__Boxed_DEFINED)
#include <Modloader/app/structs/BoundedPlane.h>
#if defined(IL2CPP_STRUCT_BoundedPlane_DEFINED)
#define IL2CPP_STRUCT_BoundedPlane__Boxed_DEFINED
struct BoundedPlane__Class;
struct BoundedPlane__Boxed {
    struct BoundedPlane__Class* klass;
    MonitorData* monitor;
    struct BoundedPlane fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoundedPlane__Boxed_FWDDECL)
#define IL2CPP_STRUCT_BoundedPlane__Boxed_FWDDECL
#include <Modloader/app/structs/BoundedPlane__Class.h>
#endif
#undef IL2CPP_STRUCT_BoundedPlane__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoundedPlane__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_BoundedPlane__Boxed_FWDDECL)
#include <Modloader/app/structs/BoundedPlane__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoundedPlane__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

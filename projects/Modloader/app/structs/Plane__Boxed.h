#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Plane__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Plane__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Plane__Boxed_DEFINED)
#include <Modloader/app/structs/Plane.h>
#if defined(IL2CPP_STRUCT_Plane_DEFINED)
#define IL2CPP_STRUCT_Plane__Boxed_DEFINED
struct Plane__Class;
struct Plane__Boxed {
    struct Plane__Class* klass;
    MonitorData* monitor;
    struct Plane fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Plane__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Plane__Boxed_FWDDECL
#include <Modloader/app/structs/Plane__Class.h>
#endif
#undef IL2CPP_STRUCT_Plane__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Plane__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Plane__Boxed_FWDDECL)
#include <Modloader/app/structs/Plane__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Plane__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSystem__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSystem__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSystem__Boxed_DEFINED)
#include <Modloader/app/structs/IVRSystem.h>
#if defined(IL2CPP_STRUCT_IVRSystem_DEFINED)
#define IL2CPP_STRUCT_IVRSystem__Boxed_DEFINED
struct IVRSystem__Class;
struct IVRSystem__Boxed {
    struct IVRSystem__Class* klass;
    MonitorData* monitor;
    struct IVRSystem fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSystem__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IVRSystem__Boxed_FWDDECL
#include <Modloader/app/structs/IVRSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSystem__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSystem__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IVRSystem__Boxed_FWDDECL)
#include <Modloader/app/structs/IVRSystem__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSystem__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

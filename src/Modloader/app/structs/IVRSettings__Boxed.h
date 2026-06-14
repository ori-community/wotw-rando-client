#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings__Boxed_DEFINED)
#include <Modloader/app/structs/IVRSettings.h>
#if defined(IL2CPP_STRUCT_IVRSettings_DEFINED)
#define IL2CPP_STRUCT_IVRSettings__Boxed_DEFINED
struct IVRSettings__Class;
struct IVRSettings__Boxed {
    struct IVRSettings__Class* klass;
    MonitorData* monitor;
    struct IVRSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IVRSettings__Boxed_FWDDECL
#include <Modloader/app/structs/IVRSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IVRSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/IVRSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

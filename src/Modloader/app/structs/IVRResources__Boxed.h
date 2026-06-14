#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRResources__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRResources__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRResources__Boxed_DEFINED)
#include <Modloader/app/structs/IVRResources.h>
#if defined(IL2CPP_STRUCT_IVRResources_DEFINED)
#define IL2CPP_STRUCT_IVRResources__Boxed_DEFINED
struct IVRResources__Class;
struct IVRResources__Boxed {
    struct IVRResources__Class* klass;
    MonitorData* monitor;
    struct IVRResources fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRResources__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IVRResources__Boxed_FWDDECL
#include <Modloader/app/structs/IVRResources__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRResources__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRResources__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IVRResources__Boxed_FWDDECL)
#include <Modloader/app/structs/IVRResources__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRResources__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

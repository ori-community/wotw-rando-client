#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickUpSphere_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickUpSphere_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickUpSphere_DEFINED)
#include <Modloader/app/structs/PickUpSphere__Fields.h>
#if defined(IL2CPP_STRUCT_PickUpSphere__Fields_DEFINED)
#define IL2CPP_STRUCT_PickUpSphere_DEFINED
struct PickUpSphere__Class;
struct PickUpSphere {
    struct PickUpSphere__Class* klass;
    MonitorData* monitor;
    struct PickUpSphere__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickUpSphere_FWDDECL)
#define IL2CPP_STRUCT_PickUpSphere_FWDDECL
#include <Modloader/app/structs/PickUpSphere__Class.h>
#endif
#undef IL2CPP_STRUCT_PickUpSphere_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickUpSphere_DEFINED) && !defined(IL2CPP_STRUCT_PickUpSphere_FWDDECL)
#include <Modloader/app/structs/PickUpSphere.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickUpSphere.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

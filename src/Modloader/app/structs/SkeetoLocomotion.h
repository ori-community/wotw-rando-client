#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoLocomotion_DEFINED)
#include <Modloader/app/structs/SkeetoLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_SkeetoLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoLocomotion_DEFINED
struct SkeetoLocomotion__Class;
struct SkeetoLocomotion {
    struct SkeetoLocomotion__Class* klass;
    MonitorData* monitor;
    struct SkeetoLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoLocomotion_FWDDECL)
#define IL2CPP_STRUCT_SkeetoLocomotion_FWDDECL
#include <Modloader/app/structs/SkeetoLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_SkeetoLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoLocomotion_FWDDECL)
#include <Modloader/app/structs/SkeetoLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

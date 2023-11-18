#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballLocomotion_DEFINED)
#include <Modloader/app/structs/GasballLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_GasballLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_GasballLocomotion_DEFINED
struct GasballLocomotion__Class;
struct GasballLocomotion {
    struct GasballLocomotion__Class* klass;
    MonitorData* monitor;
    struct GasballLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballLocomotion_FWDDECL)
#define IL2CPP_STRUCT_GasballLocomotion_FWDDECL
#include <Modloader/app/structs/GasballLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_GasballLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_GasballLocomotion_FWDDECL)
#include <Modloader/app/structs/GasballLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

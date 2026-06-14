#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandTrail_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandTrail_DEFINED)
#include <Modloader/app/structs/SandTrail__Fields.h>
#if defined(IL2CPP_STRUCT_SandTrail__Fields_DEFINED)
#define IL2CPP_STRUCT_SandTrail_DEFINED
struct SandTrail__Class;
struct SandTrail {
    struct SandTrail__Class* klass;
    MonitorData* monitor;
    struct SandTrail__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandTrail_FWDDECL)
#define IL2CPP_STRUCT_SandTrail_FWDDECL
#include <Modloader/app/structs/SandTrail__Class.h>
#endif
#undef IL2CPP_STRUCT_SandTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandTrail_DEFINED) && !defined(IL2CPP_STRUCT_SandTrail_FWDDECL)
#include <Modloader/app/structs/SandTrail.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandTrail.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

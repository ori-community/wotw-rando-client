#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostAnimationData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostAnimationData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostAnimationData_DEFINED)
#include <Modloader/app/structs/GhostAnimationData__Fields.h>
#if defined(IL2CPP_STRUCT_GhostAnimationData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostAnimationData_DEFINED
struct GhostAnimationData__Class;
struct GhostAnimationData {
    struct GhostAnimationData__Class* klass;
    MonitorData* monitor;
    struct GhostAnimationData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostAnimationData_FWDDECL)
#define IL2CPP_STRUCT_GhostAnimationData_FWDDECL
#include <Modloader/app/structs/GhostAnimationData__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostAnimationData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostAnimationData_DEFINED) && !defined(IL2CPP_STRUCT_GhostAnimationData_FWDDECL)
#include <Modloader/app/structs/GhostAnimationData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostAnimationData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

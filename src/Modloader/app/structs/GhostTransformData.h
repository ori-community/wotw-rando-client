#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostTransformData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostTransformData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTransformData_DEFINED)
#include <Modloader/app/structs/GhostTransformData__Fields.h>
#if defined(IL2CPP_STRUCT_GhostTransformData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostTransformData_DEFINED
struct GhostTransformData__Class;
struct GhostTransformData {
    struct GhostTransformData__Class* klass;
    MonitorData* monitor;
    struct GhostTransformData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostTransformData_FWDDECL)
#define IL2CPP_STRUCT_GhostTransformData_FWDDECL
#include <Modloader/app/structs/GhostTransformData__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostTransformData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTransformData_DEFINED) && !defined(IL2CPP_STRUCT_GhostTransformData_FWDDECL)
#include <Modloader/app/structs/GhostTransformData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostTransformData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GizmoSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GizmoSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_GizmoSystem_DEFINED)
#define IL2CPP_STRUCT_GizmoSystem_DEFINED
struct GizmoSystem__Class;
struct GizmoSystem {
    struct GizmoSystem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GizmoSystem_FWDDECL)
#define IL2CPP_STRUCT_GizmoSystem_FWDDECL
#include <Modloader/app/structs/GizmoSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_GizmoSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_GizmoSystem_DEFINED) && !defined(IL2CPP_STRUCT_GizmoSystem_FWDDECL)
#include <Modloader/app/structs/GizmoSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GizmoSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

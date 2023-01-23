#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GizmoHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GizmoHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_GizmoHelper_DEFINED)
#define IL2CPP_STRUCT_GizmoHelper_DEFINED
struct GizmoHelper__Class;
struct GizmoHelper {
    struct GizmoHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GizmoHelper_FWDDECL)
#define IL2CPP_STRUCT_GizmoHelper_FWDDECL
#include <Modloader/app/structs/GizmoHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_GizmoHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_GizmoHelper_DEFINED) && !defined(IL2CPP_STRUCT_GizmoHelper_FWDDECL)
#include <Modloader/app/structs/GizmoHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GizmoHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

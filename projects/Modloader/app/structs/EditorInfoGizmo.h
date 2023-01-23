#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EditorInfoGizmo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EditorInfoGizmo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorInfoGizmo_DEFINED)
#define IL2CPP_STRUCT_EditorInfoGizmo_DEFINED
struct EditorInfoGizmo__Class;
struct EditorInfoGizmo {
    struct EditorInfoGizmo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EditorInfoGizmo_FWDDECL)
#define IL2CPP_STRUCT_EditorInfoGizmo_FWDDECL
#include <Modloader/app/structs/EditorInfoGizmo__Class.h>
#endif
#undef IL2CPP_STRUCT_EditorInfoGizmo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorInfoGizmo_DEFINED) && !defined(IL2CPP_STRUCT_EditorInfoGizmo_FWDDECL)
#include <Modloader/app/structs/EditorInfoGizmo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EditorInfoGizmo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

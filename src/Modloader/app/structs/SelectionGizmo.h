#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SelectionGizmo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SelectionGizmo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectionGizmo_DEFINED)
#include <Modloader/app/structs/SelectionGizmo__Fields.h>
#if defined(IL2CPP_STRUCT_SelectionGizmo__Fields_DEFINED)
#define IL2CPP_STRUCT_SelectionGizmo_DEFINED
struct SelectionGizmo__Class;
struct SelectionGizmo {
    struct SelectionGizmo__Class* klass;
    MonitorData* monitor;
    struct SelectionGizmo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SelectionGizmo_FWDDECL)
#define IL2CPP_STRUCT_SelectionGizmo_FWDDECL
#include <Modloader/app/structs/SelectionGizmo__Class.h>
#endif
#undef IL2CPP_STRUCT_SelectionGizmo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectionGizmo_DEFINED) && !defined(IL2CPP_STRUCT_SelectionGizmo_FWDDECL)
#include <Modloader/app/structs/SelectionGizmo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SelectionGizmo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

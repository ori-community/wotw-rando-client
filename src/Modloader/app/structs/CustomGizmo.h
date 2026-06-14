#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomGizmo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomGizmo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomGizmo_DEFINED)
#include <Modloader/app/structs/CustomGizmo__Fields.h>
#if defined(IL2CPP_STRUCT_CustomGizmo__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomGizmo_DEFINED
struct CustomGizmo__Class;
struct CustomGizmo {
    struct CustomGizmo__Class* klass;
    MonitorData* monitor;
    struct CustomGizmo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomGizmo_FWDDECL)
#define IL2CPP_STRUCT_CustomGizmo_FWDDECL
#include <Modloader/app/structs/CustomGizmo__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomGizmo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomGizmo_DEFINED) && !defined(IL2CPP_STRUCT_CustomGizmo_FWDDECL)
#include <Modloader/app/structs/CustomGizmo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomGizmo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

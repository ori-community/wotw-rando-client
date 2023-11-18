#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGizmo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGizmo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGizmo_DEFINED)
#define IL2CPP_STRUCT_IGizmo_DEFINED
struct IGizmo__Class;
struct IGizmo {
    struct IGizmo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGizmo_FWDDECL)
#define IL2CPP_STRUCT_IGizmo_FWDDECL
#include <Modloader/app/structs/IGizmo__Class.h>
#endif
#undef IL2CPP_STRUCT_IGizmo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGizmo_DEFINED) && !defined(IL2CPP_STRUCT_IGizmo_FWDDECL)
#include <Modloader/app/structs/IGizmo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGizmo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

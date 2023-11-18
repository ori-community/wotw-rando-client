#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGizmoResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGizmoResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGizmoResolver_DEFINED)
#define IL2CPP_STRUCT_IGizmoResolver_DEFINED
struct IGizmoResolver__Class;
struct IGizmoResolver {
    struct IGizmoResolver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGizmoResolver_FWDDECL)
#define IL2CPP_STRUCT_IGizmoResolver_FWDDECL
#include <Modloader/app/structs/IGizmoResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_IGizmoResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGizmoResolver_DEFINED) && !defined(IL2CPP_STRUCT_IGizmoResolver_FWDDECL)
#include <Modloader/app/structs/IGizmoResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGizmoResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

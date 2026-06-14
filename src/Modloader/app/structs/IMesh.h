#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMesh_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMesh_DEFINED)
#define IL2CPP_STRUCT_IMesh_DEFINED
struct IMesh__Class;
struct IMesh {
    struct IMesh__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMesh_FWDDECL)
#define IL2CPP_STRUCT_IMesh_FWDDECL
#include <Modloader/app/structs/IMesh__Class.h>
#endif
#undef IL2CPP_STRUCT_IMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMesh_DEFINED) && !defined(IL2CPP_STRUCT_IMesh_FWDDECL)
#include <Modloader/app/structs/IMesh.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMesh.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

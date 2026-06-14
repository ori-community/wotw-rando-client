#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Mesh_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Mesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mesh_DEFINED)
#include <Modloader/app/structs/Mesh__Fields.h>
#if defined(IL2CPP_STRUCT_Mesh__Fields_DEFINED)
#define IL2CPP_STRUCT_Mesh_DEFINED
struct Mesh__Class;
struct Mesh {
    struct Mesh__Class* klass;
    MonitorData* monitor;
    struct Mesh__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Mesh_FWDDECL)
#define IL2CPP_STRUCT_Mesh_FWDDECL
#include <Modloader/app/structs/Mesh__Class.h>
#endif
#undef IL2CPP_STRUCT_Mesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mesh_DEFINED) && !defined(IL2CPP_STRUCT_Mesh_FWDDECL)
#include <Modloader/app/structs/Mesh.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Mesh.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

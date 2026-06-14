#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Tree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Tree_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Tree_DEFINED)
#include <Modloader/app/structs/P3D_Tree__Fields.h>
#if defined(IL2CPP_STRUCT_P3D_Tree__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_Tree_DEFINED
struct P3D_Tree__Class;
struct P3D_Tree {
    struct P3D_Tree__Class* klass;
    MonitorData* monitor;
    struct P3D_Tree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Tree_FWDDECL)
#define IL2CPP_STRUCT_P3D_Tree_FWDDECL
#include <Modloader/app/structs/P3D_Tree__Class.h>
#endif
#undef IL2CPP_STRUCT_P3D_Tree_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Tree_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Tree_FWDDECL)
#include <Modloader/app/structs/P3D_Tree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Tree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

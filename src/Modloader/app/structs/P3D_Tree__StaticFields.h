#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Tree__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Tree__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Tree__StaticFields_DEFINED)
#define IL2CPP_STRUCT_P3D_Tree__StaticFields_DEFINED
struct List_1_P3D_Triangle_;
struct List_1_P3D_Result_;
struct P3D_Tree;
struct P3D_Tree__StaticFields {
    struct List_1_P3D_Triangle_* potentials;
    struct List_1_P3D_Result_* results;
    struct P3D_Tree* tempInstance;
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_Tree__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_P3D_Tree__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_P3D_Result_.h>
#include <Modloader/app/structs/List_1_P3D_Triangle_.h>
#include <Modloader/app/structs/P3D_Tree.h>
#endif
#undef IL2CPP_STRUCT_P3D_Tree__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Tree__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Tree__StaticFields_FWDDECL)
#include <Modloader/app/structs/P3D_Tree__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Tree__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

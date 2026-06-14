#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tree__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tree__Fields_DEFINED)
#define IL2CPP_STRUCT_Tree__Fields_DEFINED
struct Int16__Array;
struct StaticTree;
struct __declspec(align(8)) Tree__Fields {
    struct Int16__Array* dyn_tree;
    int32_t max_code;
    struct StaticTree* staticTree;
};
#endif
#if !defined(IL2CPP_STRUCT_Tree__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tree__Fields_FWDDECL
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/StaticTree.h>
#endif
#undef IL2CPP_STRUCT_Tree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tree__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tree__Fields_FWDDECL)
#include <Modloader/app/structs/Tree__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tree__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

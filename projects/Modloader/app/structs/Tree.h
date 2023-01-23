#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tree_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tree_DEFINED)
#include <Modloader/app/structs/Tree__Fields.h>
#if defined(IL2CPP_STRUCT_Tree__Fields_DEFINED)
#define IL2CPP_STRUCT_Tree_DEFINED
struct Tree__Class;
struct Tree {
    struct Tree__Class* klass;
    MonitorData* monitor;
    struct Tree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tree_FWDDECL)
#define IL2CPP_STRUCT_Tree_FWDDECL
#include <Modloader/app/structs/Tree__Class.h>
#endif
#undef IL2CPP_STRUCT_Tree_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tree_DEFINED) && !defined(IL2CPP_STRUCT_Tree_FWDDECL)
#include <Modloader/app/structs/Tree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

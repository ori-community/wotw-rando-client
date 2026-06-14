#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TreeBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TreeBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TreeBehaviour_DEFINED)
#include <Modloader/app/structs/TreeBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TreeBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TreeBehaviour_DEFINED
struct TreeBehaviour__Class;
struct TreeBehaviour {
    struct TreeBehaviour__Class* klass;
    MonitorData* monitor;
    struct TreeBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TreeBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TreeBehaviour_FWDDECL
#include <Modloader/app/structs/TreeBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TreeBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TreeBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TreeBehaviour_FWDDECL)
#include <Modloader/app/structs/TreeBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TreeBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraversalBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraversalBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraversalBehaviour_DEFINED)
#include <Modloader/app/structs/TraversalBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TraversalBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TraversalBehaviour_DEFINED
struct TraversalBehaviour__Class;
struct TraversalBehaviour {
    struct TraversalBehaviour__Class* klass;
    MonitorData* monitor;
    struct TraversalBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraversalBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TraversalBehaviour_FWDDECL
#include <Modloader/app/structs/TraversalBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TraversalBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraversalBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TraversalBehaviour_FWDDECL)
#include <Modloader/app/structs/TraversalBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraversalBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

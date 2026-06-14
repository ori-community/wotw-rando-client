#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathNode_DEFINED)
#include <Modloader/app/structs/PathNode__Fields.h>
#if defined(IL2CPP_STRUCT_PathNode__Fields_DEFINED)
#define IL2CPP_STRUCT_PathNode_DEFINED
struct PathNode__Class;
struct PathNode {
    struct PathNode__Class* klass;
    MonitorData* monitor;
    struct PathNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathNode_FWDDECL)
#define IL2CPP_STRUCT_PathNode_FWDDECL
#include <Modloader/app/structs/PathNode__Class.h>
#endif
#undef IL2CPP_STRUCT_PathNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathNode_DEFINED) && !defined(IL2CPP_STRUCT_PathNode_FWDDECL)
#include <Modloader/app/structs/PathNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

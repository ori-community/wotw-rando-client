#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugNode_DEFINED)
#include <Modloader/app/structs/DebugNode__Fields.h>
#if defined(IL2CPP_STRUCT_DebugNode__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugNode_DEFINED
struct DebugNode__Class;
struct DebugNode {
    struct DebugNode__Class* klass;
    MonitorData* monitor;
    struct DebugNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugNode_FWDDECL)
#define IL2CPP_STRUCT_DebugNode_FWDDECL
#include <Modloader/app/structs/DebugNode__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugNode_DEFINED) && !defined(IL2CPP_STRUCT_DebugNode_FWDDECL)
#include <Modloader/app/structs/DebugNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

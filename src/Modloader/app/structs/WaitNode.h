#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitNode_DEFINED)
#include <Modloader/app/structs/WaitNode__Fields.h>
#if defined(IL2CPP_STRUCT_WaitNode__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitNode_DEFINED
struct WaitNode__Class;
struct WaitNode {
    struct WaitNode__Class* klass;
    MonitorData* monitor;
    struct WaitNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitNode_FWDDECL)
#define IL2CPP_STRUCT_WaitNode_FWDDECL
#include <Modloader/app/structs/WaitNode__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitNode_DEFINED) && !defined(IL2CPP_STRUCT_WaitNode_FWDDECL)
#include <Modloader/app/structs/WaitNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageNode_DEFINED)
#include <Modloader/app/structs/MessageNode__Fields.h>
#if defined(IL2CPP_STRUCT_MessageNode__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageNode_DEFINED
struct MessageNode__Class;
struct MessageNode {
    struct MessageNode__Class* klass;
    MonitorData* monitor;
    struct MessageNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageNode_FWDDECL)
#define IL2CPP_STRUCT_MessageNode_FWDDECL
#include <Modloader/app/structs/MessageNode__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageNode_DEFINED) && !defined(IL2CPP_STRUCT_MessageNode_FWDDECL)
#include <Modloader/app/structs/MessageNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

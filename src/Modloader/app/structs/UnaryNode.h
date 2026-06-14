#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnaryNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnaryNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnaryNode_DEFINED)
#include <Modloader/app/structs/UnaryNode__Fields.h>
#if defined(IL2CPP_STRUCT_UnaryNode__Fields_DEFINED)
#define IL2CPP_STRUCT_UnaryNode_DEFINED
struct UnaryNode__Class;
struct UnaryNode {
    struct UnaryNode__Class* klass;
    MonitorData* monitor;
    struct UnaryNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnaryNode_FWDDECL)
#define IL2CPP_STRUCT_UnaryNode_FWDDECL
#include <Modloader/app/structs/UnaryNode__Class.h>
#endif
#undef IL2CPP_STRUCT_UnaryNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnaryNode_DEFINED) && !defined(IL2CPP_STRUCT_UnaryNode_FWDDECL)
#include <Modloader/app/structs/UnaryNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnaryNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

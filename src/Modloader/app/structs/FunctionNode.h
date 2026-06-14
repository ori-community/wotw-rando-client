#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FunctionNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FunctionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_FunctionNode_DEFINED)
#include <Modloader/app/structs/FunctionNode__Fields.h>
#if defined(IL2CPP_STRUCT_FunctionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_FunctionNode_DEFINED
struct FunctionNode__Class;
struct FunctionNode {
    struct FunctionNode__Class* klass;
    MonitorData* monitor;
    struct FunctionNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FunctionNode_FWDDECL)
#define IL2CPP_STRUCT_FunctionNode_FWDDECL
#include <Modloader/app/structs/FunctionNode__Class.h>
#endif
#undef IL2CPP_STRUCT_FunctionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_FunctionNode_DEFINED) && !defined(IL2CPP_STRUCT_FunctionNode_FWDDECL)
#include <Modloader/app/structs/FunctionNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FunctionNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

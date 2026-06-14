#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResultTableNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResultTableNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResultTableNode_DEFINED)
#include <Modloader/app/structs/ResultTableNode__Fields.h>
#if defined(IL2CPP_STRUCT_ResultTableNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ResultTableNode_DEFINED
struct ResultTableNode__Class;
struct ResultTableNode {
    struct ResultTableNode__Class* klass;
    MonitorData* monitor;
    struct ResultTableNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResultTableNode_FWDDECL)
#define IL2CPP_STRUCT_ResultTableNode_FWDDECL
#include <Modloader/app/structs/ResultTableNode__Class.h>
#endif
#undef IL2CPP_STRUCT_ResultTableNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResultTableNode_DEFINED) && !defined(IL2CPP_STRUCT_ResultTableNode_FWDDECL)
#include <Modloader/app/structs/ResultTableNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResultTableNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

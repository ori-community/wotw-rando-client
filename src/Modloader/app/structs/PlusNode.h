#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlusNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlusNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlusNode_DEFINED)
#include <Modloader/app/structs/PlusNode__Fields.h>
#if defined(IL2CPP_STRUCT_PlusNode__Fields_DEFINED)
#define IL2CPP_STRUCT_PlusNode_DEFINED
struct PlusNode__Class;
struct PlusNode {
    struct PlusNode__Class* klass;
    MonitorData* monitor;
    struct PlusNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlusNode_FWDDECL)
#define IL2CPP_STRUCT_PlusNode_FWDDECL
#include <Modloader/app/structs/PlusNode__Class.h>
#endif
#undef IL2CPP_STRUCT_PlusNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlusNode_DEFINED) && !defined(IL2CPP_STRUCT_PlusNode_FWDDECL)
#include <Modloader/app/structs/PlusNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlusNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

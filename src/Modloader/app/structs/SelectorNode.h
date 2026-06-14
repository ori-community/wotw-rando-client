#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SelectorNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SelectorNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectorNode_DEFINED)
#include <Modloader/app/structs/SelectorNode__Fields.h>
#if defined(IL2CPP_STRUCT_SelectorNode__Fields_DEFINED)
#define IL2CPP_STRUCT_SelectorNode_DEFINED
struct SelectorNode__Class;
struct SelectorNode {
    struct SelectorNode__Class* klass;
    MonitorData* monitor;
    struct SelectorNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SelectorNode_FWDDECL)
#define IL2CPP_STRUCT_SelectorNode_FWDDECL
#include <Modloader/app/structs/SelectorNode__Class.h>
#endif
#undef IL2CPP_STRUCT_SelectorNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectorNode_DEFINED) && !defined(IL2CPP_STRUCT_SelectorNode_FWDDECL)
#include <Modloader/app/structs/SelectorNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SelectorNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

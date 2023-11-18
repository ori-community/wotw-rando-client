#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LookupNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LookupNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupNode_DEFINED)
#include <Modloader/app/structs/LookupNode__Fields.h>
#if defined(IL2CPP_STRUCT_LookupNode__Fields_DEFINED)
#define IL2CPP_STRUCT_LookupNode_DEFINED
struct LookupNode__Class;
struct LookupNode {
    struct LookupNode__Class* klass;
    MonitorData* monitor;
    struct LookupNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LookupNode_FWDDECL)
#define IL2CPP_STRUCT_LookupNode_FWDDECL
#include <Modloader/app/structs/LookupNode__Class.h>
#endif
#undef IL2CPP_STRUCT_LookupNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupNode_DEFINED) && !defined(IL2CPP_STRUCT_LookupNode_FWDDECL)
#include <Modloader/app/structs/LookupNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LookupNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

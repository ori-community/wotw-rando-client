#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameNode_DEFINED)
#include <Modloader/app/structs/NameNode__Fields.h>
#if defined(IL2CPP_STRUCT_NameNode__Fields_DEFINED)
#define IL2CPP_STRUCT_NameNode_DEFINED
struct NameNode__Class;
struct NameNode {
    struct NameNode__Class* klass;
    MonitorData* monitor;
    struct NameNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameNode_FWDDECL)
#define IL2CPP_STRUCT_NameNode_FWDDECL
#include <Modloader/app/structs/NameNode__Class.h>
#endif
#undef IL2CPP_STRUCT_NameNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameNode_DEFINED) && !defined(IL2CPP_STRUCT_NameNode_FWDDECL)
#include <Modloader/app/structs/NameNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

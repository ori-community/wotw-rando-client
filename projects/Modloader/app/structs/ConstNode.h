#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstNode_DEFINED)
#include <Modloader/app/structs/ConstNode__Fields.h>
#if defined(IL2CPP_STRUCT_ConstNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstNode_DEFINED
struct ConstNode__Class;
struct ConstNode {
    struct ConstNode__Class* klass;
    MonitorData* monitor;
    struct ConstNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstNode_FWDDECL)
#define IL2CPP_STRUCT_ConstNode_FWDDECL
#include <Modloader/app/structs/ConstNode__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstNode_DEFINED) && !defined(IL2CPP_STRUCT_ConstNode_FWDDECL)
#include <Modloader/app/structs/ConstNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

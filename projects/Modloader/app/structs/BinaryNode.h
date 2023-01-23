#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryNode_DEFINED)
#include <Modloader/app/structs/BinaryNode__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryNode__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryNode_DEFINED
struct BinaryNode__Class;
struct BinaryNode {
    struct BinaryNode__Class* klass;
    MonitorData* monitor;
    struct BinaryNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryNode_FWDDECL)
#define IL2CPP_STRUCT_BinaryNode_FWDDECL
#include <Modloader/app/structs/BinaryNode__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryNode_DEFINED) && !defined(IL2CPP_STRUCT_BinaryNode_FWDDECL)
#include <Modloader/app/structs/BinaryNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

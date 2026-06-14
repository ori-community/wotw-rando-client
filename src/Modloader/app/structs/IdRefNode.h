#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IdRefNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IdRefNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdRefNode_DEFINED)
#include <Modloader/app/structs/IdRefNode__Fields.h>
#if defined(IL2CPP_STRUCT_IdRefNode__Fields_DEFINED)
#define IL2CPP_STRUCT_IdRefNode_DEFINED
struct IdRefNode__Class;
struct IdRefNode {
    struct IdRefNode__Class* klass;
    MonitorData* monitor;
    struct IdRefNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IdRefNode_FWDDECL)
#define IL2CPP_STRUCT_IdRefNode_FWDDECL
#include <Modloader/app/structs/IdRefNode__Class.h>
#endif
#undef IL2CPP_STRUCT_IdRefNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdRefNode_DEFINED) && !defined(IL2CPP_STRUCT_IdRefNode_FWDDECL)
#include <Modloader/app/structs/IdRefNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IdRefNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

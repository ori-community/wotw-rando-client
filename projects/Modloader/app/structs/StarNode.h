#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarNode_DEFINED)
#include <Modloader/app/structs/StarNode__Fields.h>
#if defined(IL2CPP_STRUCT_StarNode__Fields_DEFINED)
#define IL2CPP_STRUCT_StarNode_DEFINED
struct StarNode__Class;
struct StarNode {
    struct StarNode__Class* klass;
    MonitorData* monitor;
    struct StarNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StarNode_FWDDECL)
#define IL2CPP_STRUCT_StarNode_FWDDECL
#include <Modloader/app/structs/StarNode__Class.h>
#endif
#undef IL2CPP_STRUCT_StarNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarNode_DEFINED) && !defined(IL2CPP_STRUCT_StarNode_FWDDECL)
#include <Modloader/app/structs/StarNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

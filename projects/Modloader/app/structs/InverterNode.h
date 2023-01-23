#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InverterNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InverterNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverterNode_DEFINED)
#include <Modloader/app/structs/InverterNode__Fields.h>
#if defined(IL2CPP_STRUCT_InverterNode__Fields_DEFINED)
#define IL2CPP_STRUCT_InverterNode_DEFINED
struct InverterNode__Class;
struct InverterNode {
    struct InverterNode__Class* klass;
    MonitorData* monitor;
    struct InverterNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InverterNode_FWDDECL)
#define IL2CPP_STRUCT_InverterNode_FWDDECL
#include <Modloader/app/structs/InverterNode__Class.h>
#endif
#undef IL2CPP_STRUCT_InverterNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverterNode_DEFINED) && !defined(IL2CPP_STRUCT_InverterNode_FWDDECL)
#include <Modloader/app/structs/InverterNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InverterNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

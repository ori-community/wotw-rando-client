#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugUtilityNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugUtilityNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugUtilityNode_DEFINED)
#include <Modloader/app/structs/DebugUtilityNode__Fields.h>
#if defined(IL2CPP_STRUCT_DebugUtilityNode__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugUtilityNode_DEFINED
struct DebugUtilityNode__Class;
struct DebugUtilityNode {
    struct DebugUtilityNode__Class* klass;
    MonitorData* monitor;
    struct DebugUtilityNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugUtilityNode_FWDDECL)
#define IL2CPP_STRUCT_DebugUtilityNode_FWDDECL
#include <Modloader/app/structs/DebugUtilityNode__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugUtilityNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugUtilityNode_DEFINED) && !defined(IL2CPP_STRUCT_DebugUtilityNode_FWDDECL)
#include <Modloader/app/structs/DebugUtilityNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugUtilityNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

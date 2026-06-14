#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InfTree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InfTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_InfTree_DEFINED)
#include <Modloader/app/structs/InfTree__Fields.h>
#if defined(IL2CPP_STRUCT_InfTree__Fields_DEFINED)
#define IL2CPP_STRUCT_InfTree_DEFINED
struct InfTree__Class;
struct InfTree {
    struct InfTree__Class* klass;
    MonitorData* monitor;
    struct InfTree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InfTree_FWDDECL)
#define IL2CPP_STRUCT_InfTree_FWDDECL
#include <Modloader/app/structs/InfTree__Class.h>
#endif
#undef IL2CPP_STRUCT_InfTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_InfTree_DEFINED) && !defined(IL2CPP_STRUCT_InfTree_FWDDECL)
#include <Modloader/app/structs/InfTree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InfTree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

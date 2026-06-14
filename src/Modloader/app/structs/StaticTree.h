#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticTree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticTree_DEFINED)
#include <Modloader/app/structs/StaticTree__Fields.h>
#if defined(IL2CPP_STRUCT_StaticTree__Fields_DEFINED)
#define IL2CPP_STRUCT_StaticTree_DEFINED
struct StaticTree__Class;
struct StaticTree {
    struct StaticTree__Class* klass;
    MonitorData* monitor;
    struct StaticTree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaticTree_FWDDECL)
#define IL2CPP_STRUCT_StaticTree_FWDDECL
#include <Modloader/app/structs/StaticTree__Class.h>
#endif
#undef IL2CPP_STRUCT_StaticTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticTree_DEFINED) && !defined(IL2CPP_STRUCT_StaticTree_FWDDECL)
#include <Modloader/app/structs/StaticTree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticTree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

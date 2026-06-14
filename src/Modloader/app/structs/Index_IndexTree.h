#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Index_IndexTree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Index_IndexTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_Index_IndexTree_DEFINED)
#include <Modloader/app/structs/Index_IndexTree__Fields.h>
#if defined(IL2CPP_STRUCT_Index_IndexTree__Fields_DEFINED)
#define IL2CPP_STRUCT_Index_IndexTree_DEFINED
struct Index_IndexTree__Class;
struct Index_IndexTree {
    struct Index_IndexTree__Class* klass;
    MonitorData* monitor;
    struct Index_IndexTree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Index_IndexTree_FWDDECL)
#define IL2CPP_STRUCT_Index_IndexTree_FWDDECL
#include <Modloader/app/structs/Index_IndexTree__Class.h>
#endif
#undef IL2CPP_STRUCT_Index_IndexTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_Index_IndexTree_DEFINED) && !defined(IL2CPP_STRUCT_Index_IndexTree_FWDDECL)
#include <Modloader/app/structs/Index_IndexTree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Index_IndexTree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuadTree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuadTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuadTree_DEFINED)
#include <Modloader/app/structs/QuadTree__Fields.h>
#if defined(IL2CPP_STRUCT_QuadTree__Fields_DEFINED)
#define IL2CPP_STRUCT_QuadTree_DEFINED
struct QuadTree__Class;
struct QuadTree {
    struct QuadTree__Class* klass;
    MonitorData* monitor;
    struct QuadTree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuadTree_FWDDECL)
#define IL2CPP_STRUCT_QuadTree_FWDDECL
#include <Modloader/app/structs/QuadTree__Class.h>
#endif
#undef IL2CPP_STRUCT_QuadTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuadTree_DEFINED) && !defined(IL2CPP_STRUCT_QuadTree_FWDDECL)
#include <Modloader/app/structs/QuadTree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuadTree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

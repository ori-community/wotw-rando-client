#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuadTree_Node_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuadTree_Node_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuadTree_Node_DEFINED)
#include <Modloader/app/structs/QuadTree_Node__Fields.h>
#if defined(IL2CPP_STRUCT_QuadTree_Node__Fields_DEFINED)
#define IL2CPP_STRUCT_QuadTree_Node_DEFINED
struct QuadTree_Node__Class;
struct QuadTree_Node {
    struct QuadTree_Node__Class* klass;
    MonitorData* monitor;
    struct QuadTree_Node__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuadTree_Node_FWDDECL)
#define IL2CPP_STRUCT_QuadTree_Node_FWDDECL
#include <Modloader/app/structs/QuadTree_Node__Class.h>
#endif
#undef IL2CPP_STRUCT_QuadTree_Node_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuadTree_Node_DEFINED) && !defined(IL2CPP_STRUCT_QuadTree_Node_FWDDECL)
#include <Modloader/app/structs/QuadTree_Node.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuadTree_Node.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

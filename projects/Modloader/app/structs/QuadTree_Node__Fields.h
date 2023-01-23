#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuadTree_Node__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuadTree_Node__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuadTree_Node__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_QuadTree_Node__Fields_DEFINED
struct QuadTree_Node;
struct List_1_Moon_QuadTree_Node_;
struct List_1_Moon_IRectProvider_;
struct List_1_System_Int32_;
struct __declspec(align(8)) QuadTree_Node__Fields {
    struct Rect Rect;
    struct QuadTree_Node* Parent;
    int32_t Depth;
    struct List_1_Moon_QuadTree_Node_* Children;
    struct List_1_Moon_IRectProvider_* Objects;
    struct List_1_System_Int32_* ObjectsIdx;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuadTree_Node__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuadTree_Node__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_IRectProvider_.h>
#include <Modloader/app/structs/List_1_Moon_QuadTree_Node_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/QuadTree_Node.h>
#endif
#undef IL2CPP_STRUCT_QuadTree_Node__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuadTree_Node__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuadTree_Node__Fields_FWDDECL)
#include <Modloader/app/structs/QuadTree_Node__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuadTree_Node__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

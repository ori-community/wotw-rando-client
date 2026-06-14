#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuadTree__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuadTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuadTree__Fields_DEFINED)
#define IL2CPP_STRUCT_QuadTree__Fields_DEFINED
struct QuadTree_Node;
struct Dictionary_2_Moon_QuadTree_Node_Moon_IRectProvider_;
struct HashSet_1_Moon_IRectProvider_;
struct HashSet_1_System_Int32_;
struct Byte__Array;
struct __declspec(align(8)) QuadTree__Fields {
    struct QuadTree_Node* RootNode;
    int32_t NumObjectsToCauseSubdivision;
    int32_t MaxDepth;
    struct Dictionary_2_Moon_QuadTree_Node_Moon_IRectProvider_* m_objectByNode;
    struct HashSet_1_Moon_IRectProvider_* m_resultsMap;
    struct HashSet_1_System_Int32_* m_resultsMapIdx;
    struct Byte__Array* m_sceneBitMask;
};
#endif
#if !defined(IL2CPP_STRUCT_QuadTree__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuadTree__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_Moon_QuadTree_Node_Moon_IRectProvider_.h>
#include <Modloader/app/structs/HashSet_1_Moon_IRectProvider_.h>
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/QuadTree_Node.h>
#endif
#undef IL2CPP_STRUCT_QuadTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuadTree__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuadTree__Fields_FWDDECL)
#include <Modloader/app/structs/QuadTree__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuadTree__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

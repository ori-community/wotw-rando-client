#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RBTree_1_K_Node_System_Object__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RBTree_1_K_Node_System_Object__INITIALIZING
#if !defined(IL2CPP_STRUCT_RBTree_1_K_Node_System_Object__DEFINED)
#define IL2CPP_STRUCT_RBTree_1_K_Node_System_Object__DEFINED
struct Object;
struct RBTree_1_K_NodeColor_System_Object_;
struct RBTree_1_K_Node_System_Object_ {
    int32_t _selfId;
    int32_t _leftId;
    int32_t _rightId;
    int32_t _parentId;
    int32_t _nextId;
    int32_t _subTreeSize;
    struct Object* _keyOfNode;
    struct RBTree_1_K_NodeColor_System_Object_* _nodeColor;
};
#endif
#if !defined(IL2CPP_STRUCT_RBTree_1_K_Node_System_Object__FWDDECL)
#define IL2CPP_STRUCT_RBTree_1_K_Node_System_Object__FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RBTree_1_K_NodeColor_System_Object_.h>
#endif
#undef IL2CPP_STRUCT_RBTree_1_K_Node_System_Object__INITIALIZING
#if !defined(IL2CPP_STRUCT_RBTree_1_K_Node_System_Object__DEFINED) && !defined(IL2CPP_STRUCT_RBTree_1_K_Node_System_Object__FWDDECL)
#include <Modloader/app/structs/RBTree_1_K_Node_System_Object_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RBTree_1_K_Node_System_Object_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

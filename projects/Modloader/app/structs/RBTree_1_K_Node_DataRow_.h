#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RBTree_1_K_Node_DataRow__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RBTree_1_K_Node_DataRow__INITIALIZING
#if !defined(IL2CPP_STRUCT_RBTree_1_K_Node_DataRow__DEFINED)
#define IL2CPP_STRUCT_RBTree_1_K_Node_DataRow__DEFINED
struct DataRow;
struct RBTree_1_K_NodeColor_DataRow_;
struct RBTree_1_K_Node_DataRow_ {
    int32_t _selfId;
    int32_t _leftId;
    int32_t _rightId;
    int32_t _parentId;
    int32_t _nextId;
    int32_t _subTreeSize;
    struct DataRow* _keyOfNode;
    struct RBTree_1_K_NodeColor_DataRow_* _nodeColor;
};
#endif
#if !defined(IL2CPP_STRUCT_RBTree_1_K_Node_DataRow__FWDDECL)
#define IL2CPP_STRUCT_RBTree_1_K_Node_DataRow__FWDDECL
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/RBTree_1_K_NodeColor_DataRow_.h>
#endif
#undef IL2CPP_STRUCT_RBTree_1_K_Node_DataRow__INITIALIZING
#if !defined(IL2CPP_STRUCT_RBTree_1_K_Node_DataRow__DEFINED) && !defined(IL2CPP_STRUCT_RBTree_1_K_Node_DataRow__FWDDECL)
#include <Modloader/app/structs/RBTree_1_K_Node_DataRow_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RBTree_1_K_Node_DataRow_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

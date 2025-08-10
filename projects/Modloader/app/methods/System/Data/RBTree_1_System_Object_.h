#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RBTree_1_K_NodeColor_System_Object_.h>
#include <Modloader/app/structs/RBTree_1_K_NodePath_System_Object_.h>
#include <Modloader/app/structs/RBTree_1_K_TreePage_System_Object_.h>
#include <Modloader/app/structs/RBTree_1_System_Object_.h>
#include <Modloader/app/structs/TreeAccessMethod__Enum.h>

namespace app::classes::System::Data::RBTree_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02FB04C0, int32_t, get_Count, app::RBTree_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019E8F70, bool, get_HasDuplicates, app::RBTree_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FB3CE0, app::Object*, get_Item, app::RBTree_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02FAF680, void, ctor, app::RBTree_1_System_Object_* this_ptr, app::TreeAccessMethod__Enum access_method)
    IL2CPP_REGISTER_METHOD(0x02FB5910, void, InitTree, app::RBTree_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FAF910, void, FreePage, app::RBTree_1_System_Object_* this_ptr, app::RBTree_1_K_TreePage_System_Object_* page)
    IL2CPP_REGISTER_METHOD(0x02FB5B70, app::RBTree_1_K_TreePage_System_Object_*, AllocPage, app::RBTree_1_System_Object_* this_ptr, int32_t size)
    IL2CPP_REGISTER_METHOD(0x02FAFED0, void, MarkPageFull, app::RBTree_1_System_Object_* this_ptr, app::RBTree_1_K_TreePage_System_Object_* page)
    IL2CPP_REGISTER_METHOD(0x02FAFF90, void, MarkPageFree, app::RBTree_1_System_Object_* this_ptr, app::RBTree_1_K_TreePage_System_Object_* page)
    IL2CPP_REGISTER_METHOD(0x02FB0050, int32_t, GetIntValueFromBitMap, uint32_t bit_map)
    IL2CPP_REGISTER_METHOD(0x02FB6080, void, FreeNode, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FB6230, int32_t, GetIndexOfPageWithFreeSlot, app::RBTree_1_System_Object_* this_ptr, bool allocated_page)
    IL2CPP_REGISTER_METHOD(0x02FB6490, int32_t, GetNewNode, app::RBTree_1_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02FB0800, int32_t, Successor_1, app::RBTree_1_System_Object_* this_ptr, int32_t x_id)
    IL2CPP_REGISTER_METHOD(0x02FB67D0, bool, Successor_2, app::RBTree_1_System_Object_* this_ptr, int32_t* node_id, int32_t* main_tree_node_id)
    IL2CPP_REGISTER_METHOD(0x02FB0AB0, int32_t, Minimum, app::RBTree_1_System_Object_* this_ptr, int32_t x_id)
    IL2CPP_REGISTER_METHOD(0x02FB6980, int32_t, LeftRotate, app::RBTree_1_System_Object_* this_ptr, int32_t root_id, int32_t x_id, int32_t main_tree_node)
    IL2CPP_REGISTER_METHOD(0x02FB6E50, int32_t, RightRotate, app::RBTree_1_System_Object_* this_ptr, int32_t root_id, int32_t x_id, int32_t main_tree_node)
    IL2CPP_REGISTER_METHOD(
        0x02FB7310,
        int32_t,
        RBInsert,
        app::RBTree_1_System_Object_* this_ptr,
        int32_t root_id,
        int32_t x_id,
        int32_t main_tree_node_i_d,
        int32_t position,
        bool append
    )
    IL2CPP_REGISTER_METHOD(0x02FB8230, void, UpdateNodeKey, app::RBTree_1_System_Object_* this_ptr, app::Object* current_key, app::Object* new_key)
    IL2CPP_REGISTER_METHOD(0x02FB8300, app::Object*, DeleteByIndex, app::RBTree_1_System_Object_* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x02FB2550, int32_t, RBDelete, app::RBTree_1_System_Object_* this_ptr, int32_t z_id)
    IL2CPP_REGISTER_METHOD(0x02FB83B0, int32_t, RBDeleteX, app::RBTree_1_System_Object_* this_ptr, int32_t root_id, int32_t z_id, int32_t main_tree_node_i_d)
    IL2CPP_REGISTER_METHOD(
        0x02FB9040,
        int32_t,
        RBDeleteFixup,
        app::RBTree_1_System_Object_* this_ptr,
        int32_t root_id,
        int32_t x_id,
        int32_t px_id,
        int32_t main_tree_node_i_d
    )
    IL2CPP_REGISTER_METHOD(0x02FB99B0, int32_t, SearchSubTree, app::RBTree_1_System_Object_* this_ptr, int32_t root_id, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02FB9B00, app::RBTree_1_K_NodePath_System_Object_, GetNodeByKey, app::RBTree_1_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02FB3E70, int32_t, GetIndexByKey, app::RBTree_1_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02FB9C10, int32_t, GetIndexByNode, app::RBTree_1_System_Object_* this_ptr, int32_t node)
    IL2CPP_REGISTER_METHOD(0x02FB4010, int32_t, GetIndexByNodePath, app::RBTree_1_System_Object_* this_ptr, app::RBTree_1_K_NodePath_System_Object_ path)
    IL2CPP_REGISTER_METHOD(0x02FB40D0, int32_t, ComputeIndexByNode, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FB41F0, int32_t, ComputeIndexWithSatelliteByNode, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FB9D30, app::RBTree_1_K_NodePath_System_Object_, GetNodeByIndex, app::RBTree_1_System_Object_* this_ptr, int32_t user_index)
    IL2CPP_REGISTER_METHOD(0x02FB44A0, int32_t, ComputeNodeByIndex_1, app::RBTree_1_System_Object_* this_ptr, int32_t index, int32_t* satellite_root_id)
    IL2CPP_REGISTER_METHOD(0x02FB46B0, int32_t, ComputeNodeByIndex_2, app::RBTree_1_System_Object_* this_ptr, int32_t x_id, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02FB4770, int32_t, Insert_1, app::RBTree_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02FB4770, int32_t, Add, app::RBTree_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02FB9E60, app::IEnumerator*, GetEnumerator, app::RBTree_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FB9EF0, int32_t, IndexOf, app::RBTree_1_System_Object_* this_ptr, int32_t node_id, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02FB4A10, int32_t, Insert_2, app::RBTree_1_System_Object_* this_ptr, int32_t position, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x02FB9FF0, int32_t, InsertAt, app::RBTree_1_System_Object_* this_ptr, int32_t position, app::Object* item, bool append)
    IL2CPP_REGISTER_METHOD(0x02FB4AE0, void, RemoveAt, app::RBTree_1_System_Object_* this_ptr, int32_t position)
    IL2CPP_REGISTER_METHOD(0x02FB4B10, void, Clear, app::RBTree_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FBA090, void, CopyTo_1, app::RBTree_1_System_Object_* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02FBA280, void, CopyTo_2, app::RBTree_1_System_Object_* this_ptr, app::Object__Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02FBA480, void, SetRight, app::RBTree_1_System_Object_* this_ptr, int32_t node_id, int32_t right_node_id)
    IL2CPP_REGISTER_METHOD(0x02FBA500, void, SetLeft, app::RBTree_1_System_Object_* this_ptr, int32_t node_id, int32_t left_node_id)
    IL2CPP_REGISTER_METHOD(0x02FBA580, void, SetParent, app::RBTree_1_System_Object_* this_ptr, int32_t node_id, int32_t parent_node_id)
    IL2CPP_REGISTER_METHOD(0x02FBA600, void, SetColor, app::RBTree_1_System_Object_* this_ptr, int32_t node_id, app::RBTree_1_K_NodeColor_System_Object_* color)
    IL2CPP_REGISTER_METHOD(0x02FBA680, void, SetKey, app::RBTree_1_System_Object_* this_ptr, int32_t node_id, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02FBA700, void, SetNext, app::RBTree_1_System_Object_* this_ptr, int32_t node_id, int32_t next_node_id)
    IL2CPP_REGISTER_METHOD(0x02FBA780, void, SetSubTreeSize, app::RBTree_1_System_Object_* this_ptr, int32_t node_id, int32_t size)
    IL2CPP_REGISTER_METHOD(0x02FBA800, void, IncreaseSize, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FBA880, void, RecomputeSize, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FBAA20, void, DecreaseSize, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FBAAA0, int32_t, Right, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FBAB20, int32_t, Left, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FBABA0, int32_t, Parent, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FBAC20, app::RBTree_1_K_NodeColor_System_Object_*, color, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FBACA0, int32_t, Next, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FBAD20, int32_t, SubTreeSize, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
    IL2CPP_REGISTER_METHOD(0x02FBADA0, app::Object*, Key, app::RBTree_1_System_Object_* this_ptr, int32_t node_id)
} // namespace app::classes::System::Data::RBTree_1_System_Object_

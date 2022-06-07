#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::QuadTree {
    IL2CPP_REGISTER_METHOD(0x01994E70, void, ctor, (app::QuadTree * this_ptr, app::Rect root_rect))
    IL2CPP_REGISTER_METHOD(0x01995310, void, Query_1, (app::QuadTree * this_ptr, app::Vector3 position, app::List_1_Moon_IRectProvider_ * list_to_populate))
    IL2CPP_REGISTER_METHOD(0x01995440, void, QueryFast_1, (app::QuadTree * this_ptr, app::Vector3 position, app::List_1_System_Int32_ * list_to_populate))
    IL2CPP_REGISTER_METHOD(0x01995550, void, GetListFromSet, (app::QuadTree * this_ptr, app::HashSet_1_Moon_IRectProvider_ * set, app::List_1_Moon_IRectProvider_ * list_to_populate))
    IL2CPP_REGISTER_METHOD(0x01995690, void, QueryRecursively_1, (app::QuadTree * this_ptr, app::QuadTree_Node * node, app::Vector3 position, app::Byte__Array * bitmask, app::List_1_System_Int32_ * list_to_populate))
    IL2CPP_REGISTER_METHOD(0x01995970, void, QueryRecursively_2, (app::QuadTree * this_ptr, app::QuadTree_Node * node, app::Vector3 position, app::HashSet_1_Moon_IRectProvider_ * results_map))
    IL2CPP_REGISTER_METHOD(0x01995B70, void, Query_2, (app::QuadTree * this_ptr, app::Rect rect, app::List_1_Moon_IRectProvider_ * list_to_populate))
    IL2CPP_REGISTER_METHOD(0x01995CA0, void, QueryFast_2, (app::QuadTree * this_ptr, app::Rect rect, app::List_1_System_Int32_ * list_to_populate))
    IL2CPP_REGISTER_METHOD(0x01995DA0, void, QueryRecursively_3, (app::QuadTree * this_ptr, app::QuadTree_Node * node, app::Rect rect, app::HashSet_1_Moon_IRectProvider_ * results_map))
    IL2CPP_REGISTER_METHOD(0x01996040, void, QueryRecursively_4, (app::QuadTree * this_ptr, app::QuadTree_Node * node, app::Rect rect, app::Byte__Array * bitmask, app::List_1_System_Int32_ * list_to_populate))
    IL2CPP_REGISTER_METHOD(0x019963C0, void, AddObject, (app::QuadTree * this_ptr, app::IRectProvider * rect_provider, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x019963F0, void, AddObjectRecursively, (app::QuadTree * this_ptr, app::QuadTree_Node * node, app::IRectProvider * rect_provider, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}

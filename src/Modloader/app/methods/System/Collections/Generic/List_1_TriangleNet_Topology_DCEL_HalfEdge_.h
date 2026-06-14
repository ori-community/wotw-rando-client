#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HalfEdge.h>
#include <Modloader/app/structs/List_1_T_Enumerator_TriangleNet_Topology_DCEL_HalfEdge_.h>
#include <Modloader/app/structs/List_1_TriangleNet_Topology_DCEL_HalfEdge_.h>

namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Topology_DCEL_HalfEdge_ {
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, app::List_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, app::List_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr, app::HalfEdge* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::HalfEdge*, get_Item, app::List_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, app::List_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_TriangleNet_Topology_DCEL_HalfEdge_,
        GetEnumerator,
        app::List_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_TriangleNet_Topology_DCEL_HalfEdge_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Topology_DCEL_HalfEdge_

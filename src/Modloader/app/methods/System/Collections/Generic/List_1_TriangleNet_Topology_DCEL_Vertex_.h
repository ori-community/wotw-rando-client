#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Topology_DCEL_Vertex_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_TriangleNet_Topology_DCEL_Vertex_.h>
#include <Modloader/app/structs/List_1_TriangleNet_Topology_DCEL_Vertex_.h>
#include <Modloader/app/structs/Vertex_1.h>

namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Topology_DCEL_Vertex_ {
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_TriangleNet_Topology_DCEL_Vertex_* this_ptr,
        app::IEnumerable_1_TriangleNet_Topology_DCEL_Vertex_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_TriangleNet_Topology_DCEL_Vertex_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_TriangleNet_Topology_DCEL_Vertex_,
        GetEnumerator,
        app::List_1_TriangleNet_Topology_DCEL_Vertex_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_TriangleNet_Topology_DCEL_Vertex_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, app::List_1_TriangleNet_Topology_DCEL_Vertex_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_TriangleNet_Topology_DCEL_Vertex_* this_ptr, app::Vertex_1* item)
    IL2CPP_REGISTER_METHOD(
        0x02FE8360,
        void,
        ctor_2,
        app::List_1_TriangleNet_Topology_DCEL_Vertex_* this_ptr,
        app::IEnumerable_1_TriangleNet_Topology_DCEL_Vertex_* collection
    )
} // namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Topology_DCEL_Vertex_

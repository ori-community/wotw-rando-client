#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_TriangleNet_Topology_DCEL_HalfEdge_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_DCEL_HalfEdge_.h>
#include <Modloader/app/structs/HalfEdge.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_TriangleNet_Topology_DCEL_HalfEdge_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_TriangleNet_Topology_DCEL_HalfEdge_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_TriangleNet_Topology_DCEL_HalfEdge_ * this_ptr, int32_t key, app::HalfEdge* value))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_DCEL_HalfEdge_*, get_Values, (app::Dictionary_2_System_Int32_TriangleNet_Topology_DCEL_HalfEdge_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::HalfEdge*, get_Item, (app::Dictionary_2_System_Int32_TriangleNet_Topology_DCEL_HalfEdge_ * this_ptr, int32_t key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_TriangleNet_Topology_DCEL_HalfEdge_

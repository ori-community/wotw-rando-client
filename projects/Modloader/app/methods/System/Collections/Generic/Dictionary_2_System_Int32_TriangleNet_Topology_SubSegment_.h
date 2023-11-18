#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment_.h>
#include <Modloader/app/structs/SubSegment.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment_*, get_Values, (app::Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ * this_ptr, int32_t key, app::SubSegment* value))
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::SubSegment*, get_Item, (app::Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ * this_ptr, int32_t key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_

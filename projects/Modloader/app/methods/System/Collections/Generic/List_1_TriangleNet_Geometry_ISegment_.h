#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_TriangleNet_Geometry_ISegment_.h>
#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_ISegment_.h>
#include <Modloader/app/structs/ISegment.h>
#include <Modloader/app/structs/List_1_T_Enumerator_TriangleNet_Geometry_ISegment_.h>

namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Geometry_ISegment_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_TriangleNet_Geometry_ISegment_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_TriangleNet_Geometry_ISegment_ * this_ptr, app::ISegment* item))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_TriangleNet_Geometry_ISegment_ * this_ptr, app::IEnumerable_1_TriangleNet_Geometry_ISegment_* collection))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_TriangleNet_Geometry_ISegment_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_TriangleNet_Geometry_ISegment_, GetEnumerator, (app::List_1_TriangleNet_Geometry_ISegment_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ISegment*, get_Item, (app::List_1_TriangleNet_Geometry_ISegment_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_TriangleNet_Geometry_ISegment_ * this_ptr, int32_t value))
} // namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Geometry_ISegment_

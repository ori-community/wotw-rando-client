#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/Point.h>

namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Geometry_Point_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_TriangleNet_Geometry_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_TriangleNet_Geometry_Point_ * this_ptr, app::Point* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_TriangleNet_Geometry_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_TriangleNet_Geometry_Point_, GetEnumerator, (app::List_1_TriangleNet_Geometry_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_TriangleNet_Geometry_Point_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_TriangleNet_Geometry_Point_ * this_ptr, app::IEnumerable_1_TriangleNet_Geometry_Point_* collection))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_TriangleNet_Geometry_Point_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Point*, get_Item, (app::List_1_TriangleNet_Geometry_Point_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (app::List_1_TriangleNet_Geometry_Point_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Geometry_Point_

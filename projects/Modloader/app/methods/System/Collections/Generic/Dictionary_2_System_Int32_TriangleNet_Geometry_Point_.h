#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/Point.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_TriangleNet_Geometry_Point_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_TriangleNet_Geometry_Point_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475BFF0, Dictionary_2_System_Int32_TriangleNet_Geometry_Point___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_TriangleNet_Geometry_Point_ * this_ptr, int32_t key, app::Point** value))
    IL2CPP_REGISTER_METHODINFO(0x047551A8, Dictionary_2_System_Int32_TriangleNet_Geometry_Point__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_TriangleNet_Geometry_Point_ * this_ptr, int32_t key, app::Point* value))
    IL2CPP_REGISTER_METHODINFO(0x0477A9D8, Dictionary_2_System_Int32_TriangleNet_Geometry_Point__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_TriangleNet_Geometry_Point_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ITriangle__Array.h>
#include <Modloader/app/structs/ITriangle.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_ITriangle_.h>

namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Geometry_ITriangle_ {
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::ITriangle__Array*, ToArray, (app::List_1_TriangleNet_Geometry_ITriangle_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_TriangleNet_Geometry_ITriangle_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_TriangleNet_Geometry_ITriangle_ * this_ptr, app::ITriangle* item))
} // namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Geometry_ITriangle_

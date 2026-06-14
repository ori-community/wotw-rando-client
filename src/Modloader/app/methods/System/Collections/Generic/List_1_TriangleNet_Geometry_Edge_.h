#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Edge.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_Edge_.h>

namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Geometry_Edge_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_TriangleNet_Geometry_Edge_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_TriangleNet_Geometry_Edge_* this_ptr, app::Edge* item)
} // namespace app::classes::System::Collections::Generic::List_1_TriangleNet_Geometry_Edge_

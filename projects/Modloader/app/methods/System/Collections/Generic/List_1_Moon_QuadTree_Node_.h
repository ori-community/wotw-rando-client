#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/QuadTree_Node.h>
#include <Modloader/app/structs/List_1_Moon_QuadTree_Node_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_QuadTree_Node_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::QuadTree_Node*, get_Item, (app::List_1_Moon_QuadTree_Node_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_QuadTree_Node_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_QuadTree_Node_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_QuadTree_Node_ * this_ptr, app::QuadTree_Node* item))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_QuadTree_Node_

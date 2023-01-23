#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PhysicsEdge.h>
#include <Modloader/app/structs/List_1_PhysicsEdge_.h>

namespace app::classes::System::Collections::Generic::List_1_PhysicsEdge_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::PhysicsEdge*, get_Item, (app::List_1_PhysicsEdge_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04700FF8, List_1_PhysicsEdge__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_PhysicsEdge_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754880, List_1_PhysicsEdge__get_Count__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_PhysicsEdge_

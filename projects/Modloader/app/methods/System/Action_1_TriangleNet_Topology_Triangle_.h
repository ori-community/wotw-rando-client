#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_TriangleNet_Topology_Triangle_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Triangle.h>

namespace app::classes::System::Action_1_TriangleNet_Topology_Triangle_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_TriangleNet_Topology_Triangle_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047166D0, Action_1_TriangleNet_Topology_Triangle___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_TriangleNet_Topology_Triangle_ * this_ptr, app::Triangle* obj))
    IL2CPP_REGISTER_METHODINFO(0x04711388, Action_1_TriangleNet_Topology_Triangle__Invoke__MethodInfo)
} // namespace app::classes::System::Action_1_TriangleNet_Topology_Triangle_

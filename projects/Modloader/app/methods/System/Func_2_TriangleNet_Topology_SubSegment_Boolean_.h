#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_TriangleNet_Topology_SubSegment_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SubSegment.h>

namespace app::classes::System::Func_2_TriangleNet_Topology_SubSegment_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_TriangleNet_Topology_SubSegment_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (app::Func_2_TriangleNet_Topology_SubSegment_Boolean_ * this_ptr, app::SubSegment* arg))
} // namespace app::classes::System::Func_2_TriangleNet_Topology_SubSegment_Boolean_

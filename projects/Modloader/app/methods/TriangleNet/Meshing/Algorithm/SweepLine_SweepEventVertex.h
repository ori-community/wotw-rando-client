#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SweepLine_SweepEventVertex.h>
#include <Modloader/app/structs/SweepLine_SweepEvent.h>

namespace app::classes::TriangleNet::Meshing::Algorithm::SweepLine_SweepEventVertex {
    IL2CPP_REGISTER_METHOD(0x02639DF0, void, ctor, (app::SweepLine_SweepEventVertex * this_ptr, app::SweepLine_SweepEvent* e))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_TriangleNet_Topology_Triangle_.h>
#include <Modloader/app/structs/Func_2_TriangleNet_Topology_SubSegment_Boolean_.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/RegionIterator.h>
#include <Modloader/app/structs/Triangle.h>

namespace app::classes::TriangleNet::Meshing::Iterators::RegionIterator {
    IL2CPP_REGISTER_METHOD(0x02B11180, void, ctor, app::RegionIterator* this_ptr, app::Mesh_1* mesh)
    IL2CPP_REGISTER_METHOD(0x02B112D0, void, Process_1, app::RegionIterator* this_ptr, app::Triangle* triangle, int32_t boundary)
    IL2CPP_REGISTER_METHOD(
        0x02B11520,
        void,
        Process_2,
        app::RegionIterator* this_ptr,
        app::Triangle* triangle,
        app::Action_1_TriangleNet_Topology_Triangle_* action,
        int32_t boundary
    )
    IL2CPP_REGISTER_METHOD(
        0x02B11990,
        void,
        ProcessRegion,
        app::RegionIterator* this_ptr,
        app::Action_1_TriangleNet_Topology_Triangle_* action,
        app::Func_2_TriangleNet_Topology_SubSegment_Boolean_* protector
    )
} // namespace app::classes::TriangleNet::Meshing::Iterators::RegionIterator

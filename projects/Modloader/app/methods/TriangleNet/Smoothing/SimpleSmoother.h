#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Configuration_1.h>
#include <Modloader/app/structs/Face.h>
#include <Modloader/app/structs/IMesh.h>
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/IVoronoiFactory.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/Polygon.h>
#include <Modloader/app/structs/SimpleSmoother.h>
#include <Modloader/app/structs/TrianglePool.h>

namespace app::classes::TriangleNet::Smoothing::SimpleSmoother {
    IL2CPP_REGISTER_METHOD(0x02A91950, void, ctor_1, app::SimpleSmoother* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A91AA0, void, ctor_2, app::SimpleSmoother* this_ptr, app::IVoronoiFactory* factory)
    IL2CPP_REGISTER_METHOD(0x02A91FA0, void, ctor_3, app::SimpleSmoother* this_ptr, app::IVoronoiFactory* factory, app::Configuration_1* config)
    IL2CPP_REGISTER_METHOD(0x02A92100, void, Smooth_1, app::SimpleSmoother* this_ptr, app::IMesh* mesh)
    IL2CPP_REGISTER_METHOD(0x02A92110, void, Smooth_2, app::SimpleSmoother* this_ptr, app::IMesh* mesh, int32_t limit)
    IL2CPP_REGISTER_METHOD(
        0x02A92660,
        void,
        Step,
        app::SimpleSmoother* this_ptr,
        app::Mesh_1* mesh,
        app::IVoronoiFactory* factory,
        app::IPredicates* predicates
    )
    IL2CPP_REGISTER_METHOD(0x02A92920, void, Centroid, app::SimpleSmoother* this_ptr, app::Face* face, double* x, double* y)
    IL2CPP_REGISTER_METHOD(0x02A92A50, app::Polygon*, Rebuild, app::SimpleSmoother* this_ptr, app::Mesh_1* mesh)
    IL2CPP_REGISTER_METHOD(0x02A92E00, app::TrianglePool*, __ctor_b__5_1, app::SimpleSmoother* this_ptr)
} // namespace app::classes::TriangleNet::Smoothing::SimpleSmoother

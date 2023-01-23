#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StandardVoronoi.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/Rectangle.h>
#include <Modloader/app/structs/IVoronoiFactory.h>
#include <Modloader/app/structs/IPredicates.h>

namespace app::classes::TriangleNet::Voronoi::StandardVoronoi {
    IL2CPP_REGISTER_METHOD(0x02AAE8D0, void, ctor_1, (app::StandardVoronoi * this_ptr, app::Mesh_1* mesh))
    IL2CPP_REGISTER_METHOD(0x02AAEA70, void, ctor_2, (app::StandardVoronoi * this_ptr, app::Mesh_1* mesh, app::Rectangle* box))
    IL2CPP_REGISTER_METHOD(0x02AAEC00, void, ctor_3, (app::StandardVoronoi * this_ptr, app::Mesh_1* mesh, app::Rectangle* box, app::IVoronoiFactory* factory, app::IPredicates* predicates))
    IL2CPP_REGISTER_METHOD(0x02AAED80, void, PostProcess, (app::StandardVoronoi * this_ptr, app::Rectangle* box))
} // namespace app::classes::TriangleNet::Voronoi::StandardVoronoi

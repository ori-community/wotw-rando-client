#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriangleNet::TriangleLocator {
    IL2CPP_REGISTER_METHOD(0x02AA50E0, void, ctor_1, (app::TriangleLocator * this_ptr, app::Mesh_1* mesh))
    IL2CPP_REGISTER_METHOD(0x02AA51A0, void, ctor_2, (app::TriangleLocator * this_ptr, app::Mesh_1* mesh, app::IPredicates* predicates))
    IL2CPP_REGISTER_METHOD(0x02AA5420, void, Update, (app::TriangleLocator * this_ptr, app::Otri* otri))
    IL2CPP_REGISTER_METHOD(0x02AA5430, void, Reset, (app::TriangleLocator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AA5460, app::LocateResult__Enum, PreciseLocate, (app::TriangleLocator * this_ptr, app::Point* searchpoint, app::Otri* searchtri, bool stopatsubsegment))
    IL2CPP_REGISTER_METHOD(0x02AA5950, app::LocateResult__Enum, Locate, (app::TriangleLocator * this_ptr, app::Point* searchpoint, app::Otri* searchtri))
} // namespace app::classes::TriangleNet::TriangleLocator

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int3_TriangleNe_Vorono_Legac_VoronoiRegio_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_.h>
#include <Modloader/app/structs/VoronoiRegion.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ {
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_*, get_Values, (app::Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_1, (app::Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * this_ptr, int32_t key, app::VoronoiRegion* value))
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::VoronoiRegion*, get_Item, (app::Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_2, (app::Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_ * this_ptr, int32_t key, app::VoronoiRegion** value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_

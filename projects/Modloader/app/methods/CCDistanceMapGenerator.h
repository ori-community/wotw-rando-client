#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCDistanceMapGenerator_Pixel.h>
#include <Modloader/app/structs/CCDistanceMapGenerator_RGBMode__Enum.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::CCDistanceMapGenerator {
    IL2CPP_REGISTER_METHOD(
        0x02738160,
        void,
        Generate,
        app::Texture2D* source,
        app::Texture2D* destination,
        float max_inside,
        float max_outside,
        float post_process_distance,
        app::CCDistanceMapGenerator_RGBMode__Enum rgb_mode
    )
    IL2CPP_REGISTER_METHOD(0x02738CD0, void, ComputeEdgeGradients, )
    IL2CPP_REGISTER_METHOD(0x02739120, float, ApproximateEdgeDelta, float gx, float gy, float a)
    IL2CPP_REGISTER_METHOD(0x02739340, void, UpdateDistance, app::CCDistanceMapGenerator_Pixel* p, int32_t x, int32_t y, int32_t o_x, int32_t o_y)
    IL2CPP_REGISTER_METHOD(0x02739590, void, GenerateDistanceTransform, )
    IL2CPP_REGISTER_METHOD(0x02739CF0, void, PostProcess, float max_distance)
} // namespace app::classes::CCDistanceMapGenerator

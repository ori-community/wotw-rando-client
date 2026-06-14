#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPolygon.h>
#include <Modloader/app/structs/Point.h>

namespace app::classes::TriangleNet::Tools::PolygonValidator {
    IL2CPP_REGISTER_METHOD(0x02A97720, bool, IsConsistent, app::IPolygon* poly)
    IL2CPP_REGISTER_METHOD(0x02A97EA0, bool, HasDuplicateVertices, app::IPolygon* poly)
    IL2CPP_REGISTER_METHOD(0x02A98080, bool, HasBadAngles, app::IPolygon* poly, double threshold)
    IL2CPP_REGISTER_METHOD(0x02A984A0, bool, IsBadAngle, app::Point* a, app::Point* b, app::Point* c, double threshold)
    IL2CPP_REGISTER_METHOD(0x02A98600, double, DotProduct, app::Point* a, app::Point* b, app::Point* c)
    IL2CPP_REGISTER_METHOD(0x02A98660, double, CrossProductLength, app::Point* a, app::Point* b, app::Point* c)
    IL2CPP_REGISTER_METHOD(0x02A986C0, int32_t, CheckVertexIDs, app::IPolygon* poly, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02A98A80, int32_t, CheckDuplicateIDs, app::IPolygon* poly)
} // namespace app::classes::TriangleNet::Tools::PolygonValidator

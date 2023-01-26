#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Polygon_ShapeData.h>

namespace app::classes::Polygon_ShapeData {
    IL2CPP_REGISTER_METHOD(0x00C5D190, void, ctor, (app::Polygon_ShapeData * this_ptr, bool collider))
}

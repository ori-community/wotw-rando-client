#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::EarlyZGrid {
    IL2CPP_REGISTER_METHOD(0x00118FE0, void, ctor, (app::EarlyZGrid__Boxed * this_ptr, app::Bounds bounds, app::Vector3 cell_size))
    IL2CPP_REGISTER_METHOD(0x00119030, app::Bounds, getCellBounds, (app::EarlyZGrid__Boxed * this_ptr, app::Vector3 cell))
    IL2CPP_REGISTER_METHOD(0x00119290, app::Vector3Int, getCellCoord, (app::EarlyZGrid__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x001192E0, int32_t, getCellIndex, (app::EarlyZGrid__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00119340, int32_t, getCellCount, (app::EarlyZGrid__Boxed * this_ptr, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x001194E0, int32_t, getCellCountXY, (app::EarlyZGrid__Boxed * this_ptr, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x0078A070, app::Vector3, mad, (app::Vector3 m, app::Vector3 a, app::Vector3 b))
} // namespace app::classes::Moon::Rendering::EarlyZGrid

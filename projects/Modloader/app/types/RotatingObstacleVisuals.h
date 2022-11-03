#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotatingObstacleVisuals {
        inline app::RotatingObstacleVisuals__Class** type_info = (app::RotatingObstacleVisuals__Class**)(modloader::win::memory::resolve_rva(0x0471A300));
        inline app::RotatingObstacleVisuals__Class* get_class() {
            return il2cpp::get_class<app::RotatingObstacleVisuals__Class>(type_info, "", "RotatingObstacleVisuals");
        }
        inline app::RotatingObstacleVisuals* create() {
            return il2cpp::create_object<app::RotatingObstacleVisuals>(get_class());
        }
    } // namespace RotatingObstacleVisuals
} // namespace app::classes::types

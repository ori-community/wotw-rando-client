#pragma once
#include <Modloader/app/structs/RotatingObstacleVisuals.h>
#include <Modloader/app/structs/RotatingObstacleVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotatingObstacleVisuals {
        inline app::RotatingObstacleVisuals__Class** type_info() {
            static app::RotatingObstacleVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RotatingObstacleVisuals__Class**)(modloader::win::memory::resolve_rva(0x0471A300));
            }
            return cache;
        }
        inline app::RotatingObstacleVisuals__Class* get_class() {
            return il2cpp::get_class<app::RotatingObstacleVisuals__Class>(type_info(), "", "RotatingObstacleVisuals");
        }
        inline app::RotatingObstacleVisuals* create() {
            return il2cpp::create_object<app::RotatingObstacleVisuals>(get_class());
        }
    } // namespace RotatingObstacleVisuals
} // namespace app::classes::types

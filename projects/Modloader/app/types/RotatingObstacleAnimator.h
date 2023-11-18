#pragma once
#include <Modloader/app/structs/RotatingObstacleAnimator.h>
#include <Modloader/app/structs/RotatingObstacleAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotatingObstacleAnimator {
        inline app::RotatingObstacleAnimator__Class** type_info() {
            static app::RotatingObstacleAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RotatingObstacleAnimator__Class**)(modloader::win::memory::resolve_rva(0x0477DCD0));
            }
            return cache;
        }
        inline app::RotatingObstacleAnimator__Class* get_class() {
            return il2cpp::get_class<app::RotatingObstacleAnimator__Class>(type_info(), "", "RotatingObstacleAnimator");
        }
        inline app::RotatingObstacleAnimator* create() {
            return il2cpp::create_object<app::RotatingObstacleAnimator>(get_class());
        }
    } // namespace RotatingObstacleAnimator
} // namespace app::classes::types

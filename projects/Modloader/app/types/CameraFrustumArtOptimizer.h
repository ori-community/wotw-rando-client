#pragma once
#include <Modloader/app/structs/CameraFrustumArtOptimizer.h>
#include <Modloader/app/structs/CameraFrustumArtOptimizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFrustumArtOptimizer {
        inline app::CameraFrustumArtOptimizer__Class** type_info() {
            static app::CameraFrustumArtOptimizer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFrustumArtOptimizer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFrustumArtOptimizer__Class* get_class() {
            return il2cpp::get_class<app::CameraFrustumArtOptimizer__Class>(type_info(), "", "CameraFrustumArtOptimizer");
        }
        inline app::CameraFrustumArtOptimizer* create() {
            return il2cpp::create_object<app::CameraFrustumArtOptimizer>(get_class());
        }
    } // namespace CameraFrustumArtOptimizer
} // namespace app::classes::types

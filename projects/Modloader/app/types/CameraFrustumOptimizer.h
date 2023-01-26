#pragma once
#include <Modloader/app/structs/CameraFrustumOptimizer.h>
#include <Modloader/app/structs/CameraFrustumOptimizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFrustumOptimizer {
        inline app::CameraFrustumOptimizer__Class** type_info() {
            static app::CameraFrustumOptimizer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFrustumOptimizer__Class**)(modloader::win::memory::resolve_rva(0x0477AA28));
            }
            return cache;
        }
        inline app::CameraFrustumOptimizer__Class* get_class() {
            return il2cpp::get_class<app::CameraFrustumOptimizer__Class>(type_info(), "", "CameraFrustumOptimizer");
        }
        inline app::CameraFrustumOptimizer* create() {
            return il2cpp::create_object<app::CameraFrustumOptimizer>(get_class());
        }
    } // namespace CameraFrustumOptimizer
} // namespace app::classes::types

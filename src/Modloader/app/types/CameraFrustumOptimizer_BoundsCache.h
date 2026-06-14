#pragma once
#include <Modloader/app/structs/CameraFrustumOptimizer_BoundsCache.h>
#include <Modloader/app/structs/CameraFrustumOptimizer_BoundsCache__Boxed.h>
#include <Modloader/app/structs/CameraFrustumOptimizer_BoundsCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFrustumOptimizer_BoundsCache {
        inline app::CameraFrustumOptimizer_BoundsCache__Class** type_info() {
            static app::CameraFrustumOptimizer_BoundsCache__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFrustumOptimizer_BoundsCache__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFrustumOptimizer_BoundsCache__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFrustumOptimizer_BoundsCache__Class>(type_info(), "", "CameraFrustumOptimizer", "BoundsCache");
        }
        inline app::CameraFrustumOptimizer_BoundsCache* create() {
            return il2cpp::create_object<app::CameraFrustumOptimizer_BoundsCache>(get_class());
        }
        inline app::CameraFrustumOptimizer_BoundsCache__Boxed* box(app::CameraFrustumOptimizer_BoundsCache value) {
            return il2cpp::box_value<app::CameraFrustumOptimizer_BoundsCache__Boxed>(get_class(), value);
        }
    } // namespace CameraFrustumOptimizer_BoundsCache
} // namespace app::classes::types

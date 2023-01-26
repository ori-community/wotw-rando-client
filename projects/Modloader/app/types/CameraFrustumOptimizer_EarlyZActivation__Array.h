#pragma once
#include <Modloader/app/structs/CameraFrustumOptimizer_EarlyZActivation__Array.h>
#include <Modloader/app/structs/CameraFrustumOptimizer_EarlyZActivation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFrustumOptimizer_EarlyZActivation__Array {
        inline app::CameraFrustumOptimizer_EarlyZActivation__Array__Class** type_info() {
            static app::CameraFrustumOptimizer_EarlyZActivation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFrustumOptimizer_EarlyZActivation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFrustumOptimizer_EarlyZActivation__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraFrustumOptimizer_EarlyZActivation__Array__Class>(type_info(), "", "CameraFrustumOptimizer+EarlyZActivation[]");
        }
        inline app::CameraFrustumOptimizer_EarlyZActivation__Array* create() {
            return il2cpp::create_object<app::CameraFrustumOptimizer_EarlyZActivation__Array>(get_class());
        }
    } // namespace CameraFrustumOptimizer_EarlyZActivation__Array
} // namespace app::classes::types

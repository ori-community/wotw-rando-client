#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFrustumOptimizer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFrustumOptimizer__Class** type_info;
        inline app::CameraFrustumOptimizer__Class* get_class() {
            return il2cpp::get_class<app::CameraFrustumOptimizer__Class>(type_info, "", "CameraFrustumOptimizer");
        }
        inline app::CameraFrustumOptimizer* create() {
            return il2cpp::create_object<app::CameraFrustumOptimizer>(get_class());
        }
    } // namespace CameraFrustumOptimizer
} // namespace app::classes::types

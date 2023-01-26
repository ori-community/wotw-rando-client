#pragma once
#include <Modloader/app/structs/CameraFrustumOptimizer_EarlyZActivation.h>
#include <Modloader/app/structs/CameraFrustumOptimizer_EarlyZActivation__Array.h>
#include <Modloader/app/structs/CameraFrustumOptimizer_EarlyZActivation__Boxed.h>
#include <Modloader/app/structs/CameraFrustumOptimizer_EarlyZActivation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFrustumOptimizer_EarlyZActivation {
        inline app::CameraFrustumOptimizer_EarlyZActivation__Class** type_info() {
            static app::CameraFrustumOptimizer_EarlyZActivation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFrustumOptimizer_EarlyZActivation__Class**)(modloader::win::memory::resolve_rva(0x0472F070));
            }
            return cache;
        }
        inline app::CameraFrustumOptimizer_EarlyZActivation__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFrustumOptimizer_EarlyZActivation__Class>(type_info(), "", "CameraFrustumOptimizer", "EarlyZActivation");
        }
        inline app::CameraFrustumOptimizer_EarlyZActivation* create() {
            return il2cpp::create_object<app::CameraFrustumOptimizer_EarlyZActivation>(get_class());
        }
        inline app::CameraFrustumOptimizer_EarlyZActivation__Boxed* box(app::CameraFrustumOptimizer_EarlyZActivation value) {
            return il2cpp::box_value<app::CameraFrustumOptimizer_EarlyZActivation__Boxed>(get_class(), value);
        }
        inline app::CameraFrustumOptimizer_EarlyZActivation__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraFrustumOptimizer_EarlyZActivation__Array>(get_class(), size);
        }
        inline app::CameraFrustumOptimizer_EarlyZActivation__Array* create_array(const std::vector<app::CameraFrustumOptimizer_EarlyZActivation>& items) {
            return il2cpp::array_new<app::CameraFrustumOptimizer_EarlyZActivation__Array>(get_class(), items);
        }
    } // namespace CameraFrustumOptimizer_EarlyZActivation
} // namespace app::classes::types

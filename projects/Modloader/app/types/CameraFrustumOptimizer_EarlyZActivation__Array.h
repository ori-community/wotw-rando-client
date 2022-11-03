#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFrustumOptimizer_EarlyZActivation__Array {
        namespace {
            inline app::CameraFrustumOptimizer_EarlyZActivation__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraFrustumOptimizer_EarlyZActivation__Array__Class** type_info = &type_info_ref;
        inline app::CameraFrustumOptimizer_EarlyZActivation__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraFrustumOptimizer_EarlyZActivation__Array__Class>(type_info, "", "CameraFrustumOptimizer+EarlyZActivation[]");
        }
        inline app::CameraFrustumOptimizer_EarlyZActivation__Array* create() {
            return il2cpp::create_object<app::CameraFrustumOptimizer_EarlyZActivation__Array>(get_class());
        }
    } // namespace CameraFrustumOptimizer_EarlyZActivation__Array
} // namespace app::classes::types

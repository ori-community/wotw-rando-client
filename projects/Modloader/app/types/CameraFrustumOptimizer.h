#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFrustumOptimizer {
        inline app::CameraFrustumOptimizer__Class** type_info = (app::CameraFrustumOptimizer__Class**)(modloader::win::memory::resolve_rva(0x0477AA28));
        inline app::CameraFrustumOptimizer__Class* get_class() {
            return il2cpp::get_class<app::CameraFrustumOptimizer__Class>(type_info, "", "CameraFrustumOptimizer");
        }
        inline app::CameraFrustumOptimizer* create() {
            return il2cpp::create_object<app::CameraFrustumOptimizer>(get_class());
        }
    } // namespace CameraFrustumOptimizer
} // namespace app::classes::types

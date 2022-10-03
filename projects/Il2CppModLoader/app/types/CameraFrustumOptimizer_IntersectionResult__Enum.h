#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFrustumOptimizer_IntersectionResult__Enum {
        namespace {
            app::CameraFrustumOptimizer_IntersectionResult__Enum__Class* type_info_ref = nullptr;
        }
        app::CameraFrustumOptimizer_IntersectionResult__Enum__Class** type_info = &type_info_ref;
        inline app::CameraFrustumOptimizer_IntersectionResult__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFrustumOptimizer_IntersectionResult__Enum__Class>(type_info, "", "CameraFrustumOptimizer", "IntersectionResult");
        }
        inline app::CameraFrustumOptimizer_IntersectionResult__Enum* create() {
            return il2cpp::create_object<app::CameraFrustumOptimizer_IntersectionResult__Enum>(get_class());
        }
    } // namespace CameraFrustumOptimizer_IntersectionResult__Enum
} // namespace app::classes::types

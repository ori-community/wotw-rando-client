#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFrustumOptimizable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFrustumOptimizable__Class** type_info;
        inline app::IFrustumOptimizable__Class* get_class() {
            return il2cpp::get_class<app::IFrustumOptimizable__Class>(type_info, "", "IFrustumOptimizable");
        }
        inline app::IFrustumOptimizable* create() {
            return il2cpp::create_object<app::IFrustumOptimizable>(get_class());
        }
        inline app::IFrustumOptimizable__Array* create_array(int size) {
            return il2cpp::array_new<app::IFrustumOptimizable__Array>(get_class(), size);
        }
    } // namespace IFrustumOptimizable
} // namespace app::classes::types

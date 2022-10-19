#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrustumOptimizable {
        inline app::FrustumOptimizable__Class** type_info = (app::FrustumOptimizable__Class**)(modloader::win::memory::resolve_rva(0x04764E50));
        inline app::FrustumOptimizable__Class* get_class() {
            return il2cpp::get_class<app::FrustumOptimizable__Class>(type_info, "", "FrustumOptimizable");
        }
        inline app::FrustumOptimizable* create() {
            return il2cpp::create_object<app::FrustumOptimizable>(get_class());
        }
    } // namespace FrustumOptimizable
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFrustumOptimizable {
        inline app::IFrustumOptimizable__Class** type_info = (app::IFrustumOptimizable__Class**)(modloader::win::memory::resolve_rva(0x04772278));
        inline app::IFrustumOptimizable__Class* get_class() {
            return il2cpp::get_class<app::IFrustumOptimizable__Class>(type_info, "", "IFrustumOptimizable");
        }
        inline app::IFrustumOptimizable__Array* create_array(int size) {
            return il2cpp::array_new<app::IFrustumOptimizable__Array>(get_class(), size);
        }
        inline app::IFrustumOptimizable__Array* create_array(const std::vector<app::IFrustumOptimizable*>& items) {
            return il2cpp::array_new<app::IFrustumOptimizable__Array>(get_class(), items);
        }
    } // namespace IFrustumOptimizable
} // namespace app::classes::types

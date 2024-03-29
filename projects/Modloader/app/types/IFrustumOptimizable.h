#pragma once
#include <Modloader/app/structs/IFrustumOptimizable.h>
#include <Modloader/app/structs/IFrustumOptimizable__Array.h>
#include <Modloader/app/structs/IFrustumOptimizable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFrustumOptimizable {
        inline app::IFrustumOptimizable__Class** type_info() {
            static app::IFrustumOptimizable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFrustumOptimizable__Class**)(modloader::win::memory::resolve_rva(0x04772278));
            }
            return cache;
        }
        inline app::IFrustumOptimizable__Class* get_class() {
            return il2cpp::get_class<app::IFrustumOptimizable__Class>(type_info(), "", "IFrustumOptimizable");
        }
        inline app::IFrustumOptimizable__Array* create_array(int size) {
            return il2cpp::array_new<app::IFrustumOptimizable__Array>(get_class(), size);
        }
        inline app::IFrustumOptimizable__Array* create_array(const std::vector<app::IFrustumOptimizable*>& items) {
            return il2cpp::array_new<app::IFrustumOptimizable__Array>(get_class(), items);
        }
    } // namespace IFrustumOptimizable
} // namespace app::classes::types

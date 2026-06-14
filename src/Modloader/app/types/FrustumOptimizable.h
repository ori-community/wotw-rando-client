#pragma once
#include <Modloader/app/structs/FrustumOptimizable.h>
#include <Modloader/app/structs/FrustumOptimizable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrustumOptimizable {
        inline app::FrustumOptimizable__Class** type_info() {
            static app::FrustumOptimizable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrustumOptimizable__Class**)(modloader::win::memory::resolve_rva(0x04764E50));
            }
            return cache;
        }
        inline app::FrustumOptimizable__Class* get_class() {
            return il2cpp::get_class<app::FrustumOptimizable__Class>(type_info(), "", "FrustumOptimizable");
        }
        inline app::FrustumOptimizable* create() {
            return il2cpp::create_object<app::FrustumOptimizable>(get_class());
        }
    } // namespace FrustumOptimizable
} // namespace app::classes::types

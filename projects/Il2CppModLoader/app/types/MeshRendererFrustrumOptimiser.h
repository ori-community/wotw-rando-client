#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshRendererFrustrumOptimiser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeshRendererFrustrumOptimiser__Class** type_info;
        inline app::MeshRendererFrustrumOptimiser__Class* get_class() {
            return il2cpp::get_class<app::MeshRendererFrustrumOptimiser__Class>(type_info, "", "MeshRendererFrustrumOptimiser");
        }
        inline app::MeshRendererFrustrumOptimiser* create() {
            return il2cpp::create_object<app::MeshRendererFrustrumOptimiser>(get_class());
        }
        inline app::MeshRendererFrustrumOptimiser__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshRendererFrustrumOptimiser__Array>(get_class(), size);
        }
    } // namespace MeshRendererFrustrumOptimiser
} // namespace app::classes::types

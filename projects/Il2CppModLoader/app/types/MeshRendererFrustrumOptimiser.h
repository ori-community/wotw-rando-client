#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshRendererFrustrumOptimiser {
        inline app::MeshRendererFrustrumOptimiser__Class** type_info = (app::MeshRendererFrustrumOptimiser__Class**)(modloader::win::memory::resolve_rva(0x0473B1C0));
        inline app::MeshRendererFrustrumOptimiser__Class* get_class() {
            return il2cpp::get_class<app::MeshRendererFrustrumOptimiser__Class>(type_info, "", "MeshRendererFrustrumOptimiser");
        }
        inline app::MeshRendererFrustrumOptimiser* create() {
            return il2cpp::create_object<app::MeshRendererFrustrumOptimiser>(get_class());
        }
        inline app::MeshRendererFrustrumOptimiser__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshRendererFrustrumOptimiser__Array>(get_class(), size);
        }
        inline app::MeshRendererFrustrumOptimiser__Array* create_array(const std::vector<app::MeshRendererFrustrumOptimiser*>& items) {
            return il2cpp::array_new<app::MeshRendererFrustrumOptimiser__Array>(get_class(), items);
        }
    } // namespace MeshRendererFrustrumOptimiser
} // namespace app::classes::types

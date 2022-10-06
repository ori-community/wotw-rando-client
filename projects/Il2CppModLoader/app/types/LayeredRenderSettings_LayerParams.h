#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayeredRenderSettings_LayerParams {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LayeredRenderSettings_LayerParams__Class** type_info;
        inline app::LayeredRenderSettings_LayerParams__Class* get_class() {
            return il2cpp::get_nested_class<app::LayeredRenderSettings_LayerParams__Class>(type_info, "", "LayeredRenderSettings", "LayerParams");
        }
        inline app::LayeredRenderSettings_LayerParams* create() {
            return il2cpp::create_object<app::LayeredRenderSettings_LayerParams>(get_class());
        }
        inline app::LayeredRenderSettings_LayerParams__Array* create_array(int size) {
            return il2cpp::array_new<app::LayeredRenderSettings_LayerParams__Array>(get_class(), size);
        }
        inline app::LayeredRenderSettings_LayerParams__Array* create_array(const std::vector<app::LayeredRenderSettings_LayerParams*>& items) {
            return il2cpp::array_new<app::LayeredRenderSettings_LayerParams__Array>(get_class(), items);
        }
    } // namespace LayeredRenderSettings_LayerParams
} // namespace app::classes::types

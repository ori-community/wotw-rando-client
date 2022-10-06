#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayeredRenderSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LayeredRenderSettings__Class** type_info;
        inline app::LayeredRenderSettings__Class* get_class() {
            return il2cpp::get_class<app::LayeredRenderSettings__Class>(type_info, "", "LayeredRenderSettings");
        }
        inline app::LayeredRenderSettings* create() {
            return il2cpp::create_object<app::LayeredRenderSettings>(get_class());
        }
        inline app::LayeredRenderSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::LayeredRenderSettings__Array>(get_class(), size);
        }
        inline app::LayeredRenderSettings__Array* create_array(const std::vector<app::LayeredRenderSettings*>& items) {
            return il2cpp::array_new<app::LayeredRenderSettings__Array>(get_class(), items);
        }
    } // namespace LayeredRenderSettings
} // namespace app::classes::types

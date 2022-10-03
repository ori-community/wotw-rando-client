#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_SubLayerSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCanvas_SubLayerSettings__Class** type_info;
        inline app::LightCanvas_SubLayerSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_SubLayerSettings__Class>(type_info, "", "LightCanvas", "SubLayerSettings");
        }
        inline app::LightCanvas_SubLayerSettings* create() {
            return il2cpp::create_object<app::LightCanvas_SubLayerSettings>(get_class());
        }
    } // namespace LightCanvas_SubLayerSettings
} // namespace app::classes::types

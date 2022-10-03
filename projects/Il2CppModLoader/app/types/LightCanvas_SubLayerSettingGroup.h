#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_SubLayerSettingGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCanvas_SubLayerSettingGroup__Class** type_info;
        inline app::LightCanvas_SubLayerSettingGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_SubLayerSettingGroup__Class>(type_info, "", "LightCanvas", "SubLayerSettingGroup");
        }
        inline app::LightCanvas_SubLayerSettingGroup* create() {
            return il2cpp::create_object<app::LightCanvas_SubLayerSettingGroup>(get_class());
        }
        inline app::LightCanvas_SubLayerSettingGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCanvas_SubLayerSettingGroup__Array>(get_class(), size);
        }
    } // namespace LightCanvas_SubLayerSettingGroup
} // namespace app::classes::types

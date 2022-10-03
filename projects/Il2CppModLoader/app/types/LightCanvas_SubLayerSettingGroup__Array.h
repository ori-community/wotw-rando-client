#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_SubLayerSettingGroup__Array {
        namespace {
            app::LightCanvas_SubLayerSettingGroup__Array__Class* type_info_ref = nullptr;
        }
        app::LightCanvas_SubLayerSettingGroup__Array__Class** type_info = &type_info_ref;
        inline app::LightCanvas_SubLayerSettingGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCanvas_SubLayerSettingGroup__Array__Class>(type_info, "", "LightCanvas+SubLayerSettingGroup[]");
        }
        inline app::LightCanvas_SubLayerSettingGroup__Array* create() {
            return il2cpp::create_object<app::LightCanvas_SubLayerSettingGroup__Array>(get_class());
        }
    } // namespace LightCanvas_SubLayerSettingGroup__Array
} // namespace app::classes::types

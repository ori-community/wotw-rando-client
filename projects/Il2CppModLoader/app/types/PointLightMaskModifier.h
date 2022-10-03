#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointLightMaskModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PointLightMaskModifier__Class** type_info;
        inline app::PointLightMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::PointLightMaskModifier__Class>(type_info, "", "PointLightMaskModifier");
        }
        inline app::PointLightMaskModifier* create() {
            return il2cpp::create_object<app::PointLightMaskModifier>(get_class());
        }
        inline app::PointLightMaskModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::PointLightMaskModifier__Array>(get_class(), size);
        }
    } // namespace PointLightMaskModifier
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_HueSaturationValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_HueSaturationValue__Class** type_info;
        inline app::ShaderID_HueSaturationValue__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_HueSaturationValue__Class>(type_info, "Colorful", "ShaderID_HueSaturationValue");
        }
        inline app::ShaderID_HueSaturationValue* create() {
            return il2cpp::create_object<app::ShaderID_HueSaturationValue>(get_class());
        }
    } // namespace ShaderID_HueSaturationValue
} // namespace app::classes::types

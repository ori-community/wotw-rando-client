#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderModifier__Class** type_info;
        inline app::UberShaderModifier__Class* get_class() {
            return il2cpp::get_class<app::UberShaderModifier__Class>(type_info, "", "UberShaderModifier");
        }
        inline app::UberShaderModifier* create() {
            return il2cpp::create_object<app::UberShaderModifier>(get_class());
        }
        inline app::UberShaderModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderModifier__Array>(get_class(), size);
        }
    } // namespace UberShaderModifier
} // namespace app::classes::types

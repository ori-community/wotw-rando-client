#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrewarmer_PrewarmedShader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderPrewarmer_PrewarmedShader__Class** type_info;
        inline app::UberShaderPrewarmer_PrewarmedShader__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderPrewarmer_PrewarmedShader__Class>(type_info, "", "UberShaderPrewarmer", "PrewarmedShader");
        }
        inline app::UberShaderPrewarmer_PrewarmedShader* create() {
            return il2cpp::create_object<app::UberShaderPrewarmer_PrewarmedShader>(get_class());
        }
        inline app::UberShaderPrewarmer_PrewarmedShader__Boxed* box(app::UberShaderPrewarmer_PrewarmedShader value) {
            return il2cpp::box_value<app::UberShaderPrewarmer_PrewarmedShader__Boxed>(get_class(), value);
        }
        inline app::UberShaderPrewarmer_PrewarmedShader__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderPrewarmer_PrewarmedShader__Array>(get_class(), size);
        }
    } // namespace UberShaderPrewarmer_PrewarmedShader
} // namespace app::classes::types

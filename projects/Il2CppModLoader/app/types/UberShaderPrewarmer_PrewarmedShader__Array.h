#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrewarmer_PrewarmedShader__Array {
        namespace {
            app::UberShaderPrewarmer_PrewarmedShader__Array__Class* type_info_ref = nullptr;
        }
        app::UberShaderPrewarmer_PrewarmedShader__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderPrewarmer_PrewarmedShader__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrewarmer_PrewarmedShader__Array__Class>(type_info, "", "UberShaderPrewarmer+PrewarmedShader[]");
        }
        inline app::UberShaderPrewarmer_PrewarmedShader__Array* create() {
            return il2cpp::create_object<app::UberShaderPrewarmer_PrewarmedShader__Array>(get_class());
        }
    } // namespace UberShaderPrewarmer_PrewarmedShader__Array
} // namespace app::classes::types

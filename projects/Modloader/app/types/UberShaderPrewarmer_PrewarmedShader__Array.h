#pragma once
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader__Array.h>
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrewarmer_PrewarmedShader__Array {
        inline app::UberShaderPrewarmer_PrewarmedShader__Array__Class** type_info() {
            static app::UberShaderPrewarmer_PrewarmedShader__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderPrewarmer_PrewarmedShader__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderPrewarmer_PrewarmedShader__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrewarmer_PrewarmedShader__Array__Class>(type_info(), "", "UberShaderPrewarmer+PrewarmedShader[]");
        }
        inline app::UberShaderPrewarmer_PrewarmedShader__Array* create() {
            return il2cpp::create_object<app::UberShaderPrewarmer_PrewarmedShader__Array>(get_class());
        }
    } // namespace UberShaderPrewarmer_PrewarmedShader__Array
} // namespace app::classes::types

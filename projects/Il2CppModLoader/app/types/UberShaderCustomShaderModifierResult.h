#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderCustomShaderModifierResult {
        namespace {
            app::UberShaderCustomShaderModifierResult__Class* type_info_ref = nullptr;
        }
        app::UberShaderCustomShaderModifierResult__Class** type_info = &type_info_ref;
        inline app::UberShaderCustomShaderModifierResult__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomShaderModifierResult__Class>(type_info, "", "UberShaderCustomShaderModifierResult");
        }
        inline app::UberShaderCustomShaderModifierResult* create() {
            return il2cpp::create_object<app::UberShaderCustomShaderModifierResult>(get_class());
        }
        inline app::UberShaderCustomShaderModifierResult__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderCustomShaderModifierResult__Array>(get_class(), size);
        }
    } // namespace UberShaderCustomShaderModifierResult
} // namespace app::classes::types

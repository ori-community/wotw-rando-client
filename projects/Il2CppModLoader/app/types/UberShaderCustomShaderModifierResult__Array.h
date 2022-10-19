#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderCustomShaderModifierResult__Array {
        namespace {
            inline app::UberShaderCustomShaderModifierResult__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderCustomShaderModifierResult__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderCustomShaderModifierResult__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomShaderModifierResult__Array__Class>(type_info, "", "UberShaderCustomShaderModifierResult[]");
        }
        inline app::UberShaderCustomShaderModifierResult__Array* create() {
            return il2cpp::create_object<app::UberShaderCustomShaderModifierResult__Array>(get_class());
        }
    } // namespace UberShaderCustomShaderModifierResult__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderModifier__Array {
        namespace {
            inline app::UberShaderModifier__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderModifier__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderModifier__Array__Class>(type_info, "", "UberShaderModifier[]");
        }
        inline app::UberShaderModifier__Array* create() {
            return il2cpp::create_object<app::UberShaderModifier__Array>(get_class());
        }
    } // namespace UberShaderModifier__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderColorMultiplyAttribute {
        namespace {
            app::UberShaderColorMultiplyAttribute__Class* type_info_ref = nullptr;
        }
        app::UberShaderColorMultiplyAttribute__Class** type_info = &type_info_ref;
        inline app::UberShaderColorMultiplyAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderColorMultiplyAttribute__Class>(type_info, "", "UberShaderColorMultiplyAttribute");
        }
        inline app::UberShaderColorMultiplyAttribute* create() {
            return il2cpp::create_object<app::UberShaderColorMultiplyAttribute>(get_class());
        }
    } // namespace UberShaderColorMultiplyAttribute
} // namespace app::classes::types

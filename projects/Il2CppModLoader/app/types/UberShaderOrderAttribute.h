#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderOrderAttribute {
        namespace {
            app::UberShaderOrderAttribute__Class* type_info_ref = nullptr;
        }
        app::UberShaderOrderAttribute__Class** type_info = &type_info_ref;
        inline app::UberShaderOrderAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderOrderAttribute__Class>(type_info, "", "UberShaderOrderAttribute");
        }
        inline app::UberShaderOrderAttribute* create() {
            return il2cpp::create_object<app::UberShaderOrderAttribute>(get_class());
        }
    } // namespace UberShaderOrderAttribute
} // namespace app::classes::types

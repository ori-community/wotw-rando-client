#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderProperty {
        namespace {
            app::UberShaderProperty__Class* type_info_ref = nullptr;
        }
        app::UberShaderProperty__Class** type_info = &type_info_ref;
        inline app::UberShaderProperty__Class* get_class() {
            return il2cpp::get_class<app::UberShaderProperty__Class>(type_info, "", "UberShaderProperty");
        }
        inline app::UberShaderProperty* create() {
            return il2cpp::create_object<app::UberShaderProperty>(get_class());
        }
    } // namespace UberShaderProperty
} // namespace app::classes::types

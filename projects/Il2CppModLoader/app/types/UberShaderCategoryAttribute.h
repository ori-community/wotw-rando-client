#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderCategoryAttribute {
        namespace {
            app::UberShaderCategoryAttribute__Class* type_info_ref = nullptr;
        }
        app::UberShaderCategoryAttribute__Class** type_info = &type_info_ref;
        inline app::UberShaderCategoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCategoryAttribute__Class>(type_info, "", "UberShaderCategoryAttribute");
        }
        inline app::UberShaderCategoryAttribute* create() {
            return il2cpp::create_object<app::UberShaderCategoryAttribute>(get_class());
        }
    } // namespace UberShaderCategoryAttribute
} // namespace app::classes::types

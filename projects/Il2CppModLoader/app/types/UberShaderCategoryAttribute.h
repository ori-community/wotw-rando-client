#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderCategoryAttribute {
        namespace {
            inline app::UberShaderCategoryAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderCategoryAttribute__Class** type_info = &type_info_ref;
        inline app::UberShaderCategoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCategoryAttribute__Class>(type_info, "", "UberShaderCategoryAttribute");
        }
        inline app::UberShaderCategoryAttribute* create() {
            return il2cpp::create_object<app::UberShaderCategoryAttribute>(get_class());
        }
    } // namespace UberShaderCategoryAttribute
} // namespace app::classes::types

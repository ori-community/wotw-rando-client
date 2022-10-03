#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderCategoryManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderCategoryManager__Class** type_info;
        inline app::UberShaderCategoryManager__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCategoryManager__Class>(type_info, "", "UberShaderCategoryManager");
        }
        inline app::UberShaderCategoryManager* create() {
            return il2cpp::create_object<app::UberShaderCategoryManager>(get_class());
        }
    } // namespace UberShaderCategoryManager
} // namespace app::classes::types

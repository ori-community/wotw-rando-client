#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderCategoryManager {
        inline app::UberShaderCategoryManager__Class** type_info = (app::UberShaderCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x047530C0));
        inline app::UberShaderCategoryManager__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCategoryManager__Class>(type_info, "", "UberShaderCategoryManager");
        }
        inline app::UberShaderCategoryManager* create() {
            return il2cpp::create_object<app::UberShaderCategoryManager>(get_class());
        }
    } // namespace UberShaderCategoryManager
} // namespace app::classes::types

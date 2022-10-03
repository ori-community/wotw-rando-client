#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAreaNameFinder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAreaNameFinder__Class** type_info;
        inline app::UberShaderAreaNameFinder__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAreaNameFinder__Class>(type_info, "", "UberShaderAreaNameFinder");
        }
        inline app::UberShaderAreaNameFinder* create() {
            return il2cpp::create_object<app::UberShaderAreaNameFinder>(get_class());
        }
    } // namespace UberShaderAreaNameFinder
} // namespace app::classes::types

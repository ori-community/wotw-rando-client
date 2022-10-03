#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderCurveBake {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderCurveBake__Class** type_info;
        inline app::UberShaderCurveBake__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCurveBake__Class>(type_info, "", "UberShaderCurveBake");
        }
        inline app::UberShaderCurveBake* create() {
            return il2cpp::create_object<app::UberShaderCurveBake>(get_class());
        }
    } // namespace UberShaderCurveBake
} // namespace app::classes::types

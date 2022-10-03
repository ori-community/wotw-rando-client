#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderBlockTextured {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderBlockTextured__Class** type_info;
        inline app::UberShaderBlockTextured__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBlockTextured__Class>(type_info, "", "UberShaderBlockTextured");
        }
        inline app::UberShaderBlockTextured* create() {
            return il2cpp::create_object<app::UberShaderBlockTextured>(get_class());
        }
    } // namespace UberShaderBlockTextured
} // namespace app::classes::types

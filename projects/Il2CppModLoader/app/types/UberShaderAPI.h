#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAPI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAPI__Class** type_info;
        inline app::UberShaderAPI__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAPI__Class>(type_info, "", "UberShaderAPI");
        }
        inline app::UberShaderAPI* create() {
            return il2cpp::create_object<app::UberShaderAPI>(get_class());
        }
    } // namespace UberShaderAPI
} // namespace app::classes::types

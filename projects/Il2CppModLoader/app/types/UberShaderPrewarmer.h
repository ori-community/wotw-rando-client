#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrewarmer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderPrewarmer__Class** type_info;
        inline app::UberShaderPrewarmer__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrewarmer__Class>(type_info, "", "UberShaderPrewarmer");
        }
        inline app::UberShaderPrewarmer* create() {
            return il2cpp::create_object<app::UberShaderPrewarmer>(get_class());
        }
    } // namespace UberShaderPrewarmer
} // namespace app::classes::types

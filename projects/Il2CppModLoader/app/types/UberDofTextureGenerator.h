#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberDofTextureGenerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberDofTextureGenerator__Class** type_info;
        inline app::UberDofTextureGenerator__Class* get_class() {
            return il2cpp::get_class<app::UberDofTextureGenerator__Class>(type_info, "", "UberDofTextureGenerator");
        }
        inline app::UberDofTextureGenerator* create() {
            return il2cpp::create_object<app::UberDofTextureGenerator>(get_class());
        }
    } // namespace UberDofTextureGenerator
} // namespace app::classes::types

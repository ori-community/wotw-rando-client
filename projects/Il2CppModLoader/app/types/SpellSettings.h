#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpellSettings__Class** type_info;
        inline app::SpellSettings__Class* get_class() {
            return il2cpp::get_class<app::SpellSettings__Class>(type_info, "", "SpellSettings");
        }
        inline app::SpellSettings* create() {
            return il2cpp::create_object<app::SpellSettings>(get_class());
        }
    } // namespace SpellSettings
} // namespace app::classes::types

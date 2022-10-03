#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropLootSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DropLootSettings__Class** type_info;
        inline app::DropLootSettings__Class* get_class() {
            return il2cpp::get_class<app::DropLootSettings__Class>(type_info, "", "DropLootSettings");
        }
        inline app::DropLootSettings* create() {
            return il2cpp::create_object<app::DropLootSettings>(get_class());
        }
    } // namespace DropLootSettings
} // namespace app::classes::types

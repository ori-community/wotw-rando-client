#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateManager__Class** type_info;
        inline app::DeflateManager__Class* get_class() {
            return il2cpp::get_class<app::DeflateManager__Class>(type_info, "Ionic.Zlib", "DeflateManager");
        }
        inline app::DeflateManager* create() {
            return il2cpp::create_object<app::DeflateManager>(get_class());
        }
    } // namespace DeflateManager
} // namespace app::classes::types

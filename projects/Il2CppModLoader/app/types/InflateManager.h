#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InflateManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InflateManager__Class** type_info;
        inline app::InflateManager__Class* get_class() {
            return il2cpp::get_class<app::InflateManager__Class>(type_info, "Ionic.Zlib", "InflateManager");
        }
        inline app::InflateManager* create() {
            return il2cpp::create_object<app::InflateManager>(get_class());
        }
    } // namespace InflateManager
} // namespace app::classes::types

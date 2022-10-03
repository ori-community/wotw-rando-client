#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameFolders {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameFolders__Class** type_info;
        inline app::GameFolders__Class* get_class() {
            return il2cpp::get_class<app::GameFolders__Class>(type_info, "Moon", "GameFolders");
        }
        inline app::GameFolders* create() {
            return il2cpp::create_object<app::GameFolders>(get_class());
        }
    } // namespace GameFolders
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RevokeBansResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RevokeBansResult__Class** type_info;
        inline app::RevokeBansResult__Class* get_class() {
            return il2cpp::get_class<app::RevokeBansResult__Class>(type_info, "PlayFab.ServerModels", "RevokeBansResult");
        }
        inline app::RevokeBansResult* create() {
            return il2cpp::create_object<app::RevokeBansResult>(get_class());
        }
    } // namespace RevokeBansResult
} // namespace app::classes::types

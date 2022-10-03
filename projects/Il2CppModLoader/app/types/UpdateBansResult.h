#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateBansResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateBansResult__Class** type_info;
        inline app::UpdateBansResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateBansResult__Class>(type_info, "PlayFab.ServerModels", "UpdateBansResult");
        }
        inline app::UpdateBansResult* create() {
            return il2cpp::create_object<app::UpdateBansResult>(get_class());
        }
    } // namespace UpdateBansResult
} // namespace app::classes::types

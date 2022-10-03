#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddOrUpdateContactEmailResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddOrUpdateContactEmailResult__Class** type_info;
        inline app::AddOrUpdateContactEmailResult__Class* get_class() {
            return il2cpp::get_class<app::AddOrUpdateContactEmailResult__Class>(type_info, "PlayFab.ClientModels", "AddOrUpdateContactEmailResult");
        }
        inline app::AddOrUpdateContactEmailResult* create() {
            return il2cpp::create_object<app::AddOrUpdateContactEmailResult>(get_class());
        }
    } // namespace AddOrUpdateContactEmailResult
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterDataResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateCharacterDataResult__Class** type_info;
        inline app::UpdateCharacterDataResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterDataResult__Class>(type_info, "PlayFab.ClientModels", "UpdateCharacterDataResult");
        }
        inline app::UpdateCharacterDataResult* create() {
            return il2cpp::create_object<app::UpdateCharacterDataResult>(get_class());
        }
    } // namespace UpdateCharacterDataResult
} // namespace app::classes::types

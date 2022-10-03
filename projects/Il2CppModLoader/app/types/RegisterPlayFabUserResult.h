#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegisterPlayFabUserResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegisterPlayFabUserResult__Class** type_info;
        inline app::RegisterPlayFabUserResult__Class* get_class() {
            return il2cpp::get_class<app::RegisterPlayFabUserResult__Class>(type_info, "PlayFab.ClientModels", "RegisterPlayFabUserResult");
        }
        inline app::RegisterPlayFabUserResult* create() {
            return il2cpp::create_object<app::RegisterPlayFabUserResult>(get_class());
        }
    } // namespace RegisterPlayFabUserResult
} // namespace app::classes::types

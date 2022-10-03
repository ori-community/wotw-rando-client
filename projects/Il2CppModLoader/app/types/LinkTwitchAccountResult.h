#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkTwitchAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkTwitchAccountResult__Class** type_info;
        inline app::LinkTwitchAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkTwitchAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkTwitchAccountResult");
        }
        inline app::LinkTwitchAccountResult* create() {
            return il2cpp::create_object<app::LinkTwitchAccountResult>(get_class());
        }
    } // namespace LinkTwitchAccountResult
} // namespace app::classes::types

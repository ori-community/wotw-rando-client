#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkGameCenterAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkGameCenterAccountResult__Class** type_info;
        inline app::LinkGameCenterAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkGameCenterAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkGameCenterAccountResult");
        }
        inline app::LinkGameCenterAccountResult* create() {
            return il2cpp::create_object<app::LinkGameCenterAccountResult>(get_class());
        }
    } // namespace LinkGameCenterAccountResult
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkGameCenterAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkGameCenterAccountResult__Class** type_info;
        inline app::UnlinkGameCenterAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkGameCenterAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkGameCenterAccountResult");
        }
        inline app::UnlinkGameCenterAccountResult* create() {
            return il2cpp::create_object<app::UnlinkGameCenterAccountResult>(get_class());
        }
    } // namespace UnlinkGameCenterAccountResult
} // namespace app::classes::types

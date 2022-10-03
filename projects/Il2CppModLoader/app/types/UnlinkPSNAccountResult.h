#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkPSNAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkPSNAccountResult__Class** type_info;
        inline app::UnlinkPSNAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkPSNAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkPSNAccountResult");
        }
        inline app::UnlinkPSNAccountResult* create() {
            return il2cpp::create_object<app::UnlinkPSNAccountResult>(get_class());
        }
    } // namespace UnlinkPSNAccountResult
} // namespace app::classes::types

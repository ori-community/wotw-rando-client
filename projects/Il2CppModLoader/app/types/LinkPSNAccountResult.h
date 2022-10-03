#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkPSNAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkPSNAccountResult__Class** type_info;
        inline app::LinkPSNAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkPSNAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkPSNAccountResult");
        }
        inline app::LinkPSNAccountResult* create() {
            return il2cpp::create_object<app::LinkPSNAccountResult>(get_class());
        }
    } // namespace LinkPSNAccountResult
} // namespace app::classes::types

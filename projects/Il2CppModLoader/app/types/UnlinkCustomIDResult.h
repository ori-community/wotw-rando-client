#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkCustomIDResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkCustomIDResult__Class** type_info;
        inline app::UnlinkCustomIDResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkCustomIDResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkCustomIDResult");
        }
        inline app::UnlinkCustomIDResult* create() {
            return il2cpp::create_object<app::UnlinkCustomIDResult>(get_class());
        }
    } // namespace UnlinkCustomIDResult
} // namespace app::classes::types

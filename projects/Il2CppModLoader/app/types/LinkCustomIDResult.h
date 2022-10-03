#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkCustomIDResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkCustomIDResult__Class** type_info;
        inline app::LinkCustomIDResult__Class* get_class() {
            return il2cpp::get_class<app::LinkCustomIDResult__Class>(type_info, "PlayFab.ClientModels", "LinkCustomIDResult");
        }
        inline app::LinkCustomIDResult* create() {
            return il2cpp::create_object<app::LinkCustomIDResult>(get_class());
        }
    } // namespace LinkCustomIDResult
} // namespace app::classes::types

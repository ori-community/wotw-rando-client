#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveContactEmailResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveContactEmailResult__Class** type_info;
        inline app::RemoveContactEmailResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveContactEmailResult__Class>(type_info, "PlayFab.ClientModels", "RemoveContactEmailResult");
        }
        inline app::RemoveContactEmailResult* create() {
            return il2cpp::create_object<app::RemoveContactEmailResult>(get_class());
        }
    } // namespace RemoveContactEmailResult
} // namespace app::classes::types

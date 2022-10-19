#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserAccountInfo {
        inline app::UserAccountInfo__Class** type_info = (app::UserAccountInfo__Class**)(modloader::win::memory::resolve_rva(0x047144F8));
        inline app::UserAccountInfo__Class* get_class() {
            return il2cpp::get_class<app::UserAccountInfo__Class>(type_info, "PlayFab.ClientModels", "UserAccountInfo");
        }
        inline app::UserAccountInfo* create() {
            return il2cpp::create_object<app::UserAccountInfo>(get_class());
        }
    } // namespace UserAccountInfo
} // namespace app::classes::types

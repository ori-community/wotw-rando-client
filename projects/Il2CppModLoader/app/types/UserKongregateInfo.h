#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserKongregateInfo {
        inline app::UserKongregateInfo__Class** type_info = (app::UserKongregateInfo__Class**)(modloader::win::memory::resolve_rva(0x04718140));
        inline app::UserKongregateInfo__Class* get_class() {
            return il2cpp::get_class<app::UserKongregateInfo__Class>(type_info, "PlayFab.ClientModels", "UserKongregateInfo");
        }
        inline app::UserKongregateInfo* create() {
            return il2cpp::create_object<app::UserKongregateInfo>(get_class());
        }
    } // namespace UserKongregateInfo
} // namespace app::classes::types

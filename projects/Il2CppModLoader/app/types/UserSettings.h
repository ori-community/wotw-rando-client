#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserSettings {
        inline app::UserSettings__Class** type_info = (app::UserSettings__Class**)(modloader::win::memory::resolve_rva(0x047793C0));
        inline app::UserSettings__Class* get_class() {
            return il2cpp::get_class<app::UserSettings__Class>(type_info, "PlayFab.ClientModels", "UserSettings");
        }
        inline app::UserSettings* create() {
            return il2cpp::create_object<app::UserSettings>(get_class());
        }
    } // namespace UserSettings
} // namespace app::classes::types

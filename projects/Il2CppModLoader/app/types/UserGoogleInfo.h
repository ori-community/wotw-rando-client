#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserGoogleInfo {
        inline app::UserGoogleInfo__Class** type_info = (app::UserGoogleInfo__Class**)(modloader::win::memory::resolve_rva(0x047829D0));
        inline app::UserGoogleInfo__Class* get_class() {
            return il2cpp::get_class<app::UserGoogleInfo__Class>(type_info, "PlayFab.ClientModels", "UserGoogleInfo");
        }
        inline app::UserGoogleInfo* create() {
            return il2cpp::create_object<app::UserGoogleInfo>(get_class());
        }
    } // namespace UserGoogleInfo
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabDataAPI {
        inline app::PlayFabDataAPI__Class** type_info = (app::PlayFabDataAPI__Class**)(modloader::win::memory::resolve_rva(0x0474C7E8));
        inline app::PlayFabDataAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabDataAPI__Class>(type_info, "PlayFab", "PlayFabDataAPI");
        }
        inline app::PlayFabDataAPI* create() {
            return il2cpp::create_object<app::PlayFabDataAPI>(get_class());
        }
    } // namespace PlayFabDataAPI
} // namespace app::classes::types

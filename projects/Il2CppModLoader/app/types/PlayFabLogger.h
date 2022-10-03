#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabLogger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabLogger__Class** type_info;
        inline app::PlayFabLogger__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLogger__Class>(type_info, "PlayFab.Public", "PlayFabLogger");
        }
        inline app::PlayFabLogger* create() {
            return il2cpp::create_object<app::PlayFabLogger>(get_class());
        }
    } // namespace PlayFabLogger
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMusicSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMusicSettings__Class** type_info;
        inline app::AkMusicSettings__Class* get_class() {
            return il2cpp::get_class<app::AkMusicSettings__Class>(type_info, "", "AkMusicSettings");
        }
        inline app::AkMusicSettings* create() {
            return il2cpp::create_object<app::AkMusicSettings>(get_class());
        }
    } // namespace AkMusicSettings
} // namespace app::classes::types

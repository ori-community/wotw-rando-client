#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostGenericSoundPlayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostGenericSoundPlayer__Class** type_info;
        inline app::GhostGenericSoundPlayer__Class* get_class() {
            return il2cpp::get_class<app::GhostGenericSoundPlayer__Class>(type_info, "", "GhostGenericSoundPlayer");
        }
        inline app::GhostGenericSoundPlayer* create() {
            return il2cpp::create_object<app::GhostGenericSoundPlayer>(get_class());
        }
    } // namespace GhostGenericSoundPlayer
} // namespace app::classes::types

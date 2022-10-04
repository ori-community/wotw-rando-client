#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGhostGenericSoundPlayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGhostGenericSoundPlayer__Class** type_info;
        inline app::IGhostGenericSoundPlayer__Class* get_class() {
            return il2cpp::get_class<app::IGhostGenericSoundPlayer__Class>(type_info, "", "IGhostGenericSoundPlayer");
        }
    } // namespace IGhostGenericSoundPlayer
} // namespace app::classes::types

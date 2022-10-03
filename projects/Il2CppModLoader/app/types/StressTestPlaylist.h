#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTestPlaylist {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StressTestPlaylist__Class** type_info;
        inline app::StressTestPlaylist__Class* get_class() {
            return il2cpp::get_class<app::StressTestPlaylist__Class>(type_info, "", "StressTestPlaylist");
        }
        inline app::StressTestPlaylist* create() {
            return il2cpp::create_object<app::StressTestPlaylist>(get_class());
        }
    } // namespace StressTestPlaylist
} // namespace app::classes::types

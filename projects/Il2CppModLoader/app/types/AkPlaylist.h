#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkPlaylist {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkPlaylist__Class** type_info;
        inline app::AkPlaylist__Class* get_class() {
            return il2cpp::get_class<app::AkPlaylist__Class>(type_info, "", "AkPlaylist");
        }
        inline app::AkPlaylist* create() {
            return il2cpp::create_object<app::AkPlaylist>(get_class());
        }
    } // namespace AkPlaylist
} // namespace app::classes::types

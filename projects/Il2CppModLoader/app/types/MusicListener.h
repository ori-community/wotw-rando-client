#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicListener {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MusicListener__Class** type_info;
        inline app::MusicListener__Class* get_class() {
            return il2cpp::get_class<app::MusicListener__Class>(type_info, "", "MusicListener");
        }
        inline app::MusicListener* create() {
            return il2cpp::create_object<app::MusicListener>(get_class());
        }
    } // namespace MusicListener
} // namespace app::classes::types

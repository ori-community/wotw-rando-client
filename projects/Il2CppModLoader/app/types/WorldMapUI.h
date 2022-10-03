#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldMapUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WorldMapUI__Class** type_info;
        inline app::WorldMapUI__Class* get_class() {
            return il2cpp::get_class<app::WorldMapUI__Class>(type_info, "", "WorldMapUI");
        }
        inline app::WorldMapUI* create() {
            return il2cpp::create_object<app::WorldMapUI>(get_class());
        }
    } // namespace WorldMapUI
} // namespace app::classes::types

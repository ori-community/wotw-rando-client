#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapmakerScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MapmakerScreen__Class** type_info;
        inline app::MapmakerScreen__Class* get_class() {
            return il2cpp::get_class<app::MapmakerScreen__Class>(type_info, "", "MapmakerScreen");
        }
        inline app::MapmakerScreen* create() {
            return il2cpp::create_object<app::MapmakerScreen>(get_class());
        }
    } // namespace MapmakerScreen
} // namespace app::classes::types

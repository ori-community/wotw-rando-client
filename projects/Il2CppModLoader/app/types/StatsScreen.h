#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatsScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StatsScreen__Class** type_info;
        inline app::StatsScreen__Class* get_class() {
            return il2cpp::get_class<app::StatsScreen__Class>(type_info, "", "StatsScreen");
        }
        inline app::StatsScreen* create() {
            return il2cpp::create_object<app::StatsScreen>(get_class());
        }
    } // namespace StatsScreen
} // namespace app::classes::types

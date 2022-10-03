#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatsScreen_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StatsScreen_c__Class** type_info;
        inline app::StatsScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::StatsScreen_c__Class>(type_info, "", "StatsScreen", "<>c");
        }
        inline app::StatsScreen_c* create() {
            return il2cpp::create_object<app::StatsScreen_c>(get_class());
        }
    } // namespace StatsScreen_c
} // namespace app::classes::types

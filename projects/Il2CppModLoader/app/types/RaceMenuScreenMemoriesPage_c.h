#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenMemoriesPage_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceMenuScreenMemoriesPage_c__Class** type_info;
        inline app::RaceMenuScreenMemoriesPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceMenuScreenMemoriesPage_c__Class>(type_info, "", "RaceMenuScreenMemoriesPage", "<>c");
        }
        inline app::RaceMenuScreenMemoriesPage_c* create() {
            return il2cpp::create_object<app::RaceMenuScreenMemoriesPage_c>(get_class());
        }
    } // namespace RaceMenuScreenMemoriesPage_c
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RandomSeeder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RandomSeeder__Class** type_info;
        inline app::RandomSeeder__Class* get_class() {
            return il2cpp::get_class<app::RandomSeeder__Class>(type_info, "Swing", "RandomSeeder");
        }
        inline app::RandomSeeder* create() {
            return il2cpp::create_object<app::RandomSeeder>(get_class());
        }
    } // namespace RandomSeeder
} // namespace app::classes::types

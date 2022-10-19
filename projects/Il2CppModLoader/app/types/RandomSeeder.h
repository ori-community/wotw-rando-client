#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RandomSeeder {
        inline app::RandomSeeder__Class** type_info = (app::RandomSeeder__Class**)(modloader::win::memory::resolve_rva(0x04740660));
        inline app::RandomSeeder__Class* get_class() {
            return il2cpp::get_class<app::RandomSeeder__Class>(type_info, "Swing", "RandomSeeder");
        }
        inline app::RandomSeeder* create() {
            return il2cpp::create_object<app::RandomSeeder>(get_class());
        }
    } // namespace RandomSeeder
} // namespace app::classes::types

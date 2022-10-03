#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimation__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimation__Array__Class** type_info;
        inline app::MoonAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimation__Array__Class>(type_info, "Moon", "MoonAnimation[]");
        }
        inline app::MoonAnimation__Array* create() {
            return il2cpp::create_object<app::MoonAnimation__Array>(get_class());
        }
    } // namespace MoonAnimation__Array
} // namespace app::classes::types

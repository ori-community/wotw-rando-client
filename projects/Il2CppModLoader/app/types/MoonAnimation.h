#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimation__Class** type_info;
        inline app::MoonAnimation__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimation__Class>(type_info, "Moon", "MoonAnimation");
        }
        inline app::MoonAnimation* create() {
            return il2cpp::create_object<app::MoonAnimation>(get_class());
        }
        inline app::MoonAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimation__Array>(get_class(), size);
        }
    } // namespace MoonAnimation
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDrivable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDrivable__Class** type_info;
        inline app::IDrivable__Class* get_class() {
            return il2cpp::get_class<app::IDrivable__Class>(type_info, "Moon", "IDrivable");
        }
        inline app::IDrivable* create() {
            return il2cpp::create_object<app::IDrivable>(get_class());
        }
        inline app::IDrivable__Array* create_array(int size) {
            return il2cpp::array_new<app::IDrivable__Array>(get_class(), size);
        }
    } // namespace IDrivable
} // namespace app::classes::types

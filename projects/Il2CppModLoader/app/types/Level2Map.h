#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Level2Map {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Level2Map__Class** type_info;
        inline app::Level2Map__Class* get_class() {
            return il2cpp::get_class<app::Level2Map__Class>(type_info, "Mono.Globalization.Unicode", "Level2Map");
        }
        inline app::Level2Map* create() {
            return il2cpp::create_object<app::Level2Map>(get_class());
        }
        inline app::Level2Map__Array* create_array(int size) {
            return il2cpp::array_new<app::Level2Map__Array>(get_class(), size);
        }
    } // namespace Level2Map
} // namespace app::classes::types

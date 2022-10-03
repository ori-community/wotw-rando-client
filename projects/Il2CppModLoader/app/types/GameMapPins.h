#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameMapPins {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameMapPins__Class** type_info;
        inline app::GameMapPins__Class* get_class() {
            return il2cpp::get_class<app::GameMapPins__Class>(type_info, "", "GameMapPins");
        }
        inline app::GameMapPins* create() {
            return il2cpp::create_object<app::GameMapPins>(get_class());
        }
    } // namespace GameMapPins
} // namespace app::classes::types

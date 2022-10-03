#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyDoor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyDoor__Class** type_info;
        inline app::LegacyDoor__Class* get_class() {
            return il2cpp::get_class<app::LegacyDoor__Class>(type_info, "", "LegacyDoor");
        }
        inline app::LegacyDoor* create() {
            return il2cpp::create_object<app::LegacyDoor>(get_class());
        }
        inline app::LegacyDoor__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyDoor__Array>(get_class(), size);
        }
    } // namespace LegacyDoor
} // namespace app::classes::types

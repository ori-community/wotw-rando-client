#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChargeFlameBurst {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChargeFlameBurst__Class** type_info;
        inline app::ChargeFlameBurst__Class* get_class() {
            return il2cpp::get_class<app::ChargeFlameBurst__Class>(type_info, "", "ChargeFlameBurst");
        }
        inline app::ChargeFlameBurst* create() {
            return il2cpp::create_object<app::ChargeFlameBurst>(get_class());
        }
    } // namespace ChargeFlameBurst
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoorVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DoorVisuals__Class** type_info;
        inline app::DoorVisuals__Class* get_class() {
            return il2cpp::get_class<app::DoorVisuals__Class>(type_info, "", "DoorVisuals");
        }
        inline app::DoorVisuals* create() {
            return il2cpp::create_object<app::DoorVisuals>(get_class());
        }
    } // namespace DoorVisuals
} // namespace app::classes::types

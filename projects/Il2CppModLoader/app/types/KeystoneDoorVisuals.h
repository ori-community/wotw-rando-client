#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeystoneDoorVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeystoneDoorVisuals__Class** type_info;
        inline app::KeystoneDoorVisuals__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorVisuals__Class>(type_info, "", "KeystoneDoorVisuals");
        }
        inline app::KeystoneDoorVisuals* create() {
            return il2cpp::create_object<app::KeystoneDoorVisuals>(get_class());
        }
    } // namespace KeystoneDoorVisuals
} // namespace app::classes::types

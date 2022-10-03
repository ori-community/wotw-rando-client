#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpringVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpringVisuals__Class** type_info;
        inline app::SpringVisuals__Class* get_class() {
            return il2cpp::get_class<app::SpringVisuals__Class>(type_info, "", "SpringVisuals");
        }
        inline app::SpringVisuals* create() {
            return il2cpp::create_object<app::SpringVisuals>(get_class());
        }
    } // namespace SpringVisuals
} // namespace app::classes::types

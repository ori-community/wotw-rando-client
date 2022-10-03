#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LandOnVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LandOnVisuals__Class** type_info;
        inline app::LandOnVisuals__Class* get_class() {
            return il2cpp::get_class<app::LandOnVisuals__Class>(type_info, "", "LandOnVisuals");
        }
        inline app::LandOnVisuals* create() {
            return il2cpp::create_object<app::LandOnVisuals>(get_class());
        }
    } // namespace LandOnVisuals
} // namespace app::classes::types

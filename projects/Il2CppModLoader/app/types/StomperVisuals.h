#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StomperVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StomperVisuals__Class** type_info;
        inline app::StomperVisuals__Class* get_class() {
            return il2cpp::get_class<app::StomperVisuals__Class>(type_info, "", "StomperVisuals");
        }
        inline app::StomperVisuals* create() {
            return il2cpp::create_object<app::StomperVisuals>(get_class());
        }
    } // namespace StomperVisuals
} // namespace app::classes::types

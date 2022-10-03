#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SphereCastManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SphereCastManager__Class** type_info;
        inline app::SphereCastManager__Class* get_class() {
            return il2cpp::get_class<app::SphereCastManager__Class>(type_info, "", "SphereCastManager");
        }
        inline app::SphereCastManager* create() {
            return il2cpp::create_object<app::SphereCastManager>(get_class());
        }
    } // namespace SphereCastManager
} // namespace app::classes::types

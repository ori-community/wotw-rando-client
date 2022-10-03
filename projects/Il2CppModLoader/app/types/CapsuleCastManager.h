#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CapsuleCastManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CapsuleCastManager__Class** type_info;
        inline app::CapsuleCastManager__Class* get_class() {
            return il2cpp::get_class<app::CapsuleCastManager__Class>(type_info, "", "CapsuleCastManager");
        }
        inline app::CapsuleCastManager* create() {
            return il2cpp::create_object<app::CapsuleCastManager>(get_class());
        }
    } // namespace CapsuleCastManager
} // namespace app::classes::types

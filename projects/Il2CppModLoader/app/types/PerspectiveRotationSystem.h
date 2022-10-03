#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerspectiveRotationSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PerspectiveRotationSystem__Class** type_info;
        inline app::PerspectiveRotationSystem__Class* get_class() {
            return il2cpp::get_class<app::PerspectiveRotationSystem__Class>(type_info, "", "PerspectiveRotationSystem");
        }
        inline app::PerspectiveRotationSystem* create() {
            return il2cpp::create_object<app::PerspectiveRotationSystem>(get_class());
        }
    } // namespace PerspectiveRotationSystem
} // namespace app::classes::types

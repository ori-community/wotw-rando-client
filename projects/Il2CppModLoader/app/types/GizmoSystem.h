#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GizmoSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GizmoSystem__Class** type_info;
        inline app::GizmoSystem__Class* get_class() {
            return il2cpp::get_class<app::GizmoSystem__Class>(type_info, "", "GizmoSystem");
        }
        inline app::GizmoSystem* create() {
            return il2cpp::create_object<app::GizmoSystem>(get_class());
        }
    } // namespace GizmoSystem
} // namespace app::classes::types

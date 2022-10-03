#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GizmoHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GizmoHelper__Class** type_info;
        inline app::GizmoHelper__Class* get_class() {
            return il2cpp::get_class<app::GizmoHelper__Class>(type_info, "", "GizmoHelper");
        }
        inline app::GizmoHelper* create() {
            return il2cpp::create_object<app::GizmoHelper>(get_class());
        }
    } // namespace GizmoHelper
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Gizmos {
        namespace {
            app::Gizmos__Class* type_info_ref = nullptr;
        }
        app::Gizmos__Class** type_info = &type_info_ref;
        inline app::Gizmos__Class* get_class() {
            return il2cpp::get_class<app::Gizmos__Class>(type_info, "UnityEngine", "Gizmos");
        }
        inline app::Gizmos* create() {
            return il2cpp::create_object<app::Gizmos>(get_class());
        }
    } // namespace Gizmos
} // namespace app::classes::types

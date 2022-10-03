#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseMeshEffect {
        namespace {
            app::BaseMeshEffect__Class* type_info_ref = nullptr;
        }
        app::BaseMeshEffect__Class** type_info = &type_info_ref;
        inline app::BaseMeshEffect__Class* get_class() {
            return il2cpp::get_class<app::BaseMeshEffect__Class>(type_info, "UnityEngine.UI", "BaseMeshEffect");
        }
        inline app::BaseMeshEffect* create() {
            return il2cpp::create_object<app::BaseMeshEffect>(get_class());
        }
    } // namespace BaseMeshEffect
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VisualEffect {
        namespace {
            app::VisualEffect__Class* type_info_ref = nullptr;
        }
        app::VisualEffect__Class** type_info = &type_info_ref;
        inline app::VisualEffect__Class* get_class() {
            return il2cpp::get_class<app::VisualEffect__Class>(type_info, "UnityEngine.Experimental.VFX", "VisualEffect");
        }
        inline app::VisualEffect* create() {
            return il2cpp::create_object<app::VisualEffect>(get_class());
        }
    } // namespace VisualEffect
} // namespace app::classes::types

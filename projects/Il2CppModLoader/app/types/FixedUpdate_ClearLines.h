#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_ClearLines {
        namespace {
            app::FixedUpdate_ClearLines__Class* type_info_ref = nullptr;
        }
        app::FixedUpdate_ClearLines__Class** type_info = &type_info_ref;
        inline app::FixedUpdate_ClearLines__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_ClearLines__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "ClearLines");
        }
        inline app::FixedUpdate_ClearLines* create() {
            return il2cpp::create_object<app::FixedUpdate_ClearLines>(get_class());
        }
        inline app::FixedUpdate_ClearLines__Boxed* box(app::FixedUpdate_ClearLines value) {
            return il2cpp::box_value<app::FixedUpdate_ClearLines__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_ClearLines
} // namespace app::classes::types

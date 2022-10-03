#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate {
        namespace {
            app::PreLateUpdate__Class* type_info_ref = nullptr;
        }
        app::PreLateUpdate__Class** type_info = &type_info_ref;
        inline app::PreLateUpdate__Class* get_class() {
            return il2cpp::get_class<app::PreLateUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate");
        }
        inline app::PreLateUpdate* create() {
            return il2cpp::create_object<app::PreLateUpdate>(get_class());
        }
        inline app::PreLateUpdate__Boxed* box(app::PreLateUpdate value) {
            return il2cpp::box_value<app::PreLateUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate
} // namespace app::classes::types

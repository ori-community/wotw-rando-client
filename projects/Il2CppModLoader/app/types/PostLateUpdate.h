#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate {
        namespace {
            app::PostLateUpdate__Class* type_info_ref = nullptr;
        }
        app::PostLateUpdate__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate__Class* get_class() {
            return il2cpp::get_class<app::PostLateUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate");
        }
        inline app::PostLateUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate>(get_class());
        }
        inline app::PostLateUpdate__Boxed* box(app::PostLateUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate
} // namespace app::classes::types

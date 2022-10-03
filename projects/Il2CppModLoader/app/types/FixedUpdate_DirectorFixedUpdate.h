#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_DirectorFixedUpdate {
        namespace {
            app::FixedUpdate_DirectorFixedUpdate__Class* type_info_ref = nullptr;
        }
        app::FixedUpdate_DirectorFixedUpdate__Class** type_info = &type_info_ref;
        inline app::FixedUpdate_DirectorFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_DirectorFixedUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "DirectorFixedUpdate");
        }
        inline app::FixedUpdate_DirectorFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_DirectorFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_DirectorFixedUpdate__Boxed* box(app::FixedUpdate_DirectorFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_DirectorFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_DirectorFixedUpdate
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixedUpdate_XRFixedUpdate {
        namespace {
            inline app::FixedUpdate_XRFixedUpdate__Class* type_info_ref = nullptr;
        }
        inline app::FixedUpdate_XRFixedUpdate__Class** type_info = &type_info_ref;
        inline app::FixedUpdate_XRFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_XRFixedUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "XRFixedUpdate");
        }
        inline app::FixedUpdate_XRFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_XRFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_XRFixedUpdate__Boxed* box(app::FixedUpdate_XRFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_XRFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_XRFixedUpdate
} // namespace app::classes::types

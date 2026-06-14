#pragma once
#include <Modloader/app/structs/FixedUpdate_XRFixedUpdate.h>
#include <Modloader/app/structs/FixedUpdate_XRFixedUpdate__Boxed.h>
#include <Modloader/app/structs/FixedUpdate_XRFixedUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_XRFixedUpdate {
        inline app::FixedUpdate_XRFixedUpdate__Class** type_info() {
            static app::FixedUpdate_XRFixedUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdate_XRFixedUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdate_XRFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_XRFixedUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "XRFixedUpdate");
        }
        inline app::FixedUpdate_XRFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_XRFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_XRFixedUpdate__Boxed* box(app::FixedUpdate_XRFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_XRFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_XRFixedUpdate
} // namespace app::classes::types

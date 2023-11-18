#pragma once
#include <Modloader/app/structs/FixedUpdate.h>
#include <Modloader/app/structs/FixedUpdate__Boxed.h>
#include <Modloader/app/structs/FixedUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate {
        inline app::FixedUpdate__Class** type_info() {
            static app::FixedUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdate__Class* get_class() {
            return il2cpp::get_class<app::FixedUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "FixedUpdate");
        }
        inline app::FixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate>(get_class());
        }
        inline app::FixedUpdate__Boxed* box(app::FixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate
} // namespace app::classes::types

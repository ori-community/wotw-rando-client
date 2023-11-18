#pragma once
#include <Modloader/app/structs/FixedUpdate_NewInputFixedUpdate.h>
#include <Modloader/app/structs/FixedUpdate_NewInputFixedUpdate__Boxed.h>
#include <Modloader/app/structs/FixedUpdate_NewInputFixedUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_NewInputFixedUpdate {
        inline app::FixedUpdate_NewInputFixedUpdate__Class** type_info() {
            static app::FixedUpdate_NewInputFixedUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdate_NewInputFixedUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdate_NewInputFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_NewInputFixedUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "NewInputFixedUpdate");
        }
        inline app::FixedUpdate_NewInputFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_NewInputFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_NewInputFixedUpdate__Boxed* box(app::FixedUpdate_NewInputFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_NewInputFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_NewInputFixedUpdate
} // namespace app::classes::types

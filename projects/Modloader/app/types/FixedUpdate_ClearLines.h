#pragma once
#include <Modloader/app/structs/FixedUpdate_ClearLines.h>
#include <Modloader/app/structs/FixedUpdate_ClearLines__Boxed.h>
#include <Modloader/app/structs/FixedUpdate_ClearLines__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_ClearLines {
        inline app::FixedUpdate_ClearLines__Class** type_info() {
            static app::FixedUpdate_ClearLines__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdate_ClearLines__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdate_ClearLines__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_ClearLines__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "ClearLines");
        }
        inline app::FixedUpdate_ClearLines* create() {
            return il2cpp::create_object<app::FixedUpdate_ClearLines>(get_class());
        }
        inline app::FixedUpdate_ClearLines__Boxed* box(app::FixedUpdate_ClearLines value) {
            return il2cpp::box_value<app::FixedUpdate_ClearLines__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_ClearLines
} // namespace app::classes::types

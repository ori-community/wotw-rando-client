#pragma once
#include <Modloader/app/structs/PreLateUpdate_ConstraintManagerUpdate.h>
#include <Modloader/app/structs/PreLateUpdate_ConstraintManagerUpdate__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate_ConstraintManagerUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_ConstraintManagerUpdate {
        inline app::PreLateUpdate_ConstraintManagerUpdate__Class** type_info() {
            static app::PreLateUpdate_ConstraintManagerUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate_ConstraintManagerUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate_ConstraintManagerUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_ConstraintManagerUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "ConstraintManagerUpdate");
        }
        inline app::PreLateUpdate_ConstraintManagerUpdate* create() {
            return il2cpp::create_object<app::PreLateUpdate_ConstraintManagerUpdate>(get_class());
        }
        inline app::PreLateUpdate_ConstraintManagerUpdate__Boxed* box(app::PreLateUpdate_ConstraintManagerUpdate value) {
            return il2cpp::box_value<app::PreLateUpdate_ConstraintManagerUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_ConstraintManagerUpdate
} // namespace app::classes::types

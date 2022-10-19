#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreLateUpdate_ConstraintManagerUpdate {
        namespace {
            inline app::PreLateUpdate_ConstraintManagerUpdate__Class* type_info_ref = nullptr;
        }
        inline app::PreLateUpdate_ConstraintManagerUpdate__Class** type_info = &type_info_ref;
        inline app::PreLateUpdate_ConstraintManagerUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_ConstraintManagerUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "ConstraintManagerUpdate");
        }
        inline app::PreLateUpdate_ConstraintManagerUpdate* create() {
            return il2cpp::create_object<app::PreLateUpdate_ConstraintManagerUpdate>(get_class());
        }
        inline app::PreLateUpdate_ConstraintManagerUpdate__Boxed* box(app::PreLateUpdate_ConstraintManagerUpdate value) {
            return il2cpp::box_value<app::PreLateUpdate_ConstraintManagerUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_ConstraintManagerUpdate
} // namespace app::classes::types

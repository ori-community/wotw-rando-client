#pragma once
#include <Modloader/app/structs/PostLateUpdate_ResetInputAxis.h>
#include <Modloader/app/structs/PostLateUpdate_ResetInputAxis__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_ResetInputAxis__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_ResetInputAxis {
        inline app::PostLateUpdate_ResetInputAxis__Class** type_info() {
            static app::PostLateUpdate_ResetInputAxis__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_ResetInputAxis__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_ResetInputAxis__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ResetInputAxis__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ResetInputAxis");
        }
        inline app::PostLateUpdate_ResetInputAxis* create() {
            return il2cpp::create_object<app::PostLateUpdate_ResetInputAxis>(get_class());
        }
        inline app::PostLateUpdate_ResetInputAxis__Boxed* box(app::PostLateUpdate_ResetInputAxis value) {
            return il2cpp::box_value<app::PostLateUpdate_ResetInputAxis__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ResetInputAxis
} // namespace app::classes::types

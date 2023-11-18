#pragma once
#include <Modloader/app/structs/PreLateUpdate_LegacyAnimationUpdate.h>
#include <Modloader/app/structs/PreLateUpdate_LegacyAnimationUpdate__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate_LegacyAnimationUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_LegacyAnimationUpdate {
        inline app::PreLateUpdate_LegacyAnimationUpdate__Class** type_info() {
            static app::PreLateUpdate_LegacyAnimationUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate_LegacyAnimationUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate_LegacyAnimationUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_LegacyAnimationUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "LegacyAnimationUpdate");
        }
        inline app::PreLateUpdate_LegacyAnimationUpdate* create() {
            return il2cpp::create_object<app::PreLateUpdate_LegacyAnimationUpdate>(get_class());
        }
        inline app::PreLateUpdate_LegacyAnimationUpdate__Boxed* box(app::PreLateUpdate_LegacyAnimationUpdate value) {
            return il2cpp::box_value<app::PreLateUpdate_LegacyAnimationUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_LegacyAnimationUpdate
} // namespace app::classes::types

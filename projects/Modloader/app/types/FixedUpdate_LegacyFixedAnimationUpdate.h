#pragma once
#include <Modloader/app/structs/FixedUpdate_LegacyFixedAnimationUpdate.h>
#include <Modloader/app/structs/FixedUpdate_LegacyFixedAnimationUpdate__Boxed.h>
#include <Modloader/app/structs/FixedUpdate_LegacyFixedAnimationUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_LegacyFixedAnimationUpdate {
        inline app::FixedUpdate_LegacyFixedAnimationUpdate__Class** type_info() {
            static app::FixedUpdate_LegacyFixedAnimationUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdate_LegacyFixedAnimationUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdate_LegacyFixedAnimationUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_LegacyFixedAnimationUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "LegacyFixedAnimationUpdate");
        }
        inline app::FixedUpdate_LegacyFixedAnimationUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_LegacyFixedAnimationUpdate>(get_class());
        }
        inline app::FixedUpdate_LegacyFixedAnimationUpdate__Boxed* box(app::FixedUpdate_LegacyFixedAnimationUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_LegacyFixedAnimationUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_LegacyFixedAnimationUpdate
} // namespace app::classes::types

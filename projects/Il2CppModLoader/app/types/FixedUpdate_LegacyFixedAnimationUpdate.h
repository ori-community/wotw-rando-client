#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixedUpdate_LegacyFixedAnimationUpdate {
        namespace {
            inline app::FixedUpdate_LegacyFixedAnimationUpdate__Class* type_info_ref = nullptr;
        }
        inline app::FixedUpdate_LegacyFixedAnimationUpdate__Class** type_info = &type_info_ref;
        inline app::FixedUpdate_LegacyFixedAnimationUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_LegacyFixedAnimationUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "LegacyFixedAnimationUpdate");
        }
        inline app::FixedUpdate_LegacyFixedAnimationUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_LegacyFixedAnimationUpdate>(get_class());
        }
        inline app::FixedUpdate_LegacyFixedAnimationUpdate__Boxed* box(app::FixedUpdate_LegacyFixedAnimationUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_LegacyFixedAnimationUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_LegacyFixedAnimationUpdate
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationVerletPlayableStatus {
        namespace {
            inline app::AnimationVerletPlayableStatus__Class* type_info_ref = nullptr;
        }
        inline app::AnimationVerletPlayableStatus__Class** type_info = &type_info_ref;
        inline app::AnimationVerletPlayableStatus__Class* get_class() {
            return il2cpp::get_class<app::AnimationVerletPlayableStatus__Class>(type_info, "UnityEngine.Animations", "AnimationVerletPlayableStatus");
        }
        inline app::AnimationVerletPlayableStatus* create() {
            return il2cpp::create_object<app::AnimationVerletPlayableStatus>(get_class());
        }
        inline app::AnimationVerletPlayableStatus__Boxed* box(app::AnimationVerletPlayableStatus value) {
            return il2cpp::box_value<app::AnimationVerletPlayableStatus__Boxed>(get_class(), value);
        }
    } // namespace AnimationVerletPlayableStatus
} // namespace app::classes::types

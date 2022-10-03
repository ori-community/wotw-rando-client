#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationVerletPlayableConfiguration {
        namespace {
            app::AnimationVerletPlayableConfiguration__Class* type_info_ref = nullptr;
        }
        app::AnimationVerletPlayableConfiguration__Class** type_info = &type_info_ref;
        inline app::AnimationVerletPlayableConfiguration__Class* get_class() {
            return il2cpp::get_class<app::AnimationVerletPlayableConfiguration__Class>(type_info, "UnityEngine.Animations", "AnimationVerletPlayableConfiguration");
        }
        inline app::AnimationVerletPlayableConfiguration* create() {
            return il2cpp::create_object<app::AnimationVerletPlayableConfiguration>(get_class());
        }
        inline app::AnimationVerletPlayableConfiguration__Boxed* box(app::AnimationVerletPlayableConfiguration value) {
            return il2cpp::box_value<app::AnimationVerletPlayableConfiguration__Boxed>(get_class(), value);
        }
    } // namespace AnimationVerletPlayableConfiguration
} // namespace app::classes::types

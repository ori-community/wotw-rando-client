#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationVerletPlayableParameters {
        namespace {
            inline app::AnimationVerletPlayableParameters__Class* type_info_ref = nullptr;
        }
        inline app::AnimationVerletPlayableParameters__Class** type_info = &type_info_ref;
        inline app::AnimationVerletPlayableParameters__Class* get_class() {
            return il2cpp::get_class<app::AnimationVerletPlayableParameters__Class>(type_info, "UnityEngine.Animations", "AnimationVerletPlayableParameters");
        }
        inline app::AnimationVerletPlayableParameters* create() {
            return il2cpp::create_object<app::AnimationVerletPlayableParameters>(get_class());
        }
        inline app::AnimationVerletPlayableParameters__Boxed* box(app::AnimationVerletPlayableParameters value) {
            return il2cpp::box_value<app::AnimationVerletPlayableParameters__Boxed>(get_class(), value);
        }
    } // namespace AnimationVerletPlayableParameters
} // namespace app::classes::types

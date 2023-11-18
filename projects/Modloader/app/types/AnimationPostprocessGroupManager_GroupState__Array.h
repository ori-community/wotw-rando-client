#pragma once
#include <Modloader/app/structs/AnimationPostprocessGroupManager_GroupState__Array.h>
#include <Modloader/app/structs/AnimationPostprocessGroupManager_GroupState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupManager_GroupState__Array {
        inline app::AnimationPostprocessGroupManager_GroupState__Array__Class** type_info() {
            static app::AnimationPostprocessGroupManager_GroupState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationPostprocessGroupManager_GroupState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationPostprocessGroupManager_GroupState__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroupManager_GroupState__Array__Class>(type_info(), "Moon", "AnimationPostprocessGroupManager+GroupState[]");
        }
        inline app::AnimationPostprocessGroupManager_GroupState__Array* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupManager_GroupState__Array>(get_class());
        }
    } // namespace AnimationPostprocessGroupManager_GroupState__Array
} // namespace app::classes::types

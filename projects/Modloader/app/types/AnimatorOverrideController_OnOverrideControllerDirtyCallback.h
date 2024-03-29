#pragma once
#include <Modloader/app/structs/AnimatorOverrideController_OnOverrideControllerDirtyCallback.h>
#include <Modloader/app/structs/AnimatorOverrideController_OnOverrideControllerDirtyCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorOverrideController_OnOverrideControllerDirtyCallback {
        inline app::AnimatorOverrideController_OnOverrideControllerDirtyCallback__Class** type_info() {
            static app::AnimatorOverrideController_OnOverrideControllerDirtyCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorOverrideController_OnOverrideControllerDirtyCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorOverrideController_OnOverrideControllerDirtyCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimatorOverrideController_OnOverrideControllerDirtyCallback__Class>(type_info(), "UnityEngine", "AnimatorOverrideController", "OnOverrideControllerDirtyCallback");
        }
        inline app::AnimatorOverrideController_OnOverrideControllerDirtyCallback* create() {
            return il2cpp::create_object<app::AnimatorOverrideController_OnOverrideControllerDirtyCallback>(get_class());
        }
    } // namespace AnimatorOverrideController_OnOverrideControllerDirtyCallback
} // namespace app::classes::types

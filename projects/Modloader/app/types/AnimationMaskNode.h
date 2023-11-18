#pragma once
#include <Modloader/app/structs/AnimationMaskNode.h>
#include <Modloader/app/structs/AnimationMaskNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMaskNode {
        inline app::AnimationMaskNode__Class** type_info() {
            static app::AnimationMaskNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationMaskNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationMaskNode__Class* get_class() {
            return il2cpp::get_class<app::AnimationMaskNode__Class>(type_info(), "Moon", "AnimationMaskNode");
        }
        inline app::AnimationMaskNode* create() {
            return il2cpp::create_object<app::AnimationMaskNode>(get_class());
        }
    } // namespace AnimationMaskNode
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/BehaviourTreeVirtualAnimator.h>
#include <Modloader/app/structs/BehaviourTreeVirtualAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeVirtualAnimator {
        inline app::BehaviourTreeVirtualAnimator__Class** type_info() {
            static app::BehaviourTreeVirtualAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BehaviourTreeVirtualAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BehaviourTreeVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeVirtualAnimator__Class>(type_info(), "", "BehaviourTreeVirtualAnimator");
        }
        inline app::BehaviourTreeVirtualAnimator* create() {
            return il2cpp::create_object<app::BehaviourTreeVirtualAnimator>(get_class());
        }
    } // namespace BehaviourTreeVirtualAnimator
} // namespace app::classes::types

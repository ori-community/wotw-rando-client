#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BehaviourTreeVirtualAnimator__Class.h>
#include <Modloader/app/structs/BehaviourTreeVirtualAnimator.h>

namespace app::classes::types {
    namespace BehaviourTreeVirtualAnimator {
        namespace {
            inline app::BehaviourTreeVirtualAnimator__Class* type_info_ref = nullptr;
        }
        inline app::BehaviourTreeVirtualAnimator__Class** type_info = &type_info_ref;
        inline app::BehaviourTreeVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeVirtualAnimator__Class>(type_info, "", "BehaviourTreeVirtualAnimator");
        }
        inline app::BehaviourTreeVirtualAnimator* create() {
            return il2cpp::create_object<app::BehaviourTreeVirtualAnimator>(get_class());
        }
    } // namespace BehaviourTreeVirtualAnimator
} // namespace app::classes::types

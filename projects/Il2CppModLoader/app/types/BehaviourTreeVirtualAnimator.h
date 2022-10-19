#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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

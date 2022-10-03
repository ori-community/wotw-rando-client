#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugHitReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HornBugHitReactionBehaviour_c__Class** type_info;
        inline app::HornBugHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugHitReactionBehaviour_c__Class>(type_info, "", "HornBugHitReactionBehaviour", "<>c");
        }
        inline app::HornBugHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::HornBugHitReactionBehaviour_c>(get_class());
        }
    } // namespace HornBugHitReactionBehaviour_c
} // namespace app::classes::types

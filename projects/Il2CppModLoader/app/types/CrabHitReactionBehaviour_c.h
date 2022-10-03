#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabHitReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrabHitReactionBehaviour_c__Class** type_info;
        inline app::CrabHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabHitReactionBehaviour_c__Class>(type_info, "", "CrabHitReactionBehaviour", "<>c");
        }
        inline app::CrabHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::CrabHitReactionBehaviour_c>(get_class());
        }
    } // namespace CrabHitReactionBehaviour_c
} // namespace app::classes::types

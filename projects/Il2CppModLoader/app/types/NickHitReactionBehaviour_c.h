#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NickHitReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NickHitReactionBehaviour_c__Class** type_info;
        inline app::NickHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NickHitReactionBehaviour_c__Class>(type_info, "", "NickHitReactionBehaviour", "<>c");
        }
        inline app::NickHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::NickHitReactionBehaviour_c>(get_class());
        }
    } // namespace NickHitReactionBehaviour_c
} // namespace app::classes::types

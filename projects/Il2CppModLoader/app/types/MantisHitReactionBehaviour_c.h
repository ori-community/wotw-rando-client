#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisHitReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MantisHitReactionBehaviour_c__Class** type_info;
        inline app::MantisHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisHitReactionBehaviour_c__Class>(type_info, "", "MantisHitReactionBehaviour", "<>c");
        }
        inline app::MantisHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MantisHitReactionBehaviour_c>(get_class());
        }
    } // namespace MantisHitReactionBehaviour_c
} // namespace app::classes::types

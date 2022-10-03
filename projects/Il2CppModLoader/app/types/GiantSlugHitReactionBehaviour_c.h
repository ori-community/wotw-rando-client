#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GiantSlugHitReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GiantSlugHitReactionBehaviour_c__Class** type_info;
        inline app::GiantSlugHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GiantSlugHitReactionBehaviour_c__Class>(type_info, "", "GiantSlugHitReactionBehaviour", "<>c");
        }
        inline app::GiantSlugHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::GiantSlugHitReactionBehaviour_c>(get_class());
        }
    } // namespace GiantSlugHitReactionBehaviour_c
} // namespace app::classes::types

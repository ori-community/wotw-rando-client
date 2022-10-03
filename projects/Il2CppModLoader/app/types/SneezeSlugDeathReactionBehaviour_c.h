#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugDeathReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SneezeSlugDeathReactionBehaviour_c__Class** type_info;
        inline app::SneezeSlugDeathReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugDeathReactionBehaviour_c__Class>(type_info, "", "SneezeSlugDeathReactionBehaviour", "<>c");
        }
        inline app::SneezeSlugDeathReactionBehaviour_c* create() {
            return il2cpp::create_object<app::SneezeSlugDeathReactionBehaviour_c>(get_class());
        }
    } // namespace SneezeSlugDeathReactionBehaviour_c
} // namespace app::classes::types

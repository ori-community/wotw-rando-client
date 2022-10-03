#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderlingHitReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderlingHitReactionBehaviour_c__Class** type_info;
        inline app::SpiderlingHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderlingHitReactionBehaviour_c__Class>(type_info, "", "SpiderlingHitReactionBehaviour", "<>c");
        }
        inline app::SpiderlingHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::SpiderlingHitReactionBehaviour_c>(get_class());
        }
    } // namespace SpiderlingHitReactionBehaviour_c
} // namespace app::classes::types

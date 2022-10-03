#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerFallReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MinerFallReactionBehaviour_c__Class** type_info;
        inline app::MinerFallReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerFallReactionBehaviour_c__Class>(type_info, "", "MinerFallReactionBehaviour", "<>c");
        }
        inline app::MinerFallReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MinerFallReactionBehaviour_c>(get_class());
        }
    } // namespace MinerFallReactionBehaviour_c
} // namespace app::classes::types

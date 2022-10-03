#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpperKickReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpperKickReactionBehaviour_c__Class** type_info;
        inline app::UpperKickReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UpperKickReactionBehaviour_c__Class>(type_info, "", "UpperKickReactionBehaviour", "<>c");
        }
        inline app::UpperKickReactionBehaviour_c* create() {
            return il2cpp::create_object<app::UpperKickReactionBehaviour_c>(get_class());
        }
    } // namespace UpperKickReactionBehaviour_c
} // namespace app::classes::types

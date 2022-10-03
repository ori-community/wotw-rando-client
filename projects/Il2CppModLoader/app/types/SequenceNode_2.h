#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SequenceNode_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SequenceNode_2__Class** type_info;
        inline app::SequenceNode_2__Class* get_class() {
            return il2cpp::get_class<app::SequenceNode_2__Class>(type_info, "UberBehaviourTree", "SequenceNode");
        }
        inline app::SequenceNode_2* create() {
            return il2cpp::create_object<app::SequenceNode_2>(get_class());
        }
    } // namespace SequenceNode_2
} // namespace app::classes::types

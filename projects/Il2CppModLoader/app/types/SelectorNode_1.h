#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SelectorNode_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SelectorNode_1__Class** type_info;
        inline app::SelectorNode_1__Class* get_class() {
            return il2cpp::get_class<app::SelectorNode_1__Class>(type_info, "UberBehaviourTree", "SelectorNode");
        }
        inline app::SelectorNode_1* create() {
            return il2cpp::create_object<app::SelectorNode_1>(get_class());
        }
    } // namespace SelectorNode_1
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionGraph_NodeFinishedCondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionGraph_NodeFinishedCondition__Class** type_info;
        inline app::InteractionGraph_NodeFinishedCondition__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionGraph_NodeFinishedCondition__Class>(type_info, "Moon.InteractionGraph", "InteractionGraph", "NodeFinishedCondition");
        }
        inline app::InteractionGraph_NodeFinishedCondition* create() {
            return il2cpp::create_object<app::InteractionGraph_NodeFinishedCondition>(get_class());
        }
    } // namespace InteractionGraph_NodeFinishedCondition
} // namespace app::classes::types

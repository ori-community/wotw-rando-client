#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInteractionNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IInteractionNode__Class** type_info;
        inline app::IInteractionNode__Class* get_class() {
            return il2cpp::get_class<app::IInteractionNode__Class>(type_info, "Moon.InteractionGraph", "IInteractionNode");
        }
        inline app::IInteractionNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IInteractionNode__Array>(get_class(), size);
        }
    } // namespace IInteractionNode
} // namespace app::classes::types

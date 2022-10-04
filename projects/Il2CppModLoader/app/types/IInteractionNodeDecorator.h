#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInteractionNodeDecorator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IInteractionNodeDecorator__Class** type_info;
        inline app::IInteractionNodeDecorator__Class* get_class() {
            return il2cpp::get_class<app::IInteractionNodeDecorator__Class>(type_info, "Moon.InteractionGraph", "IInteractionNodeDecorator");
        }
        inline app::IInteractionNodeDecorator__Array* create_array(int size) {
            return il2cpp::array_new<app::IInteractionNodeDecorator__Array>(get_class(), size);
        }
    } // namespace IInteractionNodeDecorator
} // namespace app::classes::types

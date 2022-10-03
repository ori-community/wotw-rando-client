#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionNodeContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionNodeContext__Class** type_info;
        inline app::InteractionNodeContext__Class* get_class() {
            return il2cpp::get_class<app::InteractionNodeContext__Class>(type_info, "Moon.InteractionGraph", "InteractionNodeContext");
        }
        inline app::InteractionNodeContext* create() {
            return il2cpp::create_object<app::InteractionNodeContext>(get_class());
        }
    } // namespace InteractionNodeContext
} // namespace app::classes::types

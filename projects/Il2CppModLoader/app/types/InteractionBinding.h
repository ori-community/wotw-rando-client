#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionBinding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionBinding__Class** type_info;
        inline app::InteractionBinding__Class* get_class() {
            return il2cpp::get_class<app::InteractionBinding__Class>(type_info, "Moon.InteractionGraph", "InteractionBinding");
        }
        inline app::InteractionBinding* create() {
            return il2cpp::create_object<app::InteractionBinding>(get_class());
        }
    } // namespace InteractionBinding
} // namespace app::classes::types

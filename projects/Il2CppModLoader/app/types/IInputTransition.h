#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInputTransition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IInputTransition__Class** type_info;
        inline app::IInputTransition__Class* get_class() {
            return il2cpp::get_class<app::IInputTransition__Class>(type_info, "Moon.InteractionGraph", "IInputTransition");
        }
        inline app::IInputTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::IInputTransition__Array>(get_class(), size);
        }
    } // namespace IInputTransition
} // namespace app::classes::types

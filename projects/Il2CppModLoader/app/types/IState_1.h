#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IState_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IState_1__Class** type_info;
        inline app::IState_1__Class* get_class() {
            return il2cpp::get_class<app::IState_1__Class>(type_info, "Moon.InteractionGraph", "IState");
        }
        inline app::IState_1__Array* create_array(int size) {
            return il2cpp::array_new<app::IState_1__Array>(get_class(), size);
        }
    } // namespace IState_1
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Transition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Transition__Class** type_info;
        inline app::Transition__Class* get_class() {
            return il2cpp::get_class<app::Transition__Class>(type_info, "Moon.InteractionGraph", "Transition");
        }
        inline app::Transition* create() {
            return il2cpp::create_object<app::Transition>(get_class());
        }
        inline app::Transition__Array* create_array(int size) {
            return il2cpp::array_new<app::Transition__Array>(get_class(), size);
        }
    } // namespace Transition
} // namespace app::classes::types

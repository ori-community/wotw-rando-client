#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionEffector__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionEffector__Array__Class** type_info;
        inline app::InteractionEffector__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionEffector__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionEffector[]");
        }
        inline app::InteractionEffector__Array* create() {
            return il2cpp::create_object<app::InteractionEffector__Array>(get_class());
        }
    } // namespace InteractionEffector__Array
} // namespace app::classes::types

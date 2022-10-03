#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionEffector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionEffector__Class** type_info;
        inline app::InteractionEffector__Class* get_class() {
            return il2cpp::get_class<app::InteractionEffector__Class>(type_info, "RootMotion.FinalIK", "InteractionEffector");
        }
        inline app::InteractionEffector* create() {
            return il2cpp::create_object<app::InteractionEffector>(get_class());
        }
        inline app::InteractionEffector__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionEffector__Array>(get_class(), size);
        }
    } // namespace InteractionEffector
} // namespace app::classes::types

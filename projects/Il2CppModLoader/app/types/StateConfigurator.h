#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateConfigurator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateConfigurator__Class** type_info;
        inline app::StateConfigurator__Class* get_class() {
            return il2cpp::get_class<app::StateConfigurator__Class>(type_info, "Moon.InteractionGraph", "StateConfigurator");
        }
        inline app::StateConfigurator* create() {
            return il2cpp::create_object<app::StateConfigurator>(get_class());
        }
    } // namespace StateConfigurator
} // namespace app::classes::types

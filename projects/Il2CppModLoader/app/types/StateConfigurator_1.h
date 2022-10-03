#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateConfigurator_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateConfigurator_1__Class** type_info;
        inline app::StateConfigurator_1__Class* get_class() {
            return il2cpp::get_class<app::StateConfigurator_1__Class>(type_info, "fsm", "StateConfigurator");
        }
        inline app::StateConfigurator_1* create() {
            return il2cpp::create_object<app::StateConfigurator_1>(get_class());
        }
    } // namespace StateConfigurator_1
} // namespace app::classes::types

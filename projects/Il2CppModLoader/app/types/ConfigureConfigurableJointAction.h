#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigureConfigurableJointAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConfigureConfigurableJointAction__Class** type_info;
        inline app::ConfigureConfigurableJointAction__Class* get_class() {
            return il2cpp::get_class<app::ConfigureConfigurableJointAction__Class>(type_info, "", "ConfigureConfigurableJointAction");
        }
        inline app::ConfigureConfigurableJointAction* create() {
            return il2cpp::create_object<app::ConfigureConfigurableJointAction>(get_class());
        }
    } // namespace ConfigureConfigurableJointAction
} // namespace app::classes::types

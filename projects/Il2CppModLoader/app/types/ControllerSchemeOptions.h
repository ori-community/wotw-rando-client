#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControllerSchemeOptions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControllerSchemeOptions__Class** type_info;
        inline app::ControllerSchemeOptions__Class* get_class() {
            return il2cpp::get_class<app::ControllerSchemeOptions__Class>(type_info, "", "ControllerSchemeOptions");
        }
        inline app::ControllerSchemeOptions* create() {
            return il2cpp::create_object<app::ControllerSchemeOptions>(get_class());
        }
    } // namespace ControllerSchemeOptions
} // namespace app::classes::types

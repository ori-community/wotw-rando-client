#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivationParent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivationParent__Class** type_info;
        inline app::ActivationParent__Class* get_class() {
            return il2cpp::get_class<app::ActivationParent__Class>(type_info, "", "ActivationParent");
        }
        inline app::ActivationParent* create() {
            return il2cpp::create_object<app::ActivationParent>(get_class());
        }
    } // namespace ActivationParent
} // namespace app::classes::types

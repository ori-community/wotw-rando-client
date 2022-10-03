#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivationServices {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivationServices__Class** type_info;
        inline app::ActivationServices__Class* get_class() {
            return il2cpp::get_class<app::ActivationServices__Class>(type_info, "System.Runtime.Remoting.Activation", "ActivationServices");
        }
        inline app::ActivationServices* create() {
            return il2cpp::create_object<app::ActivationServices>(get_class());
        }
    } // namespace ActivationServices
} // namespace app::classes::types

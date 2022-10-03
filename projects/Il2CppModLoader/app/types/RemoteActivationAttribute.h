#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteActivationAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoteActivationAttribute__Class** type_info;
        inline app::RemoteActivationAttribute__Class* get_class() {
            return il2cpp::get_class<app::RemoteActivationAttribute__Class>(type_info, "System.Runtime.Remoting.Activation", "RemoteActivationAttribute");
        }
        inline app::RemoteActivationAttribute* create() {
            return il2cpp::create_object<app::RemoteActivationAttribute>(get_class());
        }
    } // namespace RemoteActivationAttribute
} // namespace app::classes::types

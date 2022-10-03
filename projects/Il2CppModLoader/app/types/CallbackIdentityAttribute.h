#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallbackIdentityAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CallbackIdentityAttribute__Class** type_info;
        inline app::CallbackIdentityAttribute__Class* get_class() {
            return il2cpp::get_class<app::CallbackIdentityAttribute__Class>(type_info, "Steamworks", "CallbackIdentityAttribute");
        }
        inline app::CallbackIdentityAttribute* create() {
            return il2cpp::create_object<app::CallbackIdentityAttribute>(get_class());
        }
    } // namespace CallbackIdentityAttribute
} // namespace app::classes::types

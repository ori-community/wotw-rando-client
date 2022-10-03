#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerRigidbody_RigidbodyData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerRigidbody_RigidbodyData__Class** type_info;
        inline app::ServerRigidbody_RigidbodyData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerRigidbody_RigidbodyData__Class>(type_info, "", "ServerRigidbody", "RigidbodyData");
        }
        inline app::ServerRigidbody_RigidbodyData* create() {
            return il2cpp::create_object<app::ServerRigidbody_RigidbodyData>(get_class());
        }
        inline app::ServerRigidbody_RigidbodyData__Boxed* box(app::ServerRigidbody_RigidbodyData value) {
            return il2cpp::box_value<app::ServerRigidbody_RigidbodyData__Boxed>(get_class(), value);
        }
    } // namespace ServerRigidbody_RigidbodyData
} // namespace app::classes::types

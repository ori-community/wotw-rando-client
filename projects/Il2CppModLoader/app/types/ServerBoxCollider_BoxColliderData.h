#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerBoxCollider_BoxColliderData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerBoxCollider_BoxColliderData__Class** type_info;
        inline app::ServerBoxCollider_BoxColliderData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerBoxCollider_BoxColliderData__Class>(type_info, "", "ServerBoxCollider", "BoxColliderData");
        }
        inline app::ServerBoxCollider_BoxColliderData* create() {
            return il2cpp::create_object<app::ServerBoxCollider_BoxColliderData>(get_class());
        }
        inline app::ServerBoxCollider_BoxColliderData__Boxed* box(app::ServerBoxCollider_BoxColliderData value) {
            return il2cpp::box_value<app::ServerBoxCollider_BoxColliderData__Boxed>(get_class(), value);
        }
    } // namespace ServerBoxCollider_BoxColliderData
} // namespace app::classes::types

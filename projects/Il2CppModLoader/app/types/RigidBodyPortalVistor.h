#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidBodyPortalVistor {
        namespace {
            inline app::RigidBodyPortalVistor__Class* type_info_ref = nullptr;
        }
        inline app::RigidBodyPortalVistor__Class** type_info = &type_info_ref;
        inline app::RigidBodyPortalVistor__Class* get_class() {
            return il2cpp::get_class<app::RigidBodyPortalVistor__Class>(type_info, "", "RigidBodyPortalVistor");
        }
        inline app::RigidBodyPortalVistor* create() {
            return il2cpp::create_object<app::RigidBodyPortalVistor>(get_class());
        }
    } // namespace RigidBodyPortalVistor
} // namespace app::classes::types

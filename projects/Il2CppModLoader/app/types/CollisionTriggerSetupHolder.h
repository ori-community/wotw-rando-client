#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionTriggerSetupHolder {
        namespace {
            app::CollisionTriggerSetupHolder__Class* type_info_ref = nullptr;
        }
        app::CollisionTriggerSetupHolder__Class** type_info = &type_info_ref;
        inline app::CollisionTriggerSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::CollisionTriggerSetupHolder__Class>(type_info, "", "CollisionTriggerSetupHolder");
        }
        inline app::CollisionTriggerSetupHolder* create() {
            return il2cpp::create_object<app::CollisionTriggerSetupHolder>(get_class());
        }
    } // namespace CollisionTriggerSetupHolder
} // namespace app::classes::types

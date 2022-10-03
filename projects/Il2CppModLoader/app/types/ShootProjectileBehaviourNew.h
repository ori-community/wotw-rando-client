#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShootProjectileBehaviourNew {
        namespace {
            app::ShootProjectileBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::ShootProjectileBehaviourNew__Class** type_info = &type_info_ref;
        inline app::ShootProjectileBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::ShootProjectileBehaviourNew__Class>(type_info, "", "ShootProjectileBehaviourNew");
        }
        inline app::ShootProjectileBehaviourNew* create() {
            return il2cpp::create_object<app::ShootProjectileBehaviourNew>(get_class());
        }
    } // namespace ShootProjectileBehaviourNew
} // namespace app::classes::types

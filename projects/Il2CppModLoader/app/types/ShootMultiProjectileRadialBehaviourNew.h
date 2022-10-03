#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShootMultiProjectileRadialBehaviourNew {
        namespace {
            app::ShootMultiProjectileRadialBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::ShootMultiProjectileRadialBehaviourNew__Class** type_info = &type_info_ref;
        inline app::ShootMultiProjectileRadialBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::ShootMultiProjectileRadialBehaviourNew__Class>(type_info, "", "ShootMultiProjectileRadialBehaviourNew");
        }
        inline app::ShootMultiProjectileRadialBehaviourNew* create() {
            return il2cpp::create_object<app::ShootMultiProjectileRadialBehaviourNew>(get_class());
        }
    } // namespace ShootMultiProjectileRadialBehaviourNew
} // namespace app::classes::types

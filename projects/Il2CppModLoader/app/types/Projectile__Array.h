#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Projectile__Array {
        namespace {
            app::Projectile__Array__Class* type_info_ref = nullptr;
        }
        app::Projectile__Array__Class** type_info = &type_info_ref;
        inline app::Projectile__Array__Class* get_class() {
            return il2cpp::get_class<app::Projectile__Array__Class>(type_info, "", "Projectile[]");
        }
        inline app::Projectile__Array* create() {
            return il2cpp::create_object<app::Projectile__Array>(get_class());
        }
    } // namespace Projectile__Array
} // namespace app::classes::types

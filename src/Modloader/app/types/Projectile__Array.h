#pragma once
#include <Modloader/app/structs/Projectile__Array.h>
#include <Modloader/app/structs/Projectile__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Projectile__Array {
        inline app::Projectile__Array__Class** type_info() {
            static app::Projectile__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Projectile__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Projectile__Array__Class* get_class() {
            return il2cpp::get_class<app::Projectile__Array__Class>(type_info(), "", "Projectile[]");
        }
        inline app::Projectile__Array* create() {
            return il2cpp::create_object<app::Projectile__Array>(get_class());
        }
    } // namespace Projectile__Array
} // namespace app::classes::types

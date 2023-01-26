#pragma once
#include <Modloader/app/structs/ApplyForceOnDamage.h>
#include <Modloader/app/structs/ApplyForceOnDamage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplyForceOnDamage {
        inline app::ApplyForceOnDamage__Class** type_info() {
            static app::ApplyForceOnDamage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplyForceOnDamage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplyForceOnDamage__Class* get_class() {
            return il2cpp::get_class<app::ApplyForceOnDamage__Class>(type_info(), "", "ApplyForceOnDamage");
        }
        inline app::ApplyForceOnDamage* create() {
            return il2cpp::create_object<app::ApplyForceOnDamage>(get_class());
        }
    } // namespace ApplyForceOnDamage
} // namespace app::classes::types

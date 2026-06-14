#pragma once
#include <Modloader/app/structs/CrabEntity_DamageTime__Array.h>
#include <Modloader/app/structs/CrabEntity_DamageTime__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabEntity_DamageTime__Array {
        inline app::CrabEntity_DamageTime__Array__Class** type_info() {
            static app::CrabEntity_DamageTime__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabEntity_DamageTime__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabEntity_DamageTime__Array__Class* get_class() {
            return il2cpp::get_class<app::CrabEntity_DamageTime__Array__Class>(type_info(), "", "CrabEntity+DamageTime[]");
        }
        inline app::CrabEntity_DamageTime__Array* create() {
            return il2cpp::create_object<app::CrabEntity_DamageTime__Array>(get_class());
        }
    } // namespace CrabEntity_DamageTime__Array
} // namespace app::classes::types

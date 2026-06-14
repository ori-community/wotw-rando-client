#pragma once
#include <Modloader/app/structs/DamageOwner__Array.h>
#include <Modloader/app/structs/DamageOwner__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageOwner__Array {
        inline app::DamageOwner__Array__Class** type_info() {
            static app::DamageOwner__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageOwner__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageOwner__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageOwner__Array__Class>(type_info(), "Moon", "DamageOwner[]");
        }
        inline app::DamageOwner__Array* create() {
            return il2cpp::create_object<app::DamageOwner__Array>(get_class());
        }
    } // namespace DamageOwner__Array
} // namespace app::classes::types

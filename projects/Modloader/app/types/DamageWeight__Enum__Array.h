#pragma once
#include <Modloader/app/structs/DamageWeight__Enum__Array.h>
#include <Modloader/app/structs/DamageWeight__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageWeight__Enum__Array {
        inline app::DamageWeight__Enum__Array__Class** type_info() {
            static app::DamageWeight__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageWeight__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageWeight__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageWeight__Enum__Array__Class>(type_info(), "", "DamageWeight[]");
        }
        inline app::DamageWeight__Enum__Array* create() {
            return il2cpp::create_object<app::DamageWeight__Enum__Array>(get_class());
        }
    } // namespace DamageWeight__Enum__Array
} // namespace app::classes::types

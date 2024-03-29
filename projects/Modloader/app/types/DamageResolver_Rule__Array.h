#pragma once
#include <Modloader/app/structs/DamageResolver_Rule__Array.h>
#include <Modloader/app/structs/DamageResolver_Rule__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageResolver_Rule__Array {
        inline app::DamageResolver_Rule__Array__Class** type_info() {
            static app::DamageResolver_Rule__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageResolver_Rule__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageResolver_Rule__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageResolver_Rule__Array__Class>(type_info(), "Moon", "DamageResolver+Rule[]");
        }
        inline app::DamageResolver_Rule__Array* create() {
            return il2cpp::create_object<app::DamageResolver_Rule__Array>(get_class());
        }
    } // namespace DamageResolver_Rule__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SpecialAbilityZone__Array.h>
#include <Modloader/app/structs/SpecialAbilityZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpecialAbilityZone__Array {
        inline app::SpecialAbilityZone__Array__Class** type_info() {
            static app::SpecialAbilityZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpecialAbilityZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpecialAbilityZone__Array__Class* get_class() {
            return il2cpp::get_class<app::SpecialAbilityZone__Array__Class>(type_info(), "", "SpecialAbilityZone[]");
        }
        inline app::SpecialAbilityZone__Array* create() {
            return il2cpp::create_object<app::SpecialAbilityZone__Array>(get_class());
        }
    } // namespace SpecialAbilityZone__Array
} // namespace app::classes::types

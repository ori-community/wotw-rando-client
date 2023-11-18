#pragma once
#include <Modloader/app/structs/DamageTypeCondition.h>
#include <Modloader/app/structs/DamageTypeCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageTypeCondition {
        inline app::DamageTypeCondition__Class** type_info() {
            static app::DamageTypeCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageTypeCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageTypeCondition__Class* get_class() {
            return il2cpp::get_class<app::DamageTypeCondition__Class>(type_info(), "", "DamageTypeCondition");
        }
        inline app::DamageTypeCondition* create() {
            return il2cpp::create_object<app::DamageTypeCondition>(get_class());
        }
    } // namespace DamageTypeCondition
} // namespace app::classes::types

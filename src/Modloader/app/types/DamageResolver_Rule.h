#pragma once
#include <Modloader/app/structs/DamageResolver_Rule.h>
#include <Modloader/app/structs/DamageResolver_Rule__Array.h>
#include <Modloader/app/structs/DamageResolver_Rule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageResolver_Rule {
        inline app::DamageResolver_Rule__Class** type_info() {
            static app::DamageResolver_Rule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageResolver_Rule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageResolver_Rule__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageResolver_Rule__Class>(type_info(), "Moon", "DamageResolver", "Rule");
        }
        inline app::DamageResolver_Rule* create() {
            return il2cpp::create_object<app::DamageResolver_Rule>(get_class());
        }
        inline app::DamageResolver_Rule__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageResolver_Rule__Array>(get_class(), size);
        }
        inline app::DamageResolver_Rule__Array* create_array(const std::vector<app::DamageResolver_Rule*>& items) {
            return il2cpp::array_new<app::DamageResolver_Rule__Array>(get_class(), items);
        }
    } // namespace DamageResolver_Rule
} // namespace app::classes::types

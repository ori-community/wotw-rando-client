#pragma once
#include <Modloader/app/structs/ActivateCooldownRule.h>
#include <Modloader/app/structs/ActivateCooldownRule__Array.h>
#include <Modloader/app/structs/ActivateCooldownRule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateCooldownRule {
        inline app::ActivateCooldownRule__Class** type_info() {
            static app::ActivateCooldownRule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateCooldownRule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateCooldownRule__Class* get_class() {
            return il2cpp::get_class<app::ActivateCooldownRule__Class>(type_info(), "", "ActivateCooldownRule");
        }
        inline app::ActivateCooldownRule* create() {
            return il2cpp::create_object<app::ActivateCooldownRule>(get_class());
        }
        inline app::ActivateCooldownRule__Array* create_array(int size) {
            return il2cpp::array_new<app::ActivateCooldownRule__Array>(get_class(), size);
        }
        inline app::ActivateCooldownRule__Array* create_array(const std::vector<app::ActivateCooldownRule*>& items) {
            return il2cpp::array_new<app::ActivateCooldownRule__Array>(get_class(), items);
        }
    } // namespace ActivateCooldownRule
} // namespace app::classes::types

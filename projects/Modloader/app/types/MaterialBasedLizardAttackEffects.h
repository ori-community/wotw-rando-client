#pragma once
#include <Modloader/app/structs/MaterialBasedLizardAttackEffects.h>
#include <Modloader/app/structs/MaterialBasedLizardAttackEffects__Array.h>
#include <Modloader/app/structs/MaterialBasedLizardAttackEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedLizardAttackEffects {
        inline app::MaterialBasedLizardAttackEffects__Class** type_info() {
            static app::MaterialBasedLizardAttackEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialBasedLizardAttackEffects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialBasedLizardAttackEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedLizardAttackEffects__Class>(type_info(), "", "MaterialBasedLizardAttackEffects");
        }
        inline app::MaterialBasedLizardAttackEffects* create() {
            return il2cpp::create_object<app::MaterialBasedLizardAttackEffects>(get_class());
        }
        inline app::MaterialBasedLizardAttackEffects__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialBasedLizardAttackEffects__Array>(get_class(), size);
        }
        inline app::MaterialBasedLizardAttackEffects__Array* create_array(const std::vector<app::MaterialBasedLizardAttackEffects*>& items) {
            return il2cpp::array_new<app::MaterialBasedLizardAttackEffects__Array>(get_class(), items);
        }
    } // namespace MaterialBasedLizardAttackEffects
} // namespace app::classes::types

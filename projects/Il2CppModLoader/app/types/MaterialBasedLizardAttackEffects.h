#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedLizardAttackEffects {
        namespace {
            app::MaterialBasedLizardAttackEffects__Class* type_info_ref = nullptr;
        }
        app::MaterialBasedLizardAttackEffects__Class** type_info = &type_info_ref;
        inline app::MaterialBasedLizardAttackEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedLizardAttackEffects__Class>(type_info, "", "MaterialBasedLizardAttackEffects");
        }
        inline app::MaterialBasedLizardAttackEffects* create() {
            return il2cpp::create_object<app::MaterialBasedLizardAttackEffects>(get_class());
        }
        inline app::MaterialBasedLizardAttackEffects__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialBasedLizardAttackEffects__Array>(get_class(), size);
        }
    } // namespace MaterialBasedLizardAttackEffects
} // namespace app::classes::types

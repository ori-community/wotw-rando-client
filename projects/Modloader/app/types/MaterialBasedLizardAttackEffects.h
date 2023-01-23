#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaterialBasedLizardAttackEffects__Class.h>
#include <Modloader/app/structs/MaterialBasedLizardAttackEffects.h>
#include <Modloader/app/structs/MaterialBasedLizardAttackEffects__Array.h>

namespace app::classes::types {
    namespace MaterialBasedLizardAttackEffects {
        namespace {
            inline app::MaterialBasedLizardAttackEffects__Class* type_info_ref = nullptr;
        }
        inline app::MaterialBasedLizardAttackEffects__Class** type_info = &type_info_ref;
        inline app::MaterialBasedLizardAttackEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedLizardAttackEffects__Class>(type_info, "", "MaterialBasedLizardAttackEffects");
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

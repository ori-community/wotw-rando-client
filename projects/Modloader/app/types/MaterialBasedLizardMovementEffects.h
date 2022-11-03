#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedLizardMovementEffects {
        namespace {
            inline app::MaterialBasedLizardMovementEffects__Class* type_info_ref = nullptr;
        }
        inline app::MaterialBasedLizardMovementEffects__Class** type_info = &type_info_ref;
        inline app::MaterialBasedLizardMovementEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedLizardMovementEffects__Class>(type_info, "", "MaterialBasedLizardMovementEffects");
        }
        inline app::MaterialBasedLizardMovementEffects* create() {
            return il2cpp::create_object<app::MaterialBasedLizardMovementEffects>(get_class());
        }
        inline app::MaterialBasedLizardMovementEffects__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialBasedLizardMovementEffects__Array>(get_class(), size);
        }
        inline app::MaterialBasedLizardMovementEffects__Array* create_array(const std::vector<app::MaterialBasedLizardMovementEffects*>& items) {
            return il2cpp::array_new<app::MaterialBasedLizardMovementEffects__Array>(get_class(), items);
        }
    } // namespace MaterialBasedLizardMovementEffects
} // namespace app::classes::types

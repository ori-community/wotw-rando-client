#pragma once
#include <Modloader/app/structs/MaterialBasedLizardMovementEffects.h>
#include <Modloader/app/structs/MaterialBasedLizardMovementEffects__Array.h>
#include <Modloader/app/structs/MaterialBasedLizardMovementEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedLizardMovementEffects {
        inline app::MaterialBasedLizardMovementEffects__Class** type_info() {
            static app::MaterialBasedLizardMovementEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialBasedLizardMovementEffects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialBasedLizardMovementEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedLizardMovementEffects__Class>(type_info(), "", "MaterialBasedLizardMovementEffects");
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

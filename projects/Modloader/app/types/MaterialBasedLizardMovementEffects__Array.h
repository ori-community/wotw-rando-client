#pragma once
#include <Modloader/app/structs/MaterialBasedLizardMovementEffects__Array.h>
#include <Modloader/app/structs/MaterialBasedLizardMovementEffects__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedLizardMovementEffects__Array {
        inline app::MaterialBasedLizardMovementEffects__Array__Class** type_info() {
            static app::MaterialBasedLizardMovementEffects__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaterialBasedLizardMovementEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x04745898));
            }
            return cache;
        }
        inline app::MaterialBasedLizardMovementEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedLizardMovementEffects__Array__Class>(type_info(), "", "MaterialBasedLizardMovementEffects[]");
        }
        inline app::MaterialBasedLizardMovementEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedLizardMovementEffects__Array>(get_class());
        }
    } // namespace MaterialBasedLizardMovementEffects__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/MaterialBasedHornBugMovementEffects.h>
#include <Modloader/app/structs/MaterialBasedHornBugMovementEffects__Array.h>
#include <Modloader/app/structs/MaterialBasedHornBugMovementEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedHornBugMovementEffects {
        inline app::MaterialBasedHornBugMovementEffects__Class** type_info() {
            static app::MaterialBasedHornBugMovementEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialBasedHornBugMovementEffects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialBasedHornBugMovementEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedHornBugMovementEffects__Class>(type_info(), "", "MaterialBasedHornBugMovementEffects");
        }
        inline app::MaterialBasedHornBugMovementEffects* create() {
            return il2cpp::create_object<app::MaterialBasedHornBugMovementEffects>(get_class());
        }
        inline app::MaterialBasedHornBugMovementEffects__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialBasedHornBugMovementEffects__Array>(get_class(), size);
        }
        inline app::MaterialBasedHornBugMovementEffects__Array* create_array(const std::vector<app::MaterialBasedHornBugMovementEffects*>& items) {
            return il2cpp::array_new<app::MaterialBasedHornBugMovementEffects__Array>(get_class(), items);
        }
    } // namespace MaterialBasedHornBugMovementEffects
} // namespace app::classes::types

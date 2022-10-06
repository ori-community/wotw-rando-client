#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedHornBugMovementEffects {
        namespace {
            app::MaterialBasedHornBugMovementEffects__Class* type_info_ref = nullptr;
        }
        app::MaterialBasedHornBugMovementEffects__Class** type_info = &type_info_ref;
        inline app::MaterialBasedHornBugMovementEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedHornBugMovementEffects__Class>(type_info, "", "MaterialBasedHornBugMovementEffects");
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

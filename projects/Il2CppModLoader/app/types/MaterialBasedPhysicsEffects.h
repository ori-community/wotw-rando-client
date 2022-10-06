#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedPhysicsEffects {
        namespace {
            app::MaterialBasedPhysicsEffects__Class* type_info_ref = nullptr;
        }
        app::MaterialBasedPhysicsEffects__Class** type_info = &type_info_ref;
        inline app::MaterialBasedPhysicsEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedPhysicsEffects__Class>(type_info, "", "MaterialBasedPhysicsEffects");
        }
        inline app::MaterialBasedPhysicsEffects* create() {
            return il2cpp::create_object<app::MaterialBasedPhysicsEffects>(get_class());
        }
        inline app::MaterialBasedPhysicsEffects__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialBasedPhysicsEffects__Array>(get_class(), size);
        }
        inline app::MaterialBasedPhysicsEffects__Array* create_array(const std::vector<app::MaterialBasedPhysicsEffects*>& items) {
            return il2cpp::array_new<app::MaterialBasedPhysicsEffects__Array>(get_class(), items);
        }
    } // namespace MaterialBasedPhysicsEffects
} // namespace app::classes::types

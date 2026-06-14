#pragma once
#include <Modloader/app/structs/MaterialBasedPhysicsEffects.h>
#include <Modloader/app/structs/MaterialBasedPhysicsEffects__Array.h>
#include <Modloader/app/structs/MaterialBasedPhysicsEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedPhysicsEffects {
        inline app::MaterialBasedPhysicsEffects__Class** type_info() {
            static app::MaterialBasedPhysicsEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialBasedPhysicsEffects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialBasedPhysicsEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedPhysicsEffects__Class>(type_info(), "", "MaterialBasedPhysicsEffects");
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

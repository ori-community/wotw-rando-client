#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsEffectsMap {
        namespace {
            app::PhysicsEffectsMap__Class* type_info_ref = nullptr;
        }
        app::PhysicsEffectsMap__Class** type_info = &type_info_ref;
        inline app::PhysicsEffectsMap__Class* get_class() {
            return il2cpp::get_class<app::PhysicsEffectsMap__Class>(type_info, "", "PhysicsEffectsMap");
        }
        inline app::PhysicsEffectsMap* create() {
            return il2cpp::create_object<app::PhysicsEffectsMap>(get_class());
        }
    } // namespace PhysicsEffectsMap
} // namespace app::classes::types

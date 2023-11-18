#pragma once
#include <Modloader/app/structs/PhysicsEffectsMap.h>
#include <Modloader/app/structs/PhysicsEffectsMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsEffectsMap {
        inline app::PhysicsEffectsMap__Class** type_info() {
            static app::PhysicsEffectsMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsEffectsMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsEffectsMap__Class* get_class() {
            return il2cpp::get_class<app::PhysicsEffectsMap__Class>(type_info(), "", "PhysicsEffectsMap");
        }
        inline app::PhysicsEffectsMap* create() {
            return il2cpp::create_object<app::PhysicsEffectsMap>(get_class());
        }
    } // namespace PhysicsEffectsMap
} // namespace app::classes::types

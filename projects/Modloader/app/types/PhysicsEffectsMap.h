#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsEffectsMap {
        namespace {
            inline app::PhysicsEffectsMap__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsEffectsMap__Class** type_info = &type_info_ref;
        inline app::PhysicsEffectsMap__Class* get_class() {
            return il2cpp::get_class<app::PhysicsEffectsMap__Class>(type_info, "", "PhysicsEffectsMap");
        }
        inline app::PhysicsEffectsMap* create() {
            return il2cpp::create_object<app::PhysicsEffectsMap>(get_class());
        }
    } // namespace PhysicsEffectsMap
} // namespace app::classes::types

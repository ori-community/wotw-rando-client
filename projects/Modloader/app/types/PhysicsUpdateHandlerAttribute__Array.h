#pragma once
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute__Array.h>
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsUpdateHandlerAttribute__Array {
        inline app::PhysicsUpdateHandlerAttribute__Array__Class** type_info() {
            static app::PhysicsUpdateHandlerAttribute__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsUpdateHandlerAttribute__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsUpdateHandlerAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicsUpdateHandlerAttribute__Array__Class>(type_info(), "Moon", "PhysicsUpdateHandlerAttribute[]");
        }
        inline app::PhysicsUpdateHandlerAttribute__Array* create() {
            return il2cpp::create_object<app::PhysicsUpdateHandlerAttribute__Array>(get_class());
        }
    } // namespace PhysicsUpdateHandlerAttribute__Array
} // namespace app::classes::types

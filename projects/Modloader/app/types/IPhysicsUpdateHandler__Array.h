#pragma once
#include <Modloader/app/structs/IPhysicsUpdateHandler__Array.h>
#include <Modloader/app/structs/IPhysicsUpdateHandler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPhysicsUpdateHandler__Array {
        inline app::IPhysicsUpdateHandler__Array__Class** type_info() {
            static app::IPhysicsUpdateHandler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPhysicsUpdateHandler__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPhysicsUpdateHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsUpdateHandler__Array__Class>(type_info(), "Moon", "IPhysicsUpdateHandler[]");
        }
        inline app::IPhysicsUpdateHandler__Array* create() {
            return il2cpp::create_object<app::IPhysicsUpdateHandler__Array>(get_class());
        }
    } // namespace IPhysicsUpdateHandler__Array
} // namespace app::classes::types

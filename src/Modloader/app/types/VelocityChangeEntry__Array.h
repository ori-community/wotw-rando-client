#pragma once
#include <Modloader/app/structs/VelocityChangeEntry__Array.h>
#include <Modloader/app/structs/VelocityChangeEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VelocityChangeEntry__Array {
        inline app::VelocityChangeEntry__Array__Class** type_info() {
            static app::VelocityChangeEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VelocityChangeEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VelocityChangeEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::VelocityChangeEntry__Array__Class>(type_info(), "PhysicsDebugTools", "VelocityChangeEntry[]");
        }
        inline app::VelocityChangeEntry__Array* create() {
            return il2cpp::create_object<app::VelocityChangeEntry__Array>(get_class());
        }
    } // namespace VelocityChangeEntry__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/Record__Array.h>
#include <Modloader/app/structs/Record__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Record__Array {
        inline app::Record__Array__Class** type_info() {
            static app::Record__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Record__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Record__Array__Class* get_class() {
            return il2cpp::get_class<app::Record__Array__Class>(type_info(), "PhysicsDebugTools", "Record[]");
        }
        inline app::Record__Array* create() {
            return il2cpp::create_object<app::Record__Array>(get_class());
        }
    } // namespace Record__Array
} // namespace app::classes::types

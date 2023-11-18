#pragma once
#include <Modloader/app/structs/RecordEntry__Array.h>
#include <Modloader/app/structs/RecordEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordEntry__Array {
        inline app::RecordEntry__Array__Class** type_info() {
            static app::RecordEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RecordEntry__Array__Class>(type_info(), "PhysicsDebugTools", "RecordEntry[]");
        }
        inline app::RecordEntry__Array* create() {
            return il2cpp::create_object<app::RecordEntry__Array>(get_class());
        }
    } // namespace RecordEntry__Array
} // namespace app::classes::types

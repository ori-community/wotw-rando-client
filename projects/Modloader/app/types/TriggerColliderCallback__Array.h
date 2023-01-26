#pragma once
#include <Modloader/app/structs/TriggerColliderCallback__Array.h>
#include <Modloader/app/structs/TriggerColliderCallback__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerColliderCallback__Array {
        inline app::TriggerColliderCallback__Array__Class** type_info() {
            static app::TriggerColliderCallback__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerColliderCallback__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerColliderCallback__Array__Class* get_class() {
            return il2cpp::get_class<app::TriggerColliderCallback__Array__Class>(type_info(), "", "TriggerColliderCallback[]");
        }
        inline app::TriggerColliderCallback__Array* create() {
            return il2cpp::create_object<app::TriggerColliderCallback__Array>(get_class());
        }
    } // namespace TriggerColliderCallback__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/CollisionTriggerSetupData__Array.h>
#include <Modloader/app/structs/CollisionTriggerSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionTriggerSetupData__Array {
        inline app::CollisionTriggerSetupData__Array__Class** type_info() {
            static app::CollisionTriggerSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionTriggerSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionTriggerSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::CollisionTriggerSetupData__Array__Class>(type_info(), "", "CollisionTriggerSetupData[]");
        }
        inline app::CollisionTriggerSetupData__Array* create() {
            return il2cpp::create_object<app::CollisionTriggerSetupData__Array>(get_class());
        }
    } // namespace CollisionTriggerSetupData__Array
} // namespace app::classes::types

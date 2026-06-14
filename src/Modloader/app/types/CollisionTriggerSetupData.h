#pragma once
#include <Modloader/app/structs/CollisionTriggerSetupData.h>
#include <Modloader/app/structs/CollisionTriggerSetupData__Array.h>
#include <Modloader/app/structs/CollisionTriggerSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionTriggerSetupData {
        inline app::CollisionTriggerSetupData__Class** type_info() {
            static app::CollisionTriggerSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionTriggerSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionTriggerSetupData__Class* get_class() {
            return il2cpp::get_class<app::CollisionTriggerSetupData__Class>(type_info(), "", "CollisionTriggerSetupData");
        }
        inline app::CollisionTriggerSetupData* create() {
            return il2cpp::create_object<app::CollisionTriggerSetupData>(get_class());
        }
        inline app::CollisionTriggerSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::CollisionTriggerSetupData__Array>(get_class(), size);
        }
        inline app::CollisionTriggerSetupData__Array* create_array(const std::vector<app::CollisionTriggerSetupData*>& items) {
            return il2cpp::array_new<app::CollisionTriggerSetupData__Array>(get_class(), items);
        }
    } // namespace CollisionTriggerSetupData
} // namespace app::classes::types

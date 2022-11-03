#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollisionTriggerSetupData__Array {
        namespace {
            inline app::CollisionTriggerSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::CollisionTriggerSetupData__Array__Class** type_info = &type_info_ref;
        inline app::CollisionTriggerSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::CollisionTriggerSetupData__Array__Class>(type_info, "", "CollisionTriggerSetupData[]");
        }
        inline app::CollisionTriggerSetupData__Array* create() {
            return il2cpp::create_object<app::CollisionTriggerSetupData__Array>(get_class());
        }
    } // namespace CollisionTriggerSetupData__Array
} // namespace app::classes::types

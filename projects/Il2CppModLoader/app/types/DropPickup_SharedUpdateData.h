#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropPickup_SharedUpdateData {
        namespace {
            app::DropPickup_SharedUpdateData__Class* type_info_ref = nullptr;
        }
        app::DropPickup_SharedUpdateData__Class** type_info = &type_info_ref;
        inline app::DropPickup_SharedUpdateData__Class* get_class() {
            return il2cpp::get_nested_class<app::DropPickup_SharedUpdateData__Class>(type_info, "", "DropPickup", "SharedUpdateData");
        }
        inline app::DropPickup_SharedUpdateData* create() {
            return il2cpp::create_object<app::DropPickup_SharedUpdateData>(get_class());
        }
        inline app::DropPickup_SharedUpdateData__Boxed* box(app::DropPickup_SharedUpdateData value) {
            return il2cpp::box_value<app::DropPickup_SharedUpdateData__Boxed>(get_class(), value);
        }
    } // namespace DropPickup_SharedUpdateData
} // namespace app::classes::types

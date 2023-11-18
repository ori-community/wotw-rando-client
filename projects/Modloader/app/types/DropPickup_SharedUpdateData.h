#pragma once
#include <Modloader/app/structs/DropPickup_SharedUpdateData.h>
#include <Modloader/app/structs/DropPickup_SharedUpdateData__Boxed.h>
#include <Modloader/app/structs/DropPickup_SharedUpdateData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropPickup_SharedUpdateData {
        inline app::DropPickup_SharedUpdateData__Class** type_info() {
            static app::DropPickup_SharedUpdateData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropPickup_SharedUpdateData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropPickup_SharedUpdateData__Class* get_class() {
            return il2cpp::get_nested_class<app::DropPickup_SharedUpdateData__Class>(type_info(), "", "DropPickup", "SharedUpdateData");
        }
        inline app::DropPickup_SharedUpdateData* create() {
            return il2cpp::create_object<app::DropPickup_SharedUpdateData>(get_class());
        }
        inline app::DropPickup_SharedUpdateData__Boxed* box(app::DropPickup_SharedUpdateData value) {
            return il2cpp::box_value<app::DropPickup_SharedUpdateData__Boxed>(get_class(), value);
        }
    } // namespace DropPickup_SharedUpdateData
} // namespace app::classes::types

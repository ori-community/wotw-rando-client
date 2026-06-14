#pragma once
#include <Modloader/app/structs/GetEquipmentAction.h>
#include <Modloader/app/structs/GetEquipmentAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetEquipmentAction {
        inline app::GetEquipmentAction__Class** type_info() {
            static app::GetEquipmentAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetEquipmentAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetEquipmentAction__Class* get_class() {
            return il2cpp::get_class<app::GetEquipmentAction__Class>(type_info(), "", "GetEquipmentAction");
        }
        inline app::GetEquipmentAction* create() {
            return il2cpp::create_object<app::GetEquipmentAction>(get_class());
        }
    } // namespace GetEquipmentAction
} // namespace app::classes::types

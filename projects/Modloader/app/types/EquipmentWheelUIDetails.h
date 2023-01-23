#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EquipmentWheelUIDetails__Class.h>
#include <Modloader/app/structs/EquipmentWheelUIDetails.h>

namespace app::classes::types {
    namespace EquipmentWheelUIDetails {
        namespace {
            inline app::EquipmentWheelUIDetails__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentWheelUIDetails__Class** type_info = &type_info_ref;
        inline app::EquipmentWheelUIDetails__Class* get_class() {
            return il2cpp::get_class<app::EquipmentWheelUIDetails__Class>(type_info, "", "EquipmentWheelUIDetails");
        }
        inline app::EquipmentWheelUIDetails* create() {
            return il2cpp::create_object<app::EquipmentWheelUIDetails>(get_class());
        }
    } // namespace EquipmentWheelUIDetails
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EquipmentUIDetails__Class.h>
#include <Modloader/app/structs/EquipmentUIDetails.h>

namespace app::classes::types {
    namespace EquipmentUIDetails {
        namespace {
            inline app::EquipmentUIDetails__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentUIDetails__Class** type_info = &type_info_ref;
        inline app::EquipmentUIDetails__Class* get_class() {
            return il2cpp::get_class<app::EquipmentUIDetails__Class>(type_info, "", "EquipmentUIDetails");
        }
        inline app::EquipmentUIDetails* create() {
            return il2cpp::create_object<app::EquipmentUIDetails>(get_class());
        }
    } // namespace EquipmentUIDetails
} // namespace app::classes::types

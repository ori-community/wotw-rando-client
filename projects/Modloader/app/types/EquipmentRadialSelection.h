#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EquipmentRadialSelection__Class.h>
#include <Modloader/app/structs/EquipmentRadialSelection.h>

namespace app::classes::types {
    namespace EquipmentRadialSelection {
        namespace {
            inline app::EquipmentRadialSelection__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentRadialSelection__Class** type_info = &type_info_ref;
        inline app::EquipmentRadialSelection__Class* get_class() {
            return il2cpp::get_class<app::EquipmentRadialSelection__Class>(type_info, "", "EquipmentRadialSelection");
        }
        inline app::EquipmentRadialSelection* create() {
            return il2cpp::create_object<app::EquipmentRadialSelection>(get_class());
        }
    } // namespace EquipmentRadialSelection
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnergyDoor__Class.h>
#include <Modloader/app/structs/EnergyDoor.h>

namespace app::classes::types {
    namespace EnergyDoor {
        namespace {
            inline app::EnergyDoor__Class* type_info_ref = nullptr;
        }
        inline app::EnergyDoor__Class** type_info = &type_info_ref;
        inline app::EnergyDoor__Class* get_class() {
            return il2cpp::get_class<app::EnergyDoor__Class>(type_info, "", "EnergyDoor");
        }
        inline app::EnergyDoor* create() {
            return il2cpp::create_object<app::EnergyDoor>(get_class());
        }
    } // namespace EnergyDoor
} // namespace app::classes::types

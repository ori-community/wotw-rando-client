#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnergyDoorSlot__Array__Class.h>
#include <Modloader/app/structs/EnergyDoorSlot__Array.h>

namespace app::classes::types {
    namespace EnergyDoorSlot__Array {
        namespace {
            inline app::EnergyDoorSlot__Array__Class* type_info_ref = nullptr;
        }
        inline app::EnergyDoorSlot__Array__Class** type_info = &type_info_ref;
        inline app::EnergyDoorSlot__Array__Class* get_class() {
            return il2cpp::get_class<app::EnergyDoorSlot__Array__Class>(type_info, "", "EnergyDoorSlot[]");
        }
        inline app::EnergyDoorSlot__Array* create() {
            return il2cpp::create_object<app::EnergyDoorSlot__Array>(get_class());
        }
    } // namespace EnergyDoorSlot__Array
} // namespace app::classes::types

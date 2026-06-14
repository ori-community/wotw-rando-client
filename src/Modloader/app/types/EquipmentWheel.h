#pragma once
#include <Modloader/app/structs/EquipmentWheel.h>
#include <Modloader/app/structs/EquipmentWheel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentWheel {
        inline app::EquipmentWheel__Class** type_info() {
            static app::EquipmentWheel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EquipmentWheel__Class**)(modloader::win::memory::resolve_rva(0x0474DE98));
            }
            return cache;
        }
        inline app::EquipmentWheel__Class* get_class() {
            return il2cpp::get_class<app::EquipmentWheel__Class>(type_info(), "", "EquipmentWheel");
        }
        inline app::EquipmentWheel* create() {
            return il2cpp::create_object<app::EquipmentWheel>(get_class());
        }
    } // namespace EquipmentWheel
} // namespace app::classes::types

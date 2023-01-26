#pragma once
#include <Modloader/app/structs/EquipmentWheel_c.h>
#include <Modloader/app/structs/EquipmentWheel_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentWheel_c {
        inline app::EquipmentWheel_c__Class** type_info() {
            static app::EquipmentWheel_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EquipmentWheel_c__Class**)(modloader::win::memory::resolve_rva(0x0470EFC8));
            }
            return cache;
        }
        inline app::EquipmentWheel_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentWheel_c__Class>(type_info(), "", "EquipmentWheel", "<>c");
        }
        inline app::EquipmentWheel_c* create() {
            return il2cpp::create_object<app::EquipmentWheel_c>(get_class());
        }
    } // namespace EquipmentWheel_c
} // namespace app::classes::types

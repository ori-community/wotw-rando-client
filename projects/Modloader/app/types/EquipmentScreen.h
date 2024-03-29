#pragma once
#include <Modloader/app/structs/EquipmentScreen.h>
#include <Modloader/app/structs/EquipmentScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentScreen {
        inline app::EquipmentScreen__Class** type_info() {
            static app::EquipmentScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EquipmentScreen__Class**)(modloader::win::memory::resolve_rva(0x0477E788));
            }
            return cache;
        }
        inline app::EquipmentScreen__Class* get_class() {
            return il2cpp::get_class<app::EquipmentScreen__Class>(type_info(), "", "EquipmentScreen");
        }
        inline app::EquipmentScreen* create() {
            return il2cpp::create_object<app::EquipmentScreen>(get_class());
        }
    } // namespace EquipmentScreen
} // namespace app::classes::types

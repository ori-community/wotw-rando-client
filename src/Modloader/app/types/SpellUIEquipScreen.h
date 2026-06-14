#pragma once
#include <Modloader/app/structs/SpellUIEquipScreen.h>
#include <Modloader/app/structs/SpellUIEquipScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIEquipScreen {
        inline app::SpellUIEquipScreen__Class** type_info() {
            static app::SpellUIEquipScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpellUIEquipScreen__Class**)(modloader::win::memory::resolve_rva(0x0470EE48));
            }
            return cache;
        }
        inline app::SpellUIEquipScreen__Class* get_class() {
            return il2cpp::get_class<app::SpellUIEquipScreen__Class>(type_info(), "", "SpellUIEquipScreen");
        }
        inline app::SpellUIEquipScreen* create() {
            return il2cpp::create_object<app::SpellUIEquipScreen>(get_class());
        }
    } // namespace SpellUIEquipScreen
} // namespace app::classes::types

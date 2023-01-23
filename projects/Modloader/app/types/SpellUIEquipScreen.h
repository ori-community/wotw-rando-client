#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpellUIEquipScreen__Class.h>
#include <Modloader/app/structs/SpellUIEquipScreen.h>

namespace app::classes::types {
    namespace SpellUIEquipScreen {
        inline app::SpellUIEquipScreen__Class** type_info = (app::SpellUIEquipScreen__Class**)(modloader::win::memory::resolve_rva(0x0470EE48));
        inline app::SpellUIEquipScreen__Class* get_class() {
            return il2cpp::get_class<app::SpellUIEquipScreen__Class>(type_info, "", "SpellUIEquipScreen");
        }
        inline app::SpellUIEquipScreen* create() {
            return il2cpp::create_object<app::SpellUIEquipScreen>(get_class());
        }
    } // namespace SpellUIEquipScreen
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SpellInventory_c.h>
#include <Modloader/app/structs/SpellInventory_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellInventory_c {
        inline app::SpellInventory_c__Class** type_info() {
            static app::SpellInventory_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpellInventory_c__Class**)(modloader::win::memory::resolve_rva(0x04705480));
            }
            return cache;
        }
        inline app::SpellInventory_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellInventory_c__Class>(type_info(), "", "SpellInventory", "<>c");
        }
        inline app::SpellInventory_c* create() {
            return il2cpp::create_object<app::SpellInventory_c>(get_class());
        }
    } // namespace SpellInventory_c
} // namespace app::classes::types

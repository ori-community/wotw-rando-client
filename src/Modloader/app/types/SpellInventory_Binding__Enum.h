#pragma once
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum__Array.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellInventory_Binding__Enum {
        inline app::SpellInventory_Binding__Enum__Class** type_info() {
            static app::SpellInventory_Binding__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpellInventory_Binding__Enum__Class**)(modloader::win::memory::resolve_rva(0x04717368));
            }
            return cache;
        }
        inline app::SpellInventory_Binding__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellInventory_Binding__Enum__Class>(type_info(), "", "SpellInventory", "Binding");
        }
        inline app::SpellInventory_Binding__Enum* create() {
            return il2cpp::create_object<app::SpellInventory_Binding__Enum>(get_class());
        }
        inline app::SpellInventory_Binding__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SpellInventory_Binding__Enum__Array>(get_class(), size);
        }
        inline app::SpellInventory_Binding__Enum__Array* create_array(const std::vector<app::SpellInventory_Binding__Enum*>& items) {
            return il2cpp::array_new<app::SpellInventory_Binding__Enum__Array>(get_class(), items);
        }
    } // namespace SpellInventory_Binding__Enum
} // namespace app::classes::types

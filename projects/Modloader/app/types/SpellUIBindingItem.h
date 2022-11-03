#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellUIBindingItem {
        namespace {
            inline app::SpellUIBindingItem__Class* type_info_ref = nullptr;
        }
        inline app::SpellUIBindingItem__Class** type_info = &type_info_ref;
        inline app::SpellUIBindingItem__Class* get_class() {
            return il2cpp::get_class<app::SpellUIBindingItem__Class>(type_info, "", "SpellUIBindingItem");
        }
        inline app::SpellUIBindingItem* create() {
            return il2cpp::create_object<app::SpellUIBindingItem>(get_class());
        }
    } // namespace SpellUIBindingItem
} // namespace app::classes::types
